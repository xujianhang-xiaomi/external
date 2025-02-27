/* config.h. Generated from config.h.in by configure. */

/* source: config.h.in */

/* Copyright Gerhard Rieger and contributors (see file CHANGES) */

/* Published under the GNU General Public License V.2, see file COPYING */

#ifndef __config_h_included
#define __config_h_included 1

/* Define to empty if the keyword does not work.  */

/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define.  */

/* #undef gid_t */

/* Define if your struct stat has st_blksize.  */
#define HAVE_ST_BLKSIZE 1

/* Define if your struct stat has st_blocks.  */
#define HAVE_ST_BLOCKS 1

/* Define if your struct stat has st_rdev.  */
#define HAVE_ST_RDEV 1

/* Define if you have the strftime function.  */
#define HAVE_STRFTIME 1

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
#define HAVE_SYS_WAIT_H 1

/* Define to `int' if <sys/types.h> doesn't define.  */

/* #undef mode_t */

/* Define to `long' if <sys/types.h> doesn't define.  */

/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define. */

/* #undef pid_t */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define. */

/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define to `int' if <sys/types.h> doesn't define.  */

/* #undef uid_t */

/* Define if you have the putenv function.  */
#define HAVE_PUTENV 1

/* Define if your cc provides char **environ declaration. */
#define HAVE_DECL_ENVIRON 1

/* Define if you have the char **environ variable */
#define HAVE_VAR_ENVIRON 1

/* Define if you have the select function.  */
#define HAVE_SELECT 1

/* Define if you have the pselect function.  */
#define HAVE_PSELECT 1

/* Define if you have the poll function.  */
#define HAVE_POLL 1

/* Define if you have the socket function.  */
#define HAVE_SOCKET 1

/* Define if you have the posix_memalign function.  */
#define HAVE_PROTOTYPE_LIB_posix_memalign 1

/* Define if you have the strdup function.  */
#define HAVE_PROTOTYPE_LIB_strdup 1

/* Define if you have the strerror function.  */
#define HAVE_PROTOTYPE_LIB_strerror 1

/* Define if you have the strstr function.  */
#define HAVE_PROTOTYPE_LIB_strstr 1

/* Define if you have the strtod function.  */
#define HAVE_STRTOD 1

/* Define if you have the strtol function.  */
#define HAVE_STRTOL 1

/* Define if you have the strtoul function.  */
#define HAVE_STRTOUL 1

/* Define if you have the uname function.  */
#define HAVE_UNAME 1

/* Define if you have the getpgid function.  */

/* #undef HAVE_GETPGID */

/* Define if you have the getsid function.  */

/* #undef HAVE_GETSID */

/* Define if you have the nanosleep function.  */
#define HAVE_NANOSLEEP 1

/* Define if you have the gethostbyname function.  */
#define HAVE_GETHOSTBYNAME 1

/* Define if you have the getaddrinfo function.  */
#define HAVE_GETADDRINFO 1

/* Define if you have the getipnodebyname function.  */

/* #undef HAVE_PROTOTYPE_LIB_getipnodebyname */

/* Define if you have the getprotobynumber_r function. */
#define HAVE_GETPROTOBYNUMBER_R 1

/* Define if you have the getprotobynumber function. */
#define HAVE_GETPROTOBYNUMBER 1

/* Define if you have the setgroups function. */

/* #undef HAVE_SETGROUPS */

/* Define if you have the inet_aton function. */
#define HAVE_INET_ATON 1

/* Define if you have the strndup function. */
#define HAVE_PROTOTYPE_LIB_strndup 1

/* Define if you have the memrchr function. */
#define HAVE_PROTOTYPE_LIB_memrchr 1

/* Define if you have the if_indextoname function. */
#define HAVE_PROTOTYPE_LIB_if_indextoname 1

/* Define if you have the sigaction function */
#define HAVE_SIGACTION 1

/* Define if you have the stat64 function */
#define HAVE_STAT64 1

/* Define if you have the fstat64 function */
#define HAVE_FSTAT64 1

/* Define if you have the lstat64 function */
#define HAVE_LSTAT64 1

/* Define if you have the lseek64 function */
#define HAVE_LSEEK64 1

/* Define if you have the truncate64 function */
#define HAVE_TRUNCATE64 1

/* Define if you have the ftruncate64 function */
#define HAVE_FTRUNCATE64 1

/* Define if you have the gettimeofday function */
#define HAVE_PROTOTYPE_LIB_gettimeofday 1

/* Define if you have the clock_gettime function */
#define HAVE_CLOCK_GETTIME 1

/* Define if you have the strtoll function */
#define HAVE_STRTOLL 1

/* Define if you have the hstrerror function */
#define HAVE_HSTRERROR 1

/* Define if you have the inet_ntop function */
#define HAVE_INET_NTOP 1

/* Define if you have the hstrerror prototype */
#define HAVE_PROTOTYPE_HSTRERROR 1

/* Define if you have the <stdbool.h> header file.  */
#define HAVE_STDBOOL_H 1

/* Define if you have the <inttypes.h> header file.  */
#define HAVE_INTTYPES_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <sys/param.h> header file.  */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <syslog.h> header file.  */
#define HAVE_SYSLOG_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <pwd.h> header file.  */
#define HAVE_PWD_H 1

/* Define if you have the <grp.h> header file.  */
#define HAVE_GRP_H 1

/* Define if you have the <stdint.h> header file.  */
#define HAVE_STDINT_H 1

/* Define if you have the <sys/types.h> header file.  */
#define HAVE_SYS_TYPES_H 1

/* Define if you have the <poll.h> header file.  */
#define HAVE_POLL_H 1

/* Define if you have the <sys/poll.h> header file.  */
#define HAVE_SYS_POLL_H 1

/* Define if you have the <sys/socket.h> header file.  */
#define HAVE_SYS_SOCKET_H 1

/* Define if you have the <sys/uio.h> header file.  */
#define HAVE_SYS_UIO_H 1

/* Define if you have the <sys/stat.h> header file.  */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <netdb.h> header file.  */
#define HAVE_NETDB_H 1

/* Define if you have the <sys/un.h> header file.  */
#define HAVE_SYS_UN_H 1

/* Define if you have the <pty.h> header file.  */
#define HAVE_PTY_H 1

/* Define if you have the <netinet/in.h> header file.  */
#define HAVE_NETINET_IN_H 1

/* Define if you have the <netinet/in_systm.h> header file.  */

/* #undef HAVE_NETINET_IN_SYSTM_H */

/* Define if you have the <netinet/ip.h> header file.  */
#define HAVE_NETINET_IP_H 1

/* Define if you have the <netinet/tcp.h> header file.  */
#define HAVE_NETINET_TCP_H 1

/* Define if you have the <netinet/ip6.h> header file.  */
#define HAVE_NETINET_IP6_H 1

/* Define if you have the <netinet6/in6.h> header file.  */

/* #undef HAVE_NETINET6_IN6_H */

/* Define if you have the <arpa/nameser.h> header file.  */

/* #undef HAVE_ARPA_NAMESER_H */

/* Define if you have the <resolv.h> header file.  */

/* #undef HAVE_RESOLV_H */

/* Define if you have the <termios.h> header file.  */
#define HAVE_TERMIOS_H 1

/* Define if you have the <net/if.h> header file.  */
#define HAVE_NET_IF_H 1

/* Define if you have the <net/if_dl.h> header file.  */

/* #undef HAVE_NET_IF_DL_H */

/* Define if you have the <linux/types.h> header file.  */

/* #undef HAVE_LINUX_TYPES_H */

/* Define if you have the <linux/errqueue.h> header file.  */

/* #undef HAVE_LINUX_ERRQUEUE_H */

/* Define if you have the <linux/if_tun.h> header file.  */
#define HAVE_LINUX_IF_TUN_H 1

/* Define if you have the <linux/dccp.h> header file.  */

/* #undef HAVE_LINUX_DCCP_H */

/* Define if you have the <linux/vm_sockets.h> header file.  */
#define HAVE_LINUX_VM_SOCKETS_H 1

/* Define if you have the <sched.h> header file.  */
#define HAVE_SCHED_H 1

/* Define if you have the <linux/if_packet.h> header file.  */
#define HAVE_LINUX_IF_PACKET_H 1

/* Define if you have the <netinet/if_ether.h> header file.  */
#define HAVE_NETINET_IF_ETHER_H 1

/* Define if you have the <sys/utsname.h> header file.  */
#define HAVE_SYS_UTSNAME_H 1

/* Define if you have the <sys/select.h> header file. (AIX) */
#define HAVE_SYS_SELECT_H 1

/* Define if you have the <sys/file.h> header file. (AIX) */
#define HAVE_SYS_FILE_H 1

/* Define if you have the <util.h> header file. (NetBSD, OpenBSD: openpty()) */

/* #undef HAVE_UTIL_H */

/* Define if you have the <bsd/libutil.h> header file. */

/* #undef HAVE_BSD_LIBUTIL_H */

/* Define if you have the <libutil.h> header file. (FreeBSD: openpty()) */

/* #undef HAVE_LIBUTIL_H */

/* Define if you have the <sys/stropts.h> header file. */

/* #undef HAVE_SYS_STROPTS_H */

/* Define if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define if you have the <linux/fs.h> header file. */

/* #undef HAVE_LINUX_FS_H */

/* Define if you have the <linux/ext2_fs.h> header file. */

/* #undef HAVE_LINUX_EXT2_FS_H */

/* Define if you have the <readline/readline.h> header file. */

/* #undef HAVE_READLINE_READLINE_H */

/* Define if you have the <readline/history.h> header file. */

/* #undef HAVE_READLINE_HISTORY_H */

/* Define if you have the readline library. */

/* #undef HAVE_LIBREADLINE */

/* Define if you have the m library (-lm).  */

/* #undef HAVE_LIBM */

/* Define if you have the floor function */

/* #undef HAVE_FLOOR */

/* some platforms need _XOPEN_EXTENDED_SOURCE to get syslog headers (AIX4.1) */

/* #undef _XOPEN_EXTENDED_SOURCE */

/* fdset may have component fds_bits or __fds_bits */

/* #undef HAVE_FDS_BITS */

/* struct termios may have components c_ispeed,c_ospeed */

/* #undef HAVE_STRUCT_TERMIOS_C_ISPEED */

/* #undef HAVE_STRUCT_TERMIOS_C_OSPEED */

/* Define if you have the sa_family_t */
#define HAVE_TYPE_SA_FAMILY_T 1

/* define if your struct sigaction has sa_sigaction */
#define HAVE_STRUCT_SIGACTION_SA_SIGACTION 1

/* define if you have struct sock_extended_err */
#define HAVE_STRUCT_SOCK_EXTENDED_ERR 1

/* Define if your termios.h likes _SVID3 defined */

/* #undef _SVID3 */

/* Define if your sys/socket.h likes _XPG4_2 defined */

/* #undef _XPG4_2 */

/* Define if your ctime_r() choices need _POSIX_PTHREAD_SEMANTICS */

/* #undef _POSIX_PTHREAD_SEMANTICS */

/* Define if you need __EXTENSIONS__ */

/* #undef __EXTENSIONS__ */

/* Define if you have struct timespec (e.g. for nanosleep) */
#define HAVE_STRUCT_TIMESPEC 1

/* Define if you have struct linger */
#define HAVE_STRUCT_LINGER 1

/* Define if you have struct ip */

/* #undef HAVE_STRUCT_IP */

/* Define if you have struct ip_mreq */
#define HAVE_STRUCT_IP_MREQ 1

/* Define if you have struct ip_mreqn */
#define HAVE_STRUCT_IP_MREQN 1

/* Define if you have struct ipv6_mreq */
#define HAVE_STRUCT_IPV6_MREQ 1

/* Define if you have struct ip_mreq_source */
#define HAVE_STRUCT_IP_MREQ_SOURCE 1

/* Define if you have struct group_source_req */

/* #undef HAVE_STRUCT_GROUP_SOURCE_REQ */

/* Define if you have struct ifreq */
#define HAVE_STRUCT_IFREQ 1

/* Define if you have struct ifreq.ifr_index */

/* #undef HAVE_STRUCT_IFREQ_IFR_INDEX */

/* Define if you have struct ifreq.ifr_ifindex; not on HPUX */
#define HAVE_STRUCT_IFREQ_IFR_IFINDEX 1

/* Define if your struct sockaddr has sa_len */

/* #undef HAVE_STRUCT_SOCKADDR_SALEN */

/* there are several implementations of sockaddr_in6 */
#define HAVE_IP6_SOCKADDR 0

/* Define if you have struct iovec */
#define HAVE_STRUCT_IOVEC 1

/* define if your struct msghdr has msg_control */
#define HAVE_STRUCT_MSGHDR_MSGCONTROL 1

/* define if your struct msghdr has msg_controllen */
#define HAVE_STRUCT_MSGHDR_MSGCONTROLLEN 1

/* define if your struct msghdr has msg_flag */
#define HAVE_STRUCT_MSGHDR_MSGFLAGS 1

/* define if you have struct cmsghdr */
#define HAVE_STRUCT_CMSGHDR 1

/* define if you have struct in_pktinfo */
#define HAVE_STRUCT_IN_PKTINFO 1

/* define if your struct in_pktinfo has component ipi_spec_dst */
#define HAVE_PKTINFO_IPI_SPEC_DST 1

/* define if you have struct in6_pktinfo */
#define HAVE_STRUCT_IN6_PKTINFO 1

/* define if you have struct tpacket_auxdata */

/* #undef HAVE_STRUCT_TPACKET_AUXDATA */

/* define if you have struct tpacket_auxdata and it has tp_vlan_tpid */

/* #undef HAVE_STRUCT_TPACKET_AUXDATA_TP_VLAN_TPID */

/* define if your struct ip has ip_hl; otherwise assume ip_vhl */

/* #undef HAVE_STRUCT_IP_IP_HL */

/* Define if you have the setns function */
#define HAVE_SETNS 1

/* Define if you have the setenv function */
#define HAVE_SETENV 1

/* Define if you have the unsetenv function. not on HP-UX */
#define HAVE_UNSETENV 1

/* Define if have cfsetispeed,cfgetispeed,cfsetspeed,cfgetospeed function */
#define HAVE_CFSETISPEED 1
#define HAVE_CFSETOSPEED 1

#if HAVE_CFSETISPEED
#  define HAVE_TERMIOS_ISPEED 1
#endif
#if HAVE_CFSETOSPEED
#  define HAVE_TERMIOS_OSPEED 1
#endif
#if defined(HAVE_TERMIOS_ISPEED) && defined(HAVE_TERMIOS_OSPEED)
#  define HAVE_TERMIOS_SPEED 1
#endif

/* Define if you have the OPENSSL_init_ssl function */
#define HAVE_OPENSSL_INIT_SSL 1

/* Define if you have the OPENSSL_INIT_SETTINGS type (guarded for OpenBSD) */

/* #undef HAVE_OPENSSL_INIT_SETTINGS */

/* Define if you have the SSL_library_init function */

/* #undef HAVE_SSL_library_init */

/* Define if you have the OPENSSL_INIT_new function */

/* #undef HAVE_OPENSSL_INIT_new */

/* Define if you have the SSLv2 client and server method functions. */

/* #undef HAVE_SSLv2_client_method */

/* #undef HAVE_SSLv2_server_method */

/* Define if you have the HAVE_SSL_CTX_set_default_verify_paths function */

/* #undef HAVE_SSL_CTX_set_default_verify_paths */

/* Define if you have the TLS client and server method functions. */

/* #undef HAVE_TLS_client_method */

/* #undef HAVE_TLS_server_method */

/* Define if have the SSLv3 client and server method functions. */

/* #undef HAVE_SSLv3_client_method */

/* #undef HAVE_SSLv3_server_method */

/* Define if have the SSLv3 client and server method functions with v2 */

/* #undef HAVE_SSLv23_client_method */

/* #undef HAVE_SSLv23_server_method */

/* Define if you have the TLSv1.0 client and server method functions */

/* #undef HAVE_TLSv1_client_method */

/* #undef HAVE_TLSv1_server_method */

/* Define if you have the TLSv1.1 client and server method functions */

/* #undef HAVE_TLSv1_1_client_method */

/* #undef HAVE_TLSv1_1_server_method */

/* Define if you have the TLSv1.2 client and server method functions */

/* #undef HAVE_TLSv1_2_client_method */

/* #undef HAVE_TLSv1_2_server_method */

/* Define if you have the DTLS client and server method functions */

/* #undef HAVE_DTLS_client_method */

/* #undef HAVE_DTLS_server_method */

/* Define if you have the DTLSv1 client and server method functions */

/* #undef HAVE_DTLSv1_client_method */

/* #undef HAVE_DTLSv1_server_method */

/* Define if you have the SSL CTX_set_min_proto_version function/macro */

/* #undef HAVE_SSL_CTX_set_min_proto_version */

/* Define if you have the SSL_CTX_set_max_proto_version function/macro */

/* #undef HAVE_SSL_CTX_set_max_proto_version */

/* Define if you have the DTLSv1_2 client and server method functions */

/* #undef HAVE_DTLSv1_2_client_method */

/* #undef HAVE_DTLSv1_2_server_method */

/* Define if you have the EC_KEY type */

/* #undef HAVE_TYPE_EC_KEY */

/* Define if you have the OpenSSL RAND_egd function */

/* #undef HAVE_RAND_egd */

/* Define if you have the OpenSSL RAND_status function */

/* #undef HAVE_RAND_status */

/* Define if you have the OpenSSL DH_set0_pqg function */

/* #undef HAVE_DH_set0_pqg */

/* Define if you have the OpenSSL ASN1_STRING_get0_data function */

/* #undef HAVE_ASN1_STRING_get0_data */

/* Define if you have the OpenSSL SSL_CTX_clear_mode macro or function */

/* #undef HAVE_SSL_CTX_clear_mode */

/* Define if you have the OpenSSL SSL_set_tlsext_host_name define/function */

/* #undef HAVE_SSL_set_tlsext_host_name */

/* Define if have the OpenSSL SSL_CTX_set_tlsext_max_fragment_length define */

/* #undef HAVE_SSL_CTX_set_tlsext_max_fragment_length */

/* Define if you have the OpenSSL SSL_CTX_set_max_send_fragment define */

/* #undef HAVE_SSL_CTX_set_max_send_fragment */

/* Define if you have the flock function */
#define HAVE_FLOCK 1

/* Define if you have the openpty function */
#define HAVE_OPENPTY 1

/* Define if you have the grantpt function */
#define HAVE_GRANTPT 1

/* Define if you have the unlockpt function */
#define HAVE_UNLOCKPT 1

/* Define if you have the ptsname function */
#define HAVE_PROTOTYPE_LIB_ptsname 1

/* Define if you have the /dev/ptmx pseudo terminal multiplexer */
#define HAVE_DEV_PTMX 1

/* Define if you have the /dev/ptc pseudo terminal multiplexer */

/* #undef HAVE_DEV_PTC */

/* Define if you have the cfmakeraw() function */
#define HAVE_CFMAKERAW 1

/* Define if you have the long long type */
#define HAVE_TYPE_LONGLONG 1

/* is sig_atomic_t declared */
#define HAVE_TYPE_SIG_ATOMIC_T 1

/* is bool already typedef'd? */
#define HAVE_TYPE_BOOL 1

/* is socklen_t already typedef'd? */
#define HAVE_TYPE_SOCKLEN 1

/* Define if you have the struct stat64 type */
#define HAVE_TYPE_STAT64 1

/* Define if you have the struct off64_t type */
#define HAVE_TYPE_OFF64 1

/* is sighandler_t already typedef'd? */
#define HAVE_TYPE_SIGHANDLER 1

/* is uint8_t already defined? */
#define HAVE_TYPE_UINT8 1

/* is uint16_t already defined? */
#define HAVE_TYPE_UINT16 1

/* is uint32_t already defined? */
#define HAVE_TYPE_UINT32 1

/* is uint64_t already defined? */
#define HAVE_TYPE_UINT64 1

/* Number of bits in a file offset, on hosts where this is settable. */

/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */

/* #undef _LARGE_FILES */

/* Define if snprintf() returns required len on truncation (C-99 conform) */
#define HAVE_C99_SNPRINTF 1

/* Define if you have the printf "Z" modifier */

/* #undef HAVE_FORMAT_Z */

/* Define the shift offset of the CRDLY mask */
#define CRDLY_SHIFT 9

/* Define the shift offset of the TABDLY mask */
#define TABDLY_SHIFT 11

/* Define the shift offset of the CSIZE mask */
#define CSIZE_SHIFT 4

/* Define if have tcpwrappers (libwrap, tcpd) and declareshosts_allow_table */

/* #undef HAVE_HOSTS_ALLOW_TABLE */
#if defined(HAVE_HOSTS_ALLOW_TABLE) && HAVE_HOSTS_ALLOW_TABLE
#   define HAVE_HOSTS_DENY_TABLE 1
#else
/* #   undef HAVE_HOSTS_DENY_TABLE */
#endif

/* 1..short, 3..int, 5..long; 2,4,6..unsigned */
#define HAVE_BASIC_UINT16_T                 2
#define HAVE_BASIC_UINT32_T                 4
#define HAVE_BASIC_UINT64_T                 6
#define HAVE_BASIC_INT16_T                  1
#define HAVE_BASIC_INT32_T                  3
#define HAVE_BASIC_INT64_T                  5
#define HAVE_BASIC_SIZE_T                   6
#define HAVE_BASIC_MODE_T                   4
#define HAVE_BASIC_PID_T                    3
#define HAVE_BASIC_UID_T                    4
#define HAVE_BASIC_GID_T                    4
#ifdef CONFIG_SYSTEM_TIME64
#  define HAVE_BASIC_TIME_T                 5
#else
#  define HAVE_BASIC_TIME_T                 4
#endif
#define HAVE_BASIC_OFF_T                    5
#define HAVE_BASIC_OFF64_T                  5
#define HAVE_BASIC_DEV_T                    6
#define HAVE_BASIC_SPEED_T                  4
#define HAVE_BASIC_SOCKLEN_T                4
#define HAVE_TYPEOF_ST_INO                  6
#define HAVE_TYPEOF_ST_NLINK                6
#define HAVE_TYPEOF_ST_SIZE                 5
#define HAVE_TYPEOF_ST_BLKSIZE              5
#define HAVE_TYPEOF_ST_BLOCKS               5
#define HAVE_TYPEOF_ST64_DEV                6
#define HAVE_TYPEOF_ST64_INO                6
#define HAVE_TYPEOF_ST64_NLINK              6
#define HAVE_TYPEOF_ST64_SIZE               5
#define HAVE_TYPEOF_ST64_BLKSIZE            5
#define HAVE_TYPEOF_ST64_BLOCKS             5
#define HAVE_TYPEOF_STRUCT_TIMEVAL_TV_USEC  5
#define HAVE_TYPEOF_STRUCT_TIMESPEC_TV_NSEC 5
#define HAVE_TYPEOF_RLIM_MAX                6
#define HAVE_TYPEOF_STRUCT_CMSGHDR_CMSG_LEN 6

/* Define if you have the /proc filesystem */
#define HAVE_PROC_DIR 1

/* Define if you have the /proc/$$/fd directories */
#define HAVE_PROC_DIR_FD 1

/* #undef HAVE_PROC_DIR_PATH */

#define HAVE_DIRENT_D_TYPE 1

#define HAVE_RES_RETRANS 1

#define HAVE_RES_RETRY 1

#define HAVE_RES_NSADDR_LIST 1

/* #undef HAVE_SETGRENT */

/* #undef HAVE_GETGRENT */

/* #undef HAVE_ENDGRENT */

/* #undef HAVE_GETGROUPLIST */

#define WITH_HELP 1

#define WITH_STATS 1

#define WITH_STDIO 1

#define WITH_FDNUM 1

#define WITH_FILE 1

#define WITH_CREAT 1

#define WITH_GOPEN 1

/* #undef WITH_TERMIOS */

#define WITH_PIPE 1

#define WITH_SOCKETPAIR 1

#define WITH_UNIX 1

#define WITH_ABSTRACT_UNIXSOCKET 1

#define WITH_IP4 1

#define WITH_IP6 1

#define WITH_RAWIP 1

#define WITH_GENERICSOCKET 1

#define WITH_INTERFACE 1

#define WITH_TCP 1

#define WITH_UDP 1

#define WITH_UDPLITE 1

#define WITH_SCTP 1

/* #undef WITH_DCCP */

#define WITH_LISTEN 1

#define WITH_POSIXMQ 1

/* #undef WITH_SOCKS4 */

/* #undef WITH_SOCKS4A */

/* #undef WITH_SOCKS5 */

#define WITH_VSOCK 1

/* #undef WITH_NAMESPACES */

#define WITH_PROXY 1

#define WITH_EXEC 1

#define WITH_SYSTEM 1

#define WITH_SHELL 1

/* #undef WITH_READLINE */

#define WITH_TUN 1

/* #undef WITH_PTY */

#define WITH_FS 1

/* #undef WITH_OPENSSL */

/* #undef WITH_OPENSSL_METHOD */

/* #undef WITH_RESOLVE */

/* #undef WITH_RES_DEPRECATED */

#define WITH_STREAMS 1

/* #undef WITH_FIPS */

/* #undef OPENSSL_FIPS */

/* #undef WITH_LIBWRAP */

/* #undef HAVE_TCPD_H */

/* #undef HAVE_LIBWRAP */

/* #undef WITH_SYCLS */

#define WITH_FILAN 1

#define WITH_RETRY 1

#define WITH_RPMSGSOCKET 1

#define WITH_MSGLEVEL 0

#define WITH_DEFAULT_IPV '0'

#define BUILD_DATE __DATE__" "__TIME__

#define IP_OPTIONS 1

#ifdef __NuttX__
#  define L_ctermid 20
#endif

#endif /* !defined(__config_h_included) */
