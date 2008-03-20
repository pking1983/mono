/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

/* Version macros for Windows SDK headers */
#ifdef _WIN64
#ifdef _M_IA64
/* Windows XP 64-bit Edition (Itanium) is the first release that is based on Windows XP */
#define WINVER 0x0501
#define _WIN32_WINNT 0x0501
/* Includes Internet Explorer 6.0 */
#define _WIN32_IE 0x0600
#else /* !_M_IA64 */
/* Windows XP Professional x64 Edition is the first release that is based on Windows Server 2003 SP1 */
#define WINVER 0x0502
#define _WIN32_WINNT 0x0502
/* Includes Internet Explorer 6.0 SP2 */
#define _WIN32_IE 0x0603
#endif /* _M_IA64 */
#else /* !_WIN64 */
/* Windows 2000 is required */
#define WINVER 0x0500
#define _WIN32_WINNT 0x0500
/* Includes Internet Explorer 5.01 */
#define _WIN32_IE 0x0501
#endif /* _WIN64 */

#ifndef _UNICODE
#define _UNICODE
#endif
#ifndef UNICODE
#define UNICODE
#endif

#define WIN32_THREADS
#define FD_SETSIZE 1024

/* #undef HAVE_INET_PTON */
/* #undef HAVE_INET_ATON */
/* #undef HAVE_MSG_NOSIGNAL */
/* #undef HAVE_SOL_IP */
/* #undef HAVE_SOL_TCP */
/* #undef HAVE_SOL_IPV6 */
/* #undef HAVE_IP_PKTINFO */
/* #undef HAVE_IPV6_PKTINFO */
/* #undef HAVE_STRUCT_IP_MREQN */
#define HAVE_STRUCT_IP_MREQ 1
/* #undef HAVE_PTHREAD_MUTEX_TIMEDLOCK */
/* #undef USE_MONO_MUTEX */
/* #undef HAVE_LARGE_FILE_SUPPORT */
/* #undef HAVE_NEW_ICONV */
#define NAME_DEV_RANDOM ""
#define HAVE_CRYPT_RNG 1
#define HAVE_BOEHM_GC 1
#define USE_INCLUDED_LIBGC 1
/* #undef DISABLE_SHARED_HANDLES */
/* #undef HAVE_TIMEZONE */
/* #undef HAVE_TM_GMTOFF */
/* #undef MONO_SIZEOF_SUNPATH */
/* #undef MONO_ZERO_ARRAY_LENGTH */
/* #undef PTHREAD_POINTER_ID */
#define HAVE_GC_H 1
#define HAVE_GC_GCJ_MALLOC 1
#define HAVE_GC_ENABLE 1
/* #undef WITH_BUNDLE */
/* #undef HAVE_GETHOSTBYNAME2_R */
/* #undef HAVE_ICU */
/* #undef HAVE_KW_THREAD */
/* #undef HAVE_SIGNBIT */
/* #undef USE_MACH_SEMA */
/* #undef HAVE_SOCKLEN_T */
/* #undef HAVE_TRUNCL */
/* #undef HAVE_AINTL */
/* #undef HAVE_SCANDIR */
/* #undef HAVE_WORKING_SIGALTSTACK */

/* The architecture this is running on */
#if defined(_M_IA64)
#define ARCHITECTURE "ia64"
#elif defined(_M_AMD64)
#define ARCHITECTURE "amd64"
#elif defined(_M_IX86)
#define ARCHITECTURE "x86"
#else
#error Unknown architecture
#endif

/* String of disabled features */
#define DISABLED_FEATURES "none"

/* Disable AOT support */
/* #undef DISABLE_AOT */

/* Disable COM support */
/* #undef DISABLE_COM */

/* Disable runtime debugging support */
/* #undef DISABLE_DEBUG */

/* Disable System.Decimal support */
/* #undef DISABLE_DECIMAL */

/* Disable generics support */
/* #undef DISABLE_GENERICS */

/* Disable support for huge assemblies */
/* #undef DISABLE_LARGE_CODE */

/* Disable support debug logging */
/* #undef DISABLE_LOGGING */

/* Disable P/Invoke support */
/* #undef DISABLE_PINVOKE */

/* Disable default profiler support */
/* #undef DISABLE_PROFILER */

/* Disable reflection emit support */
/* #undef DISABLE_REFLECTION_EMIT */

/* Disable advanced SSA JIT optimizations */
/* #undef DISABLE_SSA */

/* Define to 1 if you have the <aio.h> header file. */
/* #undef HAVE_AIO_H */

/* Supports C99 array initialization */
/* #undef HAVE_ARRAY_ELEM_INIT */

