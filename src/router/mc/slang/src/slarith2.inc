/* ------------ char ---------- */
DEFUN_1(copy_char_to_char,char,char)
#define char_to_char	NULL
#define copy_char_to_uchar	copy_char_to_char
#define char_to_uchar	NULL
DEFUN_1(copy_char_to_short,char,short)
#define char_to_short	NULL
DEFUN_1(copy_char_to_ushort,char,unsigned short)
#define char_to_ushort	NULL
DEFUN_1(copy_char_to_int,char,int)
DEFUN_2(char_to_int,char,int,copy_char_to_int)
DEFUN_1(copy_char_to_uint,char,unsigned int)
DEFUN_2(char_to_uint,char,unsigned int,copy_char_to_uint)
DEFUN_1(copy_char_to_long,char,long)
DEFUN_2(char_to_long,char,long,copy_char_to_long)
DEFUN_1(copy_char_to_ulong,char,unsigned long)
DEFUN_2(char_to_ulong,char,unsigned long,copy_char_to_ulong)
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_char_to_llong,char,long long)
DEFUN_2(char_to_llong,char,long long,copy_char_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_char_to_ullong,char,unsigned long long)
DEFUN_2(char_to_ullong,char,unsigned long long,copy_char_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_char_to_float,char,float)
DEFUN_2(char_to_float,char,float,copy_char_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_char_to_double,char,double)
DEFUN_2(char_to_double,char,double,copy_char_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_char_to_ldouble,char,long double)
DEFUN_2(char_to_ldouble,char,long double,copy_char_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(char_to_one_double,char)
#endif


/* ------------ unsigned char ---------- */
#define copy_uchar_to_char	copy_char_to_char
#define uchar_to_char	NULL
#define copy_uchar_to_uchar	copy_char_to_char
#define uchar_to_uchar	NULL
DEFUN_1(copy_uchar_to_short,unsigned char,short)
#define uchar_to_short	NULL
DEFUN_1(copy_uchar_to_ushort,unsigned char,unsigned short)
#define uchar_to_ushort	NULL
DEFUN_1(copy_uchar_to_int,unsigned char,int)
DEFUN_2(uchar_to_int,unsigned char,int,copy_uchar_to_int)
DEFUN_1(copy_uchar_to_uint,unsigned char,unsigned int)
DEFUN_2(uchar_to_uint,unsigned char,unsigned int,copy_uchar_to_uint)
DEFUN_1(copy_uchar_to_long,unsigned char,long)
DEFUN_2(uchar_to_long,unsigned char,long,copy_uchar_to_long)
DEFUN_1(copy_uchar_to_ulong,unsigned char,unsigned long)
DEFUN_2(uchar_to_ulong,unsigned char,unsigned long,copy_uchar_to_ulong)
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_uchar_to_llong,unsigned char,long long)
DEFUN_2(uchar_to_llong,unsigned char,long long,copy_uchar_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_uchar_to_ullong,unsigned char,unsigned long long)
DEFUN_2(uchar_to_ullong,unsigned char,unsigned long long,copy_uchar_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_uchar_to_float,unsigned char,float)
DEFUN_2(uchar_to_float,unsigned char,float,copy_uchar_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_uchar_to_double,unsigned char,double)
DEFUN_2(uchar_to_double,unsigned char,double,copy_uchar_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_uchar_to_ldouble,unsigned char,long double)
DEFUN_2(uchar_to_ldouble,unsigned char,long double,copy_uchar_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(uchar_to_one_double,unsigned char)
#endif


/* ------------ short ---------- */
DEFUN_1(copy_short_to_char,short,char)
#define short_to_char	NULL
DEFUN_1(copy_short_to_uchar,short,unsigned char)
#define short_to_uchar	NULL
DEFUN_1(copy_short_to_short,short,short)
#define short_to_short	NULL
#define copy_short_to_ushort	copy_short_to_short
#define short_to_ushort	NULL
DEFUN_1(copy_short_to_int,short,int)
DEFUN_2(short_to_int,short,int,copy_short_to_int)
DEFUN_1(copy_short_to_uint,short,unsigned int)
DEFUN_2(short_to_uint,short,unsigned int,copy_short_to_uint)
DEFUN_1(copy_short_to_long,short,long)
DEFUN_2(short_to_long,short,long,copy_short_to_long)
DEFUN_1(copy_short_to_ulong,short,unsigned long)
DEFUN_2(short_to_ulong,short,unsigned long,copy_short_to_ulong)
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_short_to_llong,short,long long)
DEFUN_2(short_to_llong,short,long long,copy_short_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_short_to_ullong,short,unsigned long long)
DEFUN_2(short_to_ullong,short,unsigned long long,copy_short_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_short_to_float,short,float)
DEFUN_2(short_to_float,short,float,copy_short_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_short_to_double,short,double)
DEFUN_2(short_to_double,short,double,copy_short_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_short_to_ldouble,short,long double)
DEFUN_2(short_to_ldouble,short,long double,copy_short_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(short_to_one_double,short)
#endif


/* ------------ unsigned short ---------- */
DEFUN_1(copy_ushort_to_char,unsigned short,char)
#define ushort_to_char	NULL
DEFUN_1(copy_ushort_to_uchar,unsigned short,unsigned char)
#define ushort_to_uchar	NULL
#define copy_ushort_to_short	copy_short_to_short
#define ushort_to_short	NULL
#define copy_ushort_to_ushort	copy_short_to_short
#define ushort_to_ushort	NULL
DEFUN_1(copy_ushort_to_int,unsigned short,int)
DEFUN_2(ushort_to_int,unsigned short,int,copy_ushort_to_int)
DEFUN_1(copy_ushort_to_uint,unsigned short,unsigned int)
DEFUN_2(ushort_to_uint,unsigned short,unsigned int,copy_ushort_to_uint)
DEFUN_1(copy_ushort_to_long,unsigned short,long)
DEFUN_2(ushort_to_long,unsigned short,long,copy_ushort_to_long)
DEFUN_1(copy_ushort_to_ulong,unsigned short,unsigned long)
DEFUN_2(ushort_to_ulong,unsigned short,unsigned long,copy_ushort_to_ulong)
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ushort_to_llong,unsigned short,long long)
DEFUN_2(ushort_to_llong,unsigned short,long long,copy_ushort_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ushort_to_ullong,unsigned short,unsigned long long)
DEFUN_2(ushort_to_ullong,unsigned short,unsigned long long,copy_ushort_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ushort_to_float,unsigned short,float)
DEFUN_2(ushort_to_float,unsigned short,float,copy_ushort_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ushort_to_double,unsigned short,double)
DEFUN_2(ushort_to_double,unsigned short,double,copy_ushort_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_ushort_to_ldouble,unsigned short,long double)
DEFUN_2(ushort_to_ldouble,unsigned short,long double,copy_ushort_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(ushort_to_one_double,unsigned short)
#endif


/* ------------ int ---------- */
DEFUN_1(copy_int_to_char,int,char)
#define int_to_char	NULL
DEFUN_1(copy_int_to_uchar,int,unsigned char)
#define int_to_uchar	NULL
DEFUN_1(copy_int_to_short,int,short)
#define int_to_short	NULL
DEFUN_1(copy_int_to_ushort,int,unsigned short)
#define int_to_ushort	NULL
DEFUN_1(copy_int_to_int,int,int)
#define int_to_int	NULL
#define copy_int_to_uint	copy_int_to_int
#define int_to_uint	NULL
DEFUN_1(copy_int_to_long,int,long)
DEFUN_2(int_to_long,int,long,copy_int_to_long)
DEFUN_1(copy_int_to_ulong,int,unsigned long)
DEFUN_2(int_to_ulong,int,unsigned long,copy_int_to_ulong)
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_int_to_llong,int,long long)
DEFUN_2(int_to_llong,int,long long,copy_int_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_int_to_ullong,int,unsigned long long)
DEFUN_2(int_to_ullong,int,unsigned long long,copy_int_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_int_to_float,int,float)
DEFUN_2(int_to_float,int,float,copy_int_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_int_to_double,int,double)
DEFUN_2(int_to_double,int,double,copy_int_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_int_to_ldouble,int,long double)
DEFUN_2(int_to_ldouble,int,long double,copy_int_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(int_to_one_double,int)
#endif


/* ------------ unsigned int ---------- */
DEFUN_1(copy_uint_to_char,unsigned int,char)
#define uint_to_char	NULL
DEFUN_1(copy_uint_to_uchar,unsigned int,unsigned char)
#define uint_to_uchar	NULL
DEFUN_1(copy_uint_to_short,unsigned int,short)
#define uint_to_short	NULL
DEFUN_1(copy_uint_to_ushort,unsigned int,unsigned short)
#define uint_to_ushort	NULL
#define copy_uint_to_int	copy_int_to_int
#define uint_to_int	NULL
#define copy_uint_to_uint	copy_int_to_int
#define uint_to_uint	NULL
DEFUN_1(copy_uint_to_long,unsigned int,long)
DEFUN_2(uint_to_long,unsigned int,long,copy_uint_to_long)
DEFUN_1(copy_uint_to_ulong,unsigned int,unsigned long)
DEFUN_2(uint_to_ulong,unsigned int,unsigned long,copy_uint_to_ulong)
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_uint_to_llong,unsigned int,long long)
DEFUN_2(uint_to_llong,unsigned int,long long,copy_uint_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_uint_to_ullong,unsigned int,unsigned long long)
DEFUN_2(uint_to_ullong,unsigned int,unsigned long long,copy_uint_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_uint_to_float,unsigned int,float)
DEFUN_2(uint_to_float,unsigned int,float,copy_uint_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_uint_to_double,unsigned int,double)
DEFUN_2(uint_to_double,unsigned int,double,copy_uint_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_uint_to_ldouble,unsigned int,long double)
DEFUN_2(uint_to_ldouble,unsigned int,long double,copy_uint_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(uint_to_one_double,unsigned int)
#endif


/* ------------ long ---------- */
DEFUN_1(copy_long_to_char,long,char)
#define long_to_char	NULL
DEFUN_1(copy_long_to_uchar,long,unsigned char)
#define long_to_uchar	NULL
DEFUN_1(copy_long_to_short,long,short)
#define long_to_short	NULL
DEFUN_1(copy_long_to_ushort,long,unsigned short)
#define long_to_ushort	NULL
DEFUN_1(copy_long_to_int,long,int)
#define long_to_int	NULL
DEFUN_1(copy_long_to_uint,long,unsigned int)
#define long_to_uint	NULL
DEFUN_1(copy_long_to_long,long,long)
#define long_to_long	NULL
#define copy_long_to_ulong	copy_long_to_long
#define long_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_long_to_llong,long,long long)
DEFUN_2(long_to_llong,long,long long,copy_long_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_long_to_ullong,long,unsigned long long)
DEFUN_2(long_to_ullong,long,unsigned long long,copy_long_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_long_to_float,long,float)
DEFUN_2(long_to_float,long,float,copy_long_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_long_to_double,long,double)
DEFUN_2(long_to_double,long,double,copy_long_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_long_to_ldouble,long,long double)
DEFUN_2(long_to_ldouble,long,long double,copy_long_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(long_to_one_double,long)
#endif


/* ------------ unsigned long ---------- */
DEFUN_1(copy_ulong_to_char,unsigned long,char)
#define ulong_to_char	NULL
DEFUN_1(copy_ulong_to_uchar,unsigned long,unsigned char)
#define ulong_to_uchar	NULL
DEFUN_1(copy_ulong_to_short,unsigned long,short)
#define ulong_to_short	NULL
DEFUN_1(copy_ulong_to_ushort,unsigned long,unsigned short)
#define ulong_to_ushort	NULL
DEFUN_1(copy_ulong_to_int,unsigned long,int)
#define ulong_to_int	NULL
DEFUN_1(copy_ulong_to_uint,unsigned long,unsigned int)
#define ulong_to_uint	NULL
#define copy_ulong_to_long	copy_long_to_long
#define ulong_to_long	NULL
#define copy_ulong_to_ulong	copy_long_to_long
#define ulong_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ulong_to_llong,unsigned long,long long)
DEFUN_2(ulong_to_llong,unsigned long,long long,copy_ulong_to_llong)
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ulong_to_ullong,unsigned long,unsigned long long)
DEFUN_2(ulong_to_ullong,unsigned long,unsigned long long,copy_ulong_to_ullong)
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ulong_to_float,unsigned long,float)
DEFUN_2(ulong_to_float,unsigned long,float,copy_ulong_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ulong_to_double,unsigned long,double)
DEFUN_2(ulong_to_double,unsigned long,double,copy_ulong_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_ulong_to_ldouble,unsigned long,long double)
DEFUN_2(ulong_to_ldouble,unsigned long,long double,copy_ulong_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(ulong_to_one_double,unsigned long)
#endif


/* ------------ long long ---------- */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_llong_to_char,long long,char)
#define llong_to_char	NULL
DEFUN_1(copy_llong_to_uchar,long long,unsigned char)
#define llong_to_uchar	NULL
DEFUN_1(copy_llong_to_short,long long,short)
#define llong_to_short	NULL
DEFUN_1(copy_llong_to_ushort,long long,unsigned short)
#define llong_to_ushort	NULL
DEFUN_1(copy_llong_to_int,long long,int)
#define llong_to_int	NULL
DEFUN_1(copy_llong_to_uint,long long,unsigned int)
#define llong_to_uint	NULL
DEFUN_1(copy_llong_to_long,long long,long)
#define llong_to_long	NULL
DEFUN_1(copy_llong_to_ulong,long long,unsigned long)
#define llong_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_llong_to_llong,long long,long long)
#define llong_to_llong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
#define copy_llong_to_ullong	copy_llong_to_llong
#define llong_to_ullong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_llong_to_float,long long,float)
DEFUN_2(llong_to_float,long long,float,copy_llong_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_llong_to_double,long long,double)
DEFUN_2(llong_to_double,long long,double,copy_llong_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_llong_to_ldouble,long long,long double)
DEFUN_2(llong_to_ldouble,long long,long double,copy_llong_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(llong_to_one_double,long long)
#endif
#endif /* defined(HAVE_LONG_LONG) */


/* ------------ unsigned long long ---------- */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ullong_to_char,unsigned long long,char)
#define ullong_to_char	NULL
DEFUN_1(copy_ullong_to_uchar,unsigned long long,unsigned char)
#define ullong_to_uchar	NULL
DEFUN_1(copy_ullong_to_short,unsigned long long,short)
#define ullong_to_short	NULL
DEFUN_1(copy_ullong_to_ushort,unsigned long long,unsigned short)
#define ullong_to_ushort	NULL
DEFUN_1(copy_ullong_to_int,unsigned long long,int)
#define ullong_to_int	NULL
DEFUN_1(copy_ullong_to_uint,unsigned long long,unsigned int)
#define ullong_to_uint	NULL
DEFUN_1(copy_ullong_to_long,unsigned long long,long)
#define ullong_to_long	NULL
DEFUN_1(copy_ullong_to_ulong,unsigned long long,unsigned long)
#define ullong_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
#define copy_ullong_to_llong	copy_llong_to_llong
#define ullong_to_llong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
#define copy_ullong_to_ullong	copy_llong_to_llong
#define ullong_to_ullong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ullong_to_float,unsigned long long,float)
DEFUN_2(ullong_to_float,unsigned long long,float,copy_ullong_to_float)
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ullong_to_double,unsigned long long,double)
DEFUN_2(ullong_to_double,unsigned long long,double,copy_ullong_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_ullong_to_ldouble,unsigned long long,long double)
DEFUN_2(ullong_to_ldouble,unsigned long long,long double,copy_ullong_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(ullong_to_one_double,unsigned long long)
#endif
#endif /* defined(HAVE_LONG_LONG) */


/* ------------ float ---------- */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_float_to_char,float,char)
#define float_to_char	NULL
DEFUN_1(copy_float_to_uchar,float,unsigned char)
#define float_to_uchar	NULL
DEFUN_1(copy_float_to_short,float,short)
#define float_to_short	NULL
DEFUN_1(copy_float_to_ushort,float,unsigned short)
#define float_to_ushort	NULL
DEFUN_1(copy_float_to_int,float,int)
#define float_to_int	NULL
DEFUN_1(copy_float_to_uint,float,unsigned int)
#define float_to_uint	NULL
DEFUN_1(copy_float_to_long,float,long)
#define float_to_long	NULL
DEFUN_1(copy_float_to_ulong,float,unsigned long)
#define float_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_float_to_llong,float,long long)
#define float_to_llong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_float_to_ullong,float,unsigned long long)
#define float_to_ullong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_float_to_float,float,float)
#define float_to_float	NULL
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_float_to_double,float,double)
DEFUN_2(float_to_double,float,double,copy_float_to_double)
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_float_to_ldouble,float,long double)
DEFUN_2(float_to_ldouble,float,long double,copy_float_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(float_to_one_double,float)
#endif
#endif /* SLANG_HAS_FLOAT */


/* ------------ double ---------- */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_double_to_char,double,char)
#define double_to_char	NULL
DEFUN_1(copy_double_to_uchar,double,unsigned char)
#define double_to_uchar	NULL
DEFUN_1(copy_double_to_short,double,short)
#define double_to_short	NULL
DEFUN_1(copy_double_to_ushort,double,unsigned short)
#define double_to_ushort	NULL
DEFUN_1(copy_double_to_int,double,int)
#define double_to_int	NULL
DEFUN_1(copy_double_to_uint,double,unsigned int)
#define double_to_uint	NULL
DEFUN_1(copy_double_to_long,double,long)
#define double_to_long	NULL
DEFUN_1(copy_double_to_ulong,double,unsigned long)
#define double_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_double_to_llong,double,long long)
#define double_to_llong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_double_to_ullong,double,unsigned long long)
#define double_to_ullong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_double_to_float,double,float)
#define double_to_float	NULL
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_double_to_double,double,double)
#define double_to_double	NULL
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_double_to_ldouble,double,long double)
DEFUN_2(double_to_ldouble,double,long double,copy_double_to_ldouble)
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(double_to_one_double,double)
#endif
#endif /* SLANG_HAS_FLOAT */


