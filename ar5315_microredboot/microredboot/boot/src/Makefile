#
# linux/arch/mips/boot/compressed/Makefile
#
# create a compressed vmlinuz image from the original vmlinux
#
# Note: SYSTEM, ZTEXTADDR, ZBSSADDR and ZRELADDR are exported
# from arch/mips/boot/Makefile. Their meanings are as follows:
#
# ZTEXTADDR
#	Start address of decompressor.  You normally call the kernel
#	at this address to start it booting.  This doesn't have
#	to be located in RAM, it can be in flash or other read-only or
#	read-write addressable medium. It should be an address in kseg1.
#
# ZBSSADDR
#	Start address of zero-initialised work area for the decompressor.
#	This must be pointing at RAM.  The decompressor will zero initialise
#	this for you. It should be an address in kseg1 too. The default for
#	this is to place it just after the image (so when running the code
#	from ROM you will need to set this to something useful).
#
# ZRELADDR
#	This is the address where the decompressed kernel will be written,
#	and eventually executed. It will be in kseg0.
#

REWRITE_REVISION_H1 := $(shell echo -n '\#define SVN_REVISION "' > revision.h)
REWRITE_REVISION_H2 := $(shell svnversion -n ../ >> revision.h)
REWRITE_REVISION_H3 := $(shell echo '"' >> revision.h)


CC = /xfs/toolchains/staging_dir_mips/bin/mips-linux-gcc
LD = /xfs/toolchains/staging_dir_mips/bin/mips-linux-ld
#CC = /home/seg/DEV/broadcom/ar5315_microredboot/microredboot/tools/ecos_build/gnutools/mipsisa32-elf/bin/mipsisa32-elf-gcc
#LD = /home/seg/DEV/broadcom/ar5315_microredboot/microredboot/tools/ecos_build/gnutools/mipsisa32-elf/bin/mipsisa32-elf-ld
OBJCOPY = /xfs/toolchains/staging_dir_mips/bin/mips-linux-objcopy 
STRIP = /xfs/toolchains/staging_dir_mips/bin/mips-linux-strip
CFLAGS = -Os -G 0 -mabi=32 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -Iinclude -Iarch -Ilib -I. -Iinclude/asm-mips/mach-atheros -Iinclude/asm/mach-generic -DMIPSEB -D_MIPSEB -D__MIPSEB -D__MIPSEB__ -U_MIPS_ISA -D_MIPS_ISA=_MIPS_ISA_MIPS32 -D__KERNEL__
CFLAGS+= -DCONFIG_MIPS_L1_CACHE_SHIFT=5 -DCONFIG_PAGE_SIZE_4KB -DCONFIG_32BIT -DCONFIG_BOOTLOADER
AFLAGS = -D__ASSEMBLY__ -G 0 -mabi=32 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -Iinclude -I. -Iinclude/asm-mips/mach-atheros -Iinclude/asm/mach-generic -DMIPSEB -D_MIPSEB -D__MIPSEB -D__MIPSEB__ -U_MIPS_ISA -D_MIPS_ISA=_MIPS_ISA_MIPS32
AFLAGS+= -DCONFIG_MIPS_L1_CACHE_SHIFT=5 -DCONFIG_PAGE_SIZE_4KB -DCONFIG_32BIT -DCONFIG_BOOTLOADER 

ifeq ($(PLATFORM),pb42)
CFLAGS+=-march=mips32r2
AFLAGS+=-march=mips32r2
else
CFLAGS+=-march=mips32
AFLAGS+=-march=mips32
endif
ifeq ($(PLATFORM),ap51)
CFLAGS+= -DHAVE_ap51
AFLAGS+= -DHAVE_ap51
endif
ifeq ($(PLATFORM),ap61)
CFLAGS+= -DHAVE_ap61
AFLAGS+= -DHAVE_ap61
endif
ifeq ($(PLATFORM),ap65)
CFLAGS+= -DHAVE_ap65
AFLAGS+= -DHAVE_ap65
endif