/* Define to 1 if you have the <attr/xattr.h> header file. */
/* #undef HAVE_ATTR_XATTR_H */

/* Define to 1 if you have the `backtrace_symbols' function. */
/* #undef HAVE_BACKTRACE_SYMBOLS */

/* Define to 1 if you have the <checklist.h> header file. */
/* #undef HAVE_CHECKLIST_H */

/* Define to 1 if you have the <curses.h> header file. */
/* #undef HAVE_CURSES_H */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <elf.h> header file. */
/* #undef HAVE_ELF_H */

/* epoll supported */
/* #undef HAVE_EPOLL */

/* Define to 1 if you have the `epoll_ctl' function. */
/* #undef HAVE_EPOLL_CTL */

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef HAVE_EXECINFO_H */

/* Define to 1 if you have the `fgetgrent' function. */
/* #undef HAVE_FGETGRENT */

/* Define to 1 if you have the `fgetpwent' function. */
/* #undef HAVE_FGETPWENT */

/* Define to 1 if you have the `finite' function. */
/* #undef HAVE_FINITE */

/* Define to 1 if you have the <fstab.h> header file. */
/* #undef HAVE_FSTAB_H */

/* Define to 1 if you have the `fstatfs' function. */
/* #undef HAVE_FSTATFS */

/* Define to 1 if you have the `fstatvfs' function. */
/* #undef HAVE_FSTATVFS */

/* Define to 1 if you have the <gc/gc.h> header file. */
/* #undef HAVE_GC_GC_H */

/* Define to 1 if you have the <gc.h> header file. */
#define HAVE_GC_H 1

/* Define to 1 if you have the `getdomainname' function. */
/* #undef HAVE_GETDOMAINNAME */

/* Define to 1 if you have the `getfsstat' function. */
/* #undef HAVE_GETFSSTAT */

/* Define to 1 if you have the `getgrgid_r' function. */
/* #undef HAVE_GETGRGID_R */

/* Define to 1 if you have the `getgrnam_r' function. */
/* #undef HAVE_GETGRNAM_R */

/* Define to 1 if you have the `GetProcessId' function. */
#if (_WIN32_WINNT >= 0x0502)
#define HAVE_GETPROCESSID 1
#endif

/* Define to 1 if you have the `getpwnam_r' function. */
/* #undef HAVE_GETPWNAM_R */

/* Define to 1 if you have the `getpwuid_r' function. */
/* #undef HAVE_GETPWUID_R */

/* Define to 1 if you have the `getresuid' function. */
/* #undef HAVE_GETRESUID */

/* Define to 1 if you have the <grp.h> header file. */
/* #undef HAVE_GRP_H */

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if you have the `inet_aton' function. */
/* #undef HAVE_INET_ATON */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isfinite' function. */
/* #undef HAVE_ISFINITE */

/* isinf available */
#define HAVE_ISINF 1

/* Define to 1 if you have the `kqueue' function. */
/* #undef HAVE_KQUEUE */

/* Define to 1 if you have the `unwind' library (-lunwind). */
/* #undef HAVE_LIBUNWIND */

/* Define to 1 if you have the <linux/rtc.h> header file. */
/* #undef HAVE_LINUX_RTC_H */

/* Define to 1 if you have the `lutimes' function. */
/* #undef HAVE_LUTIMES */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mremap' function. */
/* #undef HAVE_MREMAP */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef HAVE_NETDB_H */

/* Define to 1 if you have the <net/if.h> header file. */
/* #undef HAVE_NET_IF_H */

/* No GC support. */
/* #undef HAVE_NULL_GC */

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef HAVE_POLL_H */

/* Define to 1 if you have the `posix_fadvise' function. */
/* #undef HAVE_POSIX_FADVISE */

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `posix_madvise' function. */
/* #undef HAVE_POSIX_MADVISE */

/* Define to 1 if you have the `pthread_attr_getstack' function. */
/* #undef HAVE_PTHREAD_ATTR_GETSTACK */

/* Define to 1 if you have the `pthread_attr_get_np' function. */
/* #undef HAVE_PTHREAD_ATTR_GET_NP */

/* Define to 1 if you have the `pthread_attr_setstacksize' function. */
/* #undef HAVE_PTHREAD_ATTR_SETSTACKSIZE */

/* Define to 1 if you have the `pthread_getattr_np' function. */
/* #undef HAVE_PTHREAD_GETATTR_NP */

/* Define to 1 if you have the `pthread_get_stackaddr_np' function. */
/* #undef HAVE_PTHREAD_GET_STACKADDR_NP */