/* ------------ long double ---------- */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_ldouble_to_char,long double,char)
#define ldouble_to_char	NULL
DEFUN_1(copy_ldouble_to_uchar,long double,unsigned char)
#define ldouble_to_uchar	NULL
DEFUN_1(copy_ldouble_to_short,long double,short)
#define ldouble_to_short	NULL
DEFUN_1(copy_ldouble_to_ushort,long double,unsigned short)
#define ldouble_to_ushort	NULL
DEFUN_1(copy_ldouble_to_int,long double,int)
#define ldouble_to_int	NULL
DEFUN_1(copy_ldouble_to_uint,long double,unsigned int)
#define ldouble_to_uint	NULL
DEFUN_1(copy_ldouble_to_long,long double,long)
#define ldouble_to_long	NULL
DEFUN_1(copy_ldouble_to_ulong,long double,unsigned long)
#define ldouble_to_ulong	NULL
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ldouble_to_llong,long double,long long)
#define ldouble_to_llong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if defined(HAVE_LONG_LONG)
DEFUN_1(copy_ldouble_to_ullong,long double,unsigned long long)
#define ldouble_to_ullong	NULL
#endif /* defined(HAVE_LONG_LONG) */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ldouble_to_float,long double,float)
#define ldouble_to_float	NULL
#endif /* SLANG_HAS_FLOAT */
#if SLANG_HAS_FLOAT
DEFUN_1(copy_ldouble_to_double,long double,double)
#define ldouble_to_double	NULL
#endif /* SLANG_HAS_FLOAT */
#if defined(HAVE_LONG_DOUBLE)
DEFUN_1(copy_ldouble_to_ldouble,long double,long double)
#define ldouble_to_ldouble	NULL
#endif /* defined(HAVE_LONG_DOUBLE) */
#if SLANG_HAS_FLOAT
TO_DOUBLE_FUN(ldouble_to_one_double,long double)
#endif
#endif /* defined(HAVE_LONG_DOUBLE) */


