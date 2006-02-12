

#include "nest/bird.h"
#include "conf/conf.h"
#include "lib/resource.h"
#include "lib/socket.h"
#include "lib/timer.h"
#include "lib/string.h"
#include "nest/protocol.h"
#include "nest/iface.h"
#include "nest/route.h"
#include "nest/cli.h"
#include "filter/filter.h"

/* FIXME: Turn on YYERROR_VERBOSE and work around lots of bison bugs? */



#include "lib/unix.h"
#include <stdio.h>



#include "lib/krt.h"





#include "nest/rt-dev.h"
#include "nest/password.h"
#include "nest/cmds.h"
#include "lib/lists.h"





#include "proto/bgp/bgp.h"



#include "proto/ospf/ospf.h"



#include "proto/pipe/pipe.h"



#include "proto/rip/rip.h"
#include "nest/iface.h"



#include "proto/static/static.h"


static struct keyword keyword_list[] = {
{ "define", DEFINE },
{ "on", ON },
{ "off", OFF },
{ "yes", YES },
{ "no", NO },
{ "log", LOG },
{ "syslog", SYSLOG },
{ "all", ALL },
{ "debug", DEBUG },
{ "trace", TRACE },
{ "info", INFO },
{ "remote", REMOTE },
{ "warning", WARNING },
{ "error", ERROR },
{ "auth", AUTH },
{ "fatal", FATAL },
{ "bug", BUG },
{ "stderr", STDERR },
{ "configure", CONFIGURE },
{ "down", DOWN },
{ "kernel", KERNEL },
{ "persist", PERSIST },
{ "scan", SCAN },
{ "time", TIME },
{ "learn", LEARN },
{ "device", DEVICE },
{ "async", ASYNC },
{ "table", TABLE },
{ "router", ROUTER },
{ "id", ID },
{ "protocol", PROTOCOL },
{ "preference", PREFERENCE },
{ "disabled", DISABLED },
{ "direct", DIRECT },
{ "interface", INTERFACE },
{ "import", IMPORT },
{ "export", EXPORT },
{ "filter", FILTER },
{ "none", NONE },
{ "states", STATES },
{ "routes", ROUTES },
{ "filters", FILTERS },
{ "password", PASSWORD },
{ "from", FROM },
{ "passive", PASSIVE },
{ "to", TO },
{ "events", EVENTS },
{ "packets", PACKETS },
{ "protocols", PROTOCOLS },
{ "interfaces", INTERFACES },
{ "primary", PRIMARY },
{ "stats", STATS },
{ "count", COUNT },
{ "for", FOR },
{ "commands", COMMANDS },
{ "preimport", PREIMPORT },
{ "generate", GENERATE },
{ "RTS_DUMMY", -((T_ENUM_RTS<<16) | RTS_DUMMY) },
{ "RTS_STATIC", -((T_ENUM_RTS<<16) | RTS_STATIC) },
{ "RTS_INHERIT", -((T_ENUM_RTS<<16) | RTS_INHERIT) },
{ "RTS_DEVICE", -((T_ENUM_RTS<<16) | RTS_DEVICE) },
{ "RTS_STATIC_DEVICE", -((T_ENUM_RTS<<16) | RTS_STATIC_DEVICE) },
{ "RTS_REDIRECT", -((T_ENUM_RTS<<16) | RTS_REDIRECT) },
{ "RTS_RIP", -((T_ENUM_RTS<<16) | RTS_RIP) },
{ "RTS_OSPF", -((T_ENUM_RTS<<16) | RTS_OSPF) },
{ "RTS_OSPF_IA", -((T_ENUM_RTS<<16) | RTS_OSPF_IA) },
{ "RTS_OSPF_EXT1", -((T_ENUM_RTS<<16) | RTS_OSPF_EXT1) },
{ "RTS_OSPF_EXT2", -((T_ENUM_RTS<<16) | RTS_OSPF_EXT2) },
{ "RTS_BGP", -((T_ENUM_RTS<<16) | RTS_BGP) },
{ "RTS_PIPE", -((T_ENUM_RTS<<16) | RTS_PIPE) },
{ "SCOPE_HOST", -((T_ENUM_SCOPE<<16) | SCOPE_HOST) },
{ "SCOPE_LINK", -((T_ENUM_SCOPE<<16) | SCOPE_LINK) },
{ "SCOPE_SITE", -((T_ENUM_SCOPE<<16) | SCOPE_SITE) },
{ "SCOPE_ORGANIZATION", -((T_ENUM_SCOPE<<16) | SCOPE_ORGANIZATION) },
{ "SCOPE_UNIVERSE", -((T_ENUM_SCOPE<<16) | SCOPE_UNIVERSE) },
{ "RTC_UNICAST", -((T_ENUM_RTC<<16) | RTC_UNICAST) },
{ "RTC_BROADCAST", -((T_ENUM_RTC<<16) | RTC_BROADCAST) },
{ "RTC_MULTICAST", -((T_ENUM_RTC<<16) | RTC_MULTICAST) },
{ "RTC_ANYCAST", -((T_ENUM_RTC<<16) | RTC_ANYCAST) },
{ "RTD_ROUTER", -((T_ENUM_RTD<<16) | RTD_ROUTER) },
{ "RTD_DEVICE", -((T_ENUM_RTD<<16) | RTD_DEVICE) },
{ "RTD_BLACKHOLE", -((T_ENUM_RTD<<16) | RTD_BLACKHOLE) },
{ "RTD_UNREACHABLE", -((T_ENUM_RTD<<16) | RTD_UNREACHABLE) },
{ "RTD_PROHIBIT", -((T_ENUM_RTD<<16) | RTD_PROHIBIT) },
{ "show", SHOW },
{ "status", STATUS },
{ "summary", SUMMARY },
{ "route", ROUTE },
{ "symbols", SYMBOLS },
{ "dump", DUMP },
{ "resources", RESOURCES },
{ "sockets", SOCKETS },
{ "neighbors", NEIGHBORS },
{ "attributes", ATTRIBUTES },
{ "echo", ECHO },
{ "disable", DISABLE },
{ "enable", ENABLE },
{ "restart", RESTART },
{ "function", FUNCTION },
{ "print", PRINT },
{ "printn", PRINTN },
{ "unset", UNSET },
{ "return", RETURN },
{ "accept", ACCEPT },
{ "reject", REJECT },
{ "quitbird", QUITBIRD },
{ "int", INT },
{ "bool", BOOL },
{ "ip", IP },
{ "prefix", PREFIX },
{ "pair", PAIR },
{ "set", SET },
{ "string", STRING },
{ "bgpmask", BGPMASK },
{ "bgppath", BGPPATH },
{ "clist", CLIST },
{ "if", IF },
{ "then", THEN },
{ "else", ELSE },
{ "case", CASE },
{ "true", TRUE },
{ "false", FALSE },
{ "gw", GW },
{ "net", NET },
{ "mask", MASK },
{ "source", SOURCE },
{ "scope", SCOPE },
{ "cast", CAST },
{ "dest", DEST },
{ "len", LEN },
{ "defined", DEFINED },
{ "add", ADD },
{ "delete", DELETE },
{ "contains", CONTAINS },
{ "reset", RESET },
{ "prepend", PREPEND },
{ "match", MATCH },
{ "empty", EMPTY },
{ "where", WHERE },
{ "eval", EVAL },
{ "bgp", BGP },
{ "local", LOCAL },
{ "neighbor", NEIGHBOR },
{ "as", AS },
{ "hold", HOLD },
{ "connect", CONNECT },
{ "retry", RETRY },
{ "keepalive", KEEPALIVE },
{ "multihop", MULTIHOP },
{ "startup", STARTUP },
{ "via", VIA },
{ "next", NEXT },
{ "hop", HOP },
{ "self", SELF },
{ "default", DEFAULT },
{ "path", PATH },
{ "metric", METRIC },
{ "start", START },
{ "delay", DELAY },
{ "forget", FORGET },
{ "wait", WAIT },
{ "after", AFTER },
{ "bgp_path", BGP_PATH },
{ "bgp_local_pref", BGP_LOCAL_PREF },
{ "bgp_med", BGP_MED },
{ "bgp_origin", BGP_ORIGIN },
{ "bgp_next_hop", BGP_NEXT_HOP },
{ "bgp_atomic_aggr", BGP_ATOMIC_AGGR },
{ "bgp_aggregator", BGP_AGGREGATOR },
{ "bgp_community", BGP_COMMUNITY },
{ "address", ADDRESS },
{ "ORIGIN_IGP", -((T_ENUM_BGP_ORIGIN<<16) | ORIGIN_IGP) },
{ "ORIGIN_EGP", -((T_ENUM_BGP_ORIGIN<<16) | ORIGIN_EGP) },
{ "ORIGIN_INCOMPLETE", -((T_ENUM_BGP_ORIGIN<<16) | ORIGIN_INCOMPLETE) },
{ "ospf", OSPF },
{ "area", AREA },
{ "ospf_metric1", OSPF_METRIC1 },
{ "ospf_metric2", OSPF_METRIC2 },
{ "ospf_tag", OSPF_TAG },
{ "rfc1583compat", RFC1583COMPAT },
{ "stub", STUB },
{ "tick", TICK },
{ "cost", COST },
{ "retransmit", RETRANSMIT },
{ "hello", HELLO },
{ "transmit", TRANSMIT },
{ "priority", PRIORITY },
{ "dead", DEAD },
{ "nonbroadcast", NONBROADCAST },
{ "pointopoint", POINTOPOINT },
{ "type", TYPE },
{ "simple", SIMPLE },
{ "authentication", AUTHENTICATION },
{ "strict", STRICT },
{ "cryptographic", CRYPTOGRAPHIC },
{ "eligible", ELIGIBLE },
{ "poll", POLL },
{ "networks", NETWORKS },
{ "hidden", HIDDEN },
{ "virtual", VIRTUAL },
{ "link", LINK },
{ "pipe", PIPE },
{ "peer", PEER },
{ "rip", RIP },
{ "infinity", INFINITY },
{ "port", PORT },
{ "period", PERIOD },
{ "garbage", GARBAGE },
{ "timeout", TIMEOUT },
{ "passwords", PASSWORDS },
{ "mode", MODE },
{ "broadcast", BROADCAST },
{ "multicast", MULTICAST },
{ "quiet", QUIET },
{ "nolisten", NOLISTEN },
{ "version1", VERSION1 },
{ "plaintext", PLAINTEXT },
{ "md5", MD5 },
{ "honor", HONOR },
{ "never", NEVER },
{ "always", ALWAYS },
{ "rip_metric", RIP_METRIC },
{ "rip_tag", RIP_TAG },
{ "static", STATIC },
{ "drop", DROP },
{ "prohibit", PROHIBIT },
{ NULL, -1 } };