/* Define to 1 if you have the `pthread_get_stacksize_np' function. */
/* #undef HAVE_PTHREAD_GET_STACKSIZE_NP */

/* Define to 1 if you have the <pthread.h> header file. */
/* #undef HAVE_PTHREAD_H */

/* Define to 1 if you have the `pthread_mutex_timedlock' function. */
/* #undef HAVE_PTHREAD_MUTEX_TIMEDLOCK */

/* Define to 1 if you have the `remap_file_pages' function. */
/* #undef HAVE_REMAP_FILE_PAGES */

/* Define to 1 if you have the <semaphore.h> header file. */
/* #undef HAVE_SEMAPHORE_H */

/* Define to 1 if you have the `sendfile' function. */
/* #undef HAVE_SENDFILE */

/* Define to 1 if you have the `setdomainname' function. */
/* #undef HAVE_SETDOMAINNAME */

/* Define to 1 if you have the `sethostid' function. */
/* #undef HAVE_SETHOSTID */

/* Define if setkey(3) is available */
/* #undef HAVE_SETKEY */

/* Define to 1 if you have the `setresuid' function. */
/* #undef HAVE_SETRESUID */

/* Can get interface list */
/* #undef HAVE_SIOCGIFCONF */

/* Define to 1 if you have the `statfs' function. */
/* #undef HAVE_STATFS */

/* Define to 1 if you have the `statvfs' function. */
/* #undef HAVE_STATVFS */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stime' function. */
/* #undef HAVE_STIME */

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `d_off' is member of `struct dirent'. */
/* #undef HAVE_STRUCT_DIRENT_D_OFF */

/* Define to 1 if `d_reclen' is member of `struct dirent'. */
/* #undef HAVE_STRUCT_DIRENT_D_RECLEN */

/* Define to 1 if `d_type' is member of `struct dirent'. */
/* #undef HAVE_STRUCT_DIRENT_D_TYPE */

/* Define to 1 if you have the <syslog.h> header file. */
/* #undef HAVE_SYSLOG_H */

/* Define to 1 if you have the <sys/aio.h> header file. */
/* #undef HAVE_SYS_AIO_H */

/* Define to 1 if you have the <sys/epoll.h> header file. */
/* #undef HAVE_SYS_EPOLL_H */

/* Define to 1 if you have the <sys/extattr.h> header file. */
/* #undef HAVE_SYS_EXTATTR_H */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/poll.h> header file. */
/* #undef HAVE_SYS_POLL_H */

/* Define to 1 if you have the <sys/sendfile.h> header file. */
/* #undef HAVE_SYS_SENDFILE_H */

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
/* #undef HAVE_SYS_STATVFS_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
/* #undef HAVE_SYS_UN_H */

/* Define to 1 if you have the <sys/vfstab.h> header file. */
/* #undef HAVE_SYS_VFSTAB_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <sys/xattr.h> header file. */
/* #undef HAVE_SYS_XATTR_H */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the <term.h> header file. */
/* #undef HAVE_TERM_H */

/* tld_model available */
/* #undef HAVE_TLS_MODEL_ATTR */

/* Define to 1 if you have the `trunc' function. */
#define HAVE_TRUNC 1

/* Define to 1 if you have the `ttyname_r' function. */
/* #undef HAVE_TTYNAME_R */

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef HAVE_UNISTD_H */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
/* #undef HAVE_VALGRIND_MEMCHECK_H */

/* Support for the visibility ("hidden") attribute */
#define HAVE_VISIBILITY_HIDDEN 1

/* Define to 1 if you have the `vsnprintf' function. */
/* #undef HAVE_VSNPRINTF */

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Architecture uses registers for Parameters */
/* #undef MONO_ARCH_REGPARMS */

/* The Mono Debugger is supported on this platform */
/* #undef MONO_DEBUGGER_SUPPORTED */

/* Xen-specific behaviour */
/* #undef MONO_XEN_OPT */

/* Define if Unix sockets cannot be created in an anonymous namespace */
/* #undef NEED_LINK_UNLINK */

/* Name of package */
#define PACKAGE "mono"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Platform is Win32 */
#define PLATFORM_WIN32 1

/* Pointer field name in 'union sigval' */
/* #undef SIGVAL_PTR */

/* The size of a `size_t', as computed by sizeof. */
/* #undef SIZEOF_SIZE_T */

/* The size of a `void *', as computed by sizeof. */
#ifdef _WIN64
#define SIZEOF_VOID_P 8
#else
#define SIZEOF_VOID_P 4
#endif

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* GC description */
#define USED_GC_NAME "Included Boehm (with typed GC)"

/* Version number of package */
#define VERSION "1.9"