#if SLANG_HAS_FLOAT
static To_Double_Fun_Table_Type To_Double_Fun_Table [MAX_ARITHMETIC_TYPES] =
{
   {sizeof(char), char_to_one_double},
   {sizeof(unsigned char), uchar_to_one_double},
   {sizeof(short), short_to_one_double},
   {sizeof(unsigned short), ushort_to_one_double},
   {sizeof(int), int_to_one_double},
   {sizeof(unsigned int), uint_to_one_double},
   {sizeof(long), long_to_one_double},
   {sizeof(unsigned long), ulong_to_one_double},
#if defined(HAVE_LONG_LONG)
   {sizeof(long long), llong_to_one_double},
#else
   {0, NULL},
#endif
#if defined(HAVE_LONG_LONG)
   {sizeof(unsigned long long), ullong_to_one_double},
#else
   {0, NULL},
#endif
#if SLANG_HAS_FLOAT
   {sizeof(float), float_to_one_double},
#else
   {0, NULL},
#endif
#if SLANG_HAS_FLOAT
   {sizeof(double), double_to_one_double},
#else
   {0, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
   {sizeof(long double), ldouble_to_one_double},
#else
   {0, NULL},
#endif
};
#endif

static Binary_Matrix_Type Binary_Matrix [MAX_ARITHMETIC_TYPES][MAX_ARITHMETIC_TYPES] =
{
   /* char */
   {
     {(FVOID_STAR)copy_char_to_char, char_to_char},
     {(FVOID_STAR)copy_char_to_uchar, char_to_uchar},
     {(FVOID_STAR)copy_char_to_short, char_to_short},
     {(FVOID_STAR)copy_char_to_ushort, char_to_ushort},
     {(FVOID_STAR)copy_char_to_int, char_to_int},
     {(FVOID_STAR)copy_char_to_uint, char_to_uint},
     {(FVOID_STAR)copy_char_to_long, char_to_long},
     {(FVOID_STAR)copy_char_to_ulong, char_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_char_to_llong, char_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_char_to_ullong, char_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_char_to_float, char_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_char_to_double, char_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_char_to_ldouble, char_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* unsigned char */
   {
     {(FVOID_STAR)copy_uchar_to_char, uchar_to_char},
     {(FVOID_STAR)copy_uchar_to_uchar, uchar_to_uchar},
     {(FVOID_STAR)copy_uchar_to_short, uchar_to_short},
     {(FVOID_STAR)copy_uchar_to_ushort, uchar_to_ushort},
     {(FVOID_STAR)copy_uchar_to_int, uchar_to_int},
     {(FVOID_STAR)copy_uchar_to_uint, uchar_to_uint},
     {(FVOID_STAR)copy_uchar_to_long, uchar_to_long},
     {(FVOID_STAR)copy_uchar_to_ulong, uchar_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_uchar_to_llong, uchar_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_uchar_to_ullong, uchar_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_uchar_to_float, uchar_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_uchar_to_double, uchar_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_uchar_to_ldouble, uchar_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* short */
   {
     {(FVOID_STAR)copy_short_to_char, short_to_char},
     {(FVOID_STAR)copy_short_to_uchar, short_to_uchar},
     {(FVOID_STAR)copy_short_to_short, short_to_short},
     {(FVOID_STAR)copy_short_to_ushort, short_to_ushort},
     {(FVOID_STAR)copy_short_to_int, short_to_int},
     {(FVOID_STAR)copy_short_to_uint, short_to_uint},
     {(FVOID_STAR)copy_short_to_long, short_to_long},
     {(FVOID_STAR)copy_short_to_ulong, short_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_short_to_llong, short_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_short_to_ullong, short_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_short_to_float, short_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_short_to_double, short_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_short_to_ldouble, short_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* unsigned short */
   {
     {(FVOID_STAR)copy_ushort_to_char, ushort_to_char},
     {(FVOID_STAR)copy_ushort_to_uchar, ushort_to_uchar},
     {(FVOID_STAR)copy_ushort_to_short, ushort_to_short},
     {(FVOID_STAR)copy_ushort_to_ushort, ushort_to_ushort},
     {(FVOID_STAR)copy_ushort_to_int, ushort_to_int},
     {(FVOID_STAR)copy_ushort_to_uint, ushort_to_uint},
     {(FVOID_STAR)copy_ushort_to_long, ushort_to_long},
     {(FVOID_STAR)copy_ushort_to_ulong, ushort_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ushort_to_llong, ushort_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ushort_to_ullong, ushort_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ushort_to_float, ushort_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ushort_to_double, ushort_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_ushort_to_ldouble, ushort_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* int */
   {
     {(FVOID_STAR)copy_int_to_char, int_to_char},
     {(FVOID_STAR)copy_int_to_uchar, int_to_uchar},
     {(FVOID_STAR)copy_int_to_short, int_to_short},
     {(FVOID_STAR)copy_int_to_ushort, int_to_ushort},
     {(FVOID_STAR)copy_int_to_int, int_to_int},
     {(FVOID_STAR)copy_int_to_uint, int_to_uint},
     {(FVOID_STAR)copy_int_to_long, int_to_long},
     {(FVOID_STAR)copy_int_to_ulong, int_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_int_to_llong, int_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_int_to_ullong, int_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_int_to_float, int_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_int_to_double, int_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_int_to_ldouble, int_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* unsigned int */
   {
     {(FVOID_STAR)copy_uint_to_char, uint_to_char},
     {(FVOID_STAR)copy_uint_to_uchar, uint_to_uchar},
     {(FVOID_STAR)copy_uint_to_short, uint_to_short},
     {(FVOID_STAR)copy_uint_to_ushort, uint_to_ushort},
     {(FVOID_STAR)copy_uint_to_int, uint_to_int},
     {(FVOID_STAR)copy_uint_to_uint, uint_to_uint},
     {(FVOID_STAR)copy_uint_to_long, uint_to_long},
     {(FVOID_STAR)copy_uint_to_ulong, uint_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_uint_to_llong, uint_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_uint_to_ullong, uint_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_uint_to_float, uint_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_uint_to_double, uint_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_uint_to_ldouble, uint_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* long */
   {
     {(FVOID_STAR)copy_long_to_char, long_to_char},
     {(FVOID_STAR)copy_long_to_uchar, long_to_uchar},
     {(FVOID_STAR)copy_long_to_short, long_to_short},
     {(FVOID_STAR)copy_long_to_ushort, long_to_ushort},
     {(FVOID_STAR)copy_long_to_int, long_to_int},
     {(FVOID_STAR)copy_long_to_uint, long_to_uint},
     {(FVOID_STAR)copy_long_to_long, long_to_long},
     {(FVOID_STAR)copy_long_to_ulong, long_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_long_to_llong, long_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_long_to_ullong, long_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_long_to_float, long_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_long_to_double, long_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_long_to_ldouble, long_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* unsigned long */
   {
     {(FVOID_STAR)copy_ulong_to_char, ulong_to_char},
     {(FVOID_STAR)copy_ulong_to_uchar, ulong_to_uchar},
     {(FVOID_STAR)copy_ulong_to_short, ulong_to_short},
     {(FVOID_STAR)copy_ulong_to_ushort, ulong_to_ushort},
     {(FVOID_STAR)copy_ulong_to_int, ulong_to_int},
     {(FVOID_STAR)copy_ulong_to_uint, ulong_to_uint},
     {(FVOID_STAR)copy_ulong_to_long, ulong_to_long},
     {(FVOID_STAR)copy_ulong_to_ulong, ulong_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ulong_to_llong, ulong_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ulong_to_ullong, ulong_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ulong_to_float, ulong_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ulong_to_double, ulong_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_ulong_to_ldouble, ulong_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
   /* long long */
#if defined(HAVE_LONG_LONG)
   {
     {(FVOID_STAR)copy_llong_to_char, llong_to_char},
     {(FVOID_STAR)copy_llong_to_uchar, llong_to_uchar},
     {(FVOID_STAR)copy_llong_to_short, llong_to_short},
     {(FVOID_STAR)copy_llong_to_ushort, llong_to_ushort},
     {(FVOID_STAR)copy_llong_to_int, llong_to_int},
     {(FVOID_STAR)copy_llong_to_uint, llong_to_uint},
     {(FVOID_STAR)copy_llong_to_long, llong_to_long},
     {(FVOID_STAR)copy_llong_to_ulong, llong_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_llong_to_llong, llong_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_llong_to_ullong, llong_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_llong_to_float, llong_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_llong_to_double, llong_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_llong_to_ldouble, llong_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
#else
   {
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
   },
#endif /* defined(HAVE_LONG_LONG) */

   /* unsigned long long */
#if defined(HAVE_LONG_LONG)
   {
     {(FVOID_STAR)copy_ullong_to_char, ullong_to_char},
     {(FVOID_STAR)copy_ullong_to_uchar, ullong_to_uchar},
     {(FVOID_STAR)copy_ullong_to_short, ullong_to_short},
     {(FVOID_STAR)copy_ullong_to_ushort, ullong_to_ushort},
     {(FVOID_STAR)copy_ullong_to_int, ullong_to_int},
     {(FVOID_STAR)copy_ullong_to_uint, ullong_to_uint},
     {(FVOID_STAR)copy_ullong_to_long, ullong_to_long},
     {(FVOID_STAR)copy_ullong_to_ulong, ullong_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ullong_to_llong, ullong_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ullong_to_ullong, ullong_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ullong_to_float, ullong_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ullong_to_double, ullong_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_ullong_to_ldouble, ullong_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
#else
   {
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
   },
#endif /* defined(HAVE_LONG_LONG) */

   /* float */
#if SLANG_HAS_FLOAT
   {
     {(FVOID_STAR)copy_float_to_char, float_to_char},
     {(FVOID_STAR)copy_float_to_uchar, float_to_uchar},
     {(FVOID_STAR)copy_float_to_short, float_to_short},
     {(FVOID_STAR)copy_float_to_ushort, float_to_ushort},
     {(FVOID_STAR)copy_float_to_int, float_to_int},
     {(FVOID_STAR)copy_float_to_uint, float_to_uint},
     {(FVOID_STAR)copy_float_to_long, float_to_long},
     {(FVOID_STAR)copy_float_to_ulong, float_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_float_to_llong, float_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_float_to_ullong, float_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_float_to_float, float_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_float_to_double, float_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_float_to_ldouble, float_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
#else
   {
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
   },
#endif /* SLANG_HAS_FLOAT */

   /* double */
#if SLANG_HAS_FLOAT
   {
     {(FVOID_STAR)copy_double_to_char, double_to_char},
     {(FVOID_STAR)copy_double_to_uchar, double_to_uchar},
     {(FVOID_STAR)copy_double_to_short, double_to_short},
     {(FVOID_STAR)copy_double_to_ushort, double_to_ushort},
     {(FVOID_STAR)copy_double_to_int, double_to_int},
     {(FVOID_STAR)copy_double_to_uint, double_to_uint},
     {(FVOID_STAR)copy_double_to_long, double_to_long},
     {(FVOID_STAR)copy_double_to_ulong, double_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_double_to_llong, double_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_double_to_ullong, double_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_double_to_float, double_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_double_to_double, double_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_double_to_ldouble, double_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
#else
   {
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
   },
#endif /* SLANG_HAS_FLOAT */

   /* long double */
#if defined(HAVE_LONG_DOUBLE)
   {
     {(FVOID_STAR)copy_ldouble_to_char, ldouble_to_char},
     {(FVOID_STAR)copy_ldouble_to_uchar, ldouble_to_uchar},
     {(FVOID_STAR)copy_ldouble_to_short, ldouble_to_short},
     {(FVOID_STAR)copy_ldouble_to_ushort, ldouble_to_ushort},
     {(FVOID_STAR)copy_ldouble_to_int, ldouble_to_int},
     {(FVOID_STAR)copy_ldouble_to_uint, ldouble_to_uint},
     {(FVOID_STAR)copy_ldouble_to_long, ldouble_to_long},
     {(FVOID_STAR)copy_ldouble_to_ulong, ldouble_to_ulong},
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ldouble_to_llong, ldouble_to_llong},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_LONG)
     {(FVOID_STAR)copy_ldouble_to_ullong, ldouble_to_ullong},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ldouble_to_float, ldouble_to_float},
#else
     {NULL, NULL},
#endif
#if SLANG_HAS_FLOAT
     {(FVOID_STAR)copy_ldouble_to_double, ldouble_to_double},
#else
     {NULL, NULL},
#endif
#if defined(HAVE_LONG_DOUBLE)
     {(FVOID_STAR)copy_ldouble_to_ldouble, ldouble_to_ldouble},
#else
     {NULL, NULL},
#endif
   },
#else
   {
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
     {NULL, NULL},
   },
#endif /* defined(HAVE_LONG_DOUBLE) */

};