HEAD		 = head.o
OBJS		 = misc_lzma.o 
MEMCPY 		 = lib/memset.o
# CFLAGS	 = $(CPPFLAGS) -O2 -DSTDC_HEADERS $(CFLAGS_BOOT)
ZLDFLAGS	 = -G 0 -static -X -T ld.script

SYSTEM		 = redboot.elf

#
# Architecture dependencies
#
OBJS		+= arch/head-ar5315.o arch/head-ar531x.o arch/head-ar7100.o

#ifneq ($(CONFIG_BOOTLOADER),y)
#ZTEXTADDR	= 0x80400000
#else
ZTEXTADDR	= 0x80400000	# 0x9fc00000 Link at cached address
ZBSSADDR	= 0x80700000	# Workspace for decompression @ 7MB
ZCACHEADDR	= 0x80800000    # decompression cache @ 8 MB
#endif
ZRELADDR	= 0x80000400  # 0x80002000


AFLAGS+= -DZCACHEADDR=$(ZCACHEADDR)
CFLAGS+= -DZCACHEADDR=$(ZCACHEADDR)

SEDFLAGS	= s/@@TEXTADDR@@/$(ZTEXTADDR)/;s/@@LOADADDR@@/$(ZRELADDR)/;

ifneq ($(ZBSSADDR),)
SEDFLAGS	+= s/@@BSSADDR@@/$(ZBSSADDR)/
else
SEDFLAGS	+= s/@@BSSADDR@@/ALIGN(4)/
endif

LIBGCC		:= $(shell $(CC) $(CFLAGS) --print-libgcc-file-name)

all:		vmlinuz

vmlinuz:	$(OBJS) $(HEAD) $(MEMCPY) payload.o ld.script
		$(LD) $(ZLDFLAGS) $(HEAD) $(OBJS) $(MEMCPY) payload.o $(LIBGCC) -o vmlinuz 
		$(STRIP) -g -R .pdr -R .gnu.attributes -R .reginfo -R .mdebug -R .comment -R .note -R .options -R .MIPS.options -R .bss $@

$(HEAD): 	$(HEAD:.o=.S) include/linux/autoconf.h
		$(CC) $(AFLAGS) -Iinclude -c $(HEAD:.o=.S) -o $(HEAD) 

arch/head-ar531x.o: arch/head-ar531x.S include/linux/autoconf.h
		$(CC) $(AFLAGS) -Iinclude -c arch/head-ar531x.S -o arch/head-ar531x.o

arch/head-ar5315.o: arch/head-ar5315.S include/linux/autoconf.h
		$(CC) $(AFLAGS) -Iinclude -c arch/head-ar5315.S -o arch/head-ar5315.o

arch/head-ar7100.o: arch/head-ar7100.S include/linux/autoconf.h
		$(CC) $(AFLAGS) -Iinclude -c arch/head-ar7100.S -o arch/head-ar7100.o

payload.o:	$(SYSTEM) __payload.o
		$(OBJCOPY) -O binary -R .note -R .comment -S $(SYSTEM) payload
		lzma e -lc1 -lp2 -pb2 payload payload.gz
		$(LD) -r -o $@ __payload.o -b binary payload.gz
#		rm -f payload payload.gz

ld.script:	ld.script.in Makefile
		sed "$(SEDFLAGS)" < ld.script.in > $@

clean:;		rm -f payload* ld.script *.o *.c~ *.h~ lib/*.o lib/*.c~ arch/*.c~ lib/*.h~ arch/*.h~  arch/*.o

.PHONY:	clean


misc.o:		misc.c lib/inflate.c

misc_lzma.o:		misc_lzma.c lib/LzmaDecode.c

%.o: %.S
	$(CC) $(AFLAGS) $(EXTRA_AFLAGS) $(AFLAGS_$@) -c -o $@ $<
