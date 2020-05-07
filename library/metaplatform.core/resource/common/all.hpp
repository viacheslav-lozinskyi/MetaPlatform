//#############################################################################
//
// Product: MetaPlatform
// License: MIT License
//
//#############################################################################

#pragma once

#ifndef __cplusplus
#error "MetaPlatform: Attempt to compile by not C++ compiler"
#endif

#ifndef _CPPRTTI
#error "MetaPlatform: RTTI is not activated"
#endif

#ifndef MP_PRODUCT_NAME
#define MP_PRODUCT_NAME                                                        "UNKNOWN"
#endif

#ifndef MP_PRODUCT_VERSION
#define MP_PRODUCT_VERSION                                                     "UNKNOWN"
#endif

#ifdef _ACC_
#define MP_COMPILER_NAME                                                       "ACC"
#define MP_COMPILER_ACC                                                        _ACC_
#elif __CMB__
#define MP_COMPILER_NAME                                                       "Altium MicroBlaze C"
#define MP_COMPILER_CMB                                                        __VERSION__
#elif __CHC__
#define MP_COMPILER_NAME                                                       "Altium C-to-Hardware"
#define MP_COMPILER_CHC                                                        __VERSION__
#elif __ACK__
#define MP_COMPILER_NAME                                                       "Amsterdam Compiler Kit"
#define MP_COMPILER_ACK                                                        __ACK__
#elif __CC_ARM
#define MP_COMPILER_NAME                                                       "ARM Compiler"
#define MP_COMPILER_CCARM                                                      __ARMCC_VERSION
#elif __AZTEC_C__
#define MP_COMPILER_NAME                                                       "Aztec C"
#define MP_COMPILER_AZTECC                                                     __VERSION
#elif __BORLANDC__
#define MP_COMPILER_NAME                                                       "Borland C++"
#define MP_COMPILER_BORLANDC                                                   __BORLANDC__
#elif __CODEGEARC__
#define MP_COMPILER_NAME                                                       "Borland C++"
#define MP_COMPILER_BORLANDC                                                   __CODEGEARC__
#elif __CC65__
#define MP_COMPILER_NAME                                                       "CC65"
#define MP_COMPILER_CC65                                                       __CC65__
#elif __clang__
#define MP_COMPILER_NAME                                                       "Clang"
#define MP_COMPILER_CLANG                                                      __clang_major__
#elif __COMO__
#define MP_COMPILER_NAME                                                       "Comeau C++"
#define MP_COMPILER_COMO                                                       __COMO_VERSION__
#elif __DECC
#define MP_COMPILER_NAME                                                       "Compaq C/C++"
#define MP_COMPILER_DECC                                                       __DECC_VER
#elif __DECCXX
#define MP_COMPILER_NAME                                                       "Compaq C/C++"
#define MP_COMPILER_DECC                                                       __DECCXX_VER
#elif __convexc__
#define MP_COMPILER_NAME                                                       "Convex C"
#define MP_COMPILER_CONVEXC                                                    __convexc__
#elif __COMPCERT__
#define MP_COMPILER_NAME                                                       "CompCert"
#define MP_COMPILER_COMPCERT                                                   __COMPCERT__
#elif __COVERITY__
#define MP_COMPILER_NAME                                                       "Coverity C/C++ Static Analyzer"
#define MP_COMPILER_COVERITY                                                   __COVERITY__
#elif _CRAYC
#define MP_COMPILER_NAME                                                       "Cray C"
#define MP_COMPILER_CRAYC                                                      _CRAYC
#elif __DCC__
#define MP_COMPILER_NAME                                                       "Diab C/C++"
#define MP_COMPILER_DCC                                                        __VERSION_NUMBER__
#elif _DICE
#define MP_COMPILER_NAME                                                       "DICE C"
#define MP_COMPILER_DICE                                                       _DICE
#elif __DMC__
#define MP_COMPILER_NAME                                                       "Digital Mars"
#define MP_COMPILER_DICE                                                       __DMC__
#elif __SYSC__
#define MP_COMPILER_NAME                                                       "Dignus Systems/C++"
#define MP_COMPILER_SYSC                                                       __SYSC_VER__
#elif __DJGPP__
#define MP_COMPILER_NAME                                                       "DJGPP"
#define MP_COMPILER_DJGPP                                                      __DJGPP__
#elif __PATHCC__
#define MP_COMPILER_NAME                                                       "EKOPath"
#define MP_COMPILER_PATHCC                                                     __PATHCC__
#elif __FCC_VERSION
#define MP_COMPILER_NAME                                                       "Fujitsu C++"
#define MP_COMPILER_FCC                                                        __FCC_VERSION
#elif __FCC_VERSION
#define MP_COMPILER_NAME                                                       "Fujitsu C++"
#define MP_COMPILER_FCC                                                        __FCC_VERSION
#elif __GNUC__
#define MP_COMPILER_NAME                                                       "GCC C/C++"
#define MP_COMPILER_GNUC                                                       __GNUC__
#elif __ghs__
#define MP_COMPILER_NAME                                                       "Green Hill C/C++"
#define MP_COMPILER_GHS                                                        __GHS_VERSION_NUMBER__
#elif __HP_cc
#define MP_COMPILER_NAME                                                       "HP ANSI C"
#define MP_COMPILER_HPCC                                                       __HP_cc
#elif __HP_aCC
#define MP_COMPILER_NAME                                                       "HP aC++"
#define MP_COMPILER_HPACC                                                      __HP_aCC
#elif __IAR_SYSTEMS_ICC__
#define MP_COMPILER_NAME                                                       "IAR C/C++"
#define MP_COMPILER_IARSYSTEMSICC                                              __VER__
#elif __xlc__
#define MP_COMPILER_NAME                                                       "IBM XL C/C++"
#define MP_COMPILER_XLC                                                        __xlc__
#elif __xlC__
#define MP_COMPILER_NAME                                                       "IBM XL C/C++"
#define MP_COMPILER_XLC                                                        __xlC__
#elif __IBMC__
#define MP_COMPILER_NAME                                                       "IBM z/OS C/C++"
#define MP_COMPILER_IBMC                                                       __IBMC__
#elif __IBMCPP__
#define MP_COMPILER_NAME                                                       "IBM z/OS C/C++"
#define MP_COMPILER_IBMCPP                                                     __IBMCPP__
#elif __IMAGECRAFT__
#define MP_COMPILER_NAME                                                       "ImageCraft C"
#define MP_COMPILER_IMAGECRAFT                                                 __IMAGECRAFT__
#elif __INTEL_COMPILER
#define MP_COMPILER_NAME                                                       "Intel C/C++"
#define MP_COMPILER_INTELCOMPILER                                              __INTEL_COMPILER
#elif __ICC
#define MP_COMPILER_NAME                                                       "Intel C/C++"
#define MP_COMPILER_INTELCOMPILER                                              __INTEL_COMPILER
#elif __ECC
#define MP_COMPILER_NAME                                                       "Intel C/C++"
#define MP_COMPILER_INTELCOMPILER                                              __INTEL_COMPILER
#elif __ICL
#define MP_COMPILER_NAME                                                       "Intel C/C++"
#define MP_COMPILER_INTELCOMPILER                                              __INTEL_COMPILER
#elif __KCC
#define MP_COMPILER_NAME                                                       "KAI C++"
#define MP_COMPILER_KCC                                                        __KCC_VERSION
#elif __CA__
#define MP_COMPILER_NAME                                                       "KEIL CARM"
#define MP_COMPILER_KEIL                                                       __CA__
#elif __KEIL__
#define MP_COMPILER_NAME                                                       "KEIL CARM"
#define MP_COMPILER_KEIL                                                       __CA__
#elif __C166__
#define MP_COMPILER_NAME                                                       "KEIL C166"
#define MP_COMPILER_C166                                                       __C166__
#elif __C51__
#define MP_COMPILER_NAME                                                       "KEIL C51"
#define MP_COMPILER_C51                                                        __C51__
#elif __CX51__
#define MP_COMPILER_NAME                                                       "KEIL C51"
#define MP_COMPILER_CX51                                                       __C51__
#elif __LCC__
#define MP_COMPILER_NAME                                                       "LCC"
#define MP_COMPILER_LCC                                                        __LCC__
#elif __llvm__
#define MP_COMPILER_NAME                                                       "LLVM"
#define MP_COMPILER_LLVM                                                       __llvm__
#elif __MWERKS__
#define MP_COMPILER_NAME                                                       "Metrowerks CodeWarrior"
#define MP_COMPILER_MWERKS                                                     __MWERKS__
#elif _MSC_VER
#define MP_COMPILER_NAME                                                       "Microsoft Visual C++"
#define MP_COMPILER_VISUALSTUDIO                                               _MSC_VER
#elif _MRI
#define MP_COMPILER_NAME                                                       "Microtec C/C++"
#define MP_COMPILER_MRI                                                        _MRI
#elif __NDPC__
#define MP_COMPILER_NAME                                                       "Microway NDP C"
#define MP_COMPILER_NDPC                                                       __NDPC__
#elif __NDPX__
#define MP_COMPILER_NAME                                                       "Microway NDP C"
#define MP_COMPILER_NDPX                                                       __NDPX__
#elif __sgi
#define MP_COMPILER_NAME                                                       "MIPSpro"
#define MP_COMPILER_SGI                                                        _COMPILER_VERSION
#elif sgi
#define MP_COMPILER_NAME                                                       "MIPSpro"
#define MP_COMPILER_SGI                                                        _COMPILER_VERSION
#elif MIRACLE
#define MP_COMPILER_NAME                                                       "Miracle C"
#define MP_COMPILER_MIRACLE                                                    MIRACLE
#elif __MRC__
#define MP_COMPILER_NAME                                                       "MPW C++"
#define MP_COMPILER_MRC                                                        __MRC__
#elif __CC_NORCROFT
#define MP_COMPILER_NAME                                                       "Norcroft C"
#define MP_COMPILER_CCNORCROFT                                                 __ARMCC_VERSION
#elif __NWCC__
#define MP_COMPILER_NAME                                                       "NWCC"
#define MP_COMPILER_NWCC                                                       __NWCC__
#elif __OPENCC__
#define MP_COMPILER_NAME                                                       "NWCC"
#define MP_COMPILER_OPENCC                                                     __OPENCC__
#elif ORA_PROC
#define MP_COMPILER_NAME                                                       "Oracle Pro*C Precompiler"
#define MP_COMPILER_ORAPROC                                                    ORA_PROC
#elif __SUNPRO_C
#define MP_COMPILER_NAME                                                       "Oracle Solaris Studio"
#define MP_COMPILER_SUNPROC                                                    __SUNPRO_C
#elif __SUNPRO_CC
#define MP_COMPILER_NAME                                                       "Oracle Solaris Studio"
#define MP_COMPILER_SUNPROCC                                                   __SUNPRO_CC
#elif __PACIFIC__
#define MP_COMPILER_NAME                                                       "Pacific C"
#define MP_COMPILER_PACIFIC                                                    __PACIFIC__
#elif _PACC_VER
#define MP_COMPILER_NAME                                                       "Palm C/C++"
#define MP_COMPILER_PACCVER                                                    _PACC_VER
#elif __POCC__
#define MP_COMPILER_NAME                                                       "Pelles C"
#define MP_COMPILER_POCC                                                       __POCC__
#elif __PGI
#define MP_COMPILER_NAME                                                       "Portland Group C/C++"
#define MP_COMPILER_PGI                                                        __PGIC__
#elif __RENESAS__
#define MP_COMPILER_NAME                                                       "Renesas C/C++"
#define MP_COMPILER_RENESAS                                                    __RENESAS_VERSION__
#elif __HITACHI__
#define MP_COMPILER_NAME                                                       "Renesas C/C++"
#define MP_COMPILER_RENESAS                                                    __HITACHI_VERSION__
#elif __SASC__
#define MP_COMPILER_NAME                                                       "SAS/C"
#define MP_COMPILER_SASC                                                       __VERSION__
#elif _SCO_DS
#define MP_COMPILER_NAME                                                       "SCO OpenServer"
#define MP_COMPILER_SCODS                                                      _SCO_DS
#elif SDCC
#define MP_COMPILER_NAME                                                       "Small Device C Compiler"
#define MP_COMPILER_SDCC                                                       SDCC
#elif __SNC__
#define MP_COMPILER_NAME                                                       "SN Compiler"
#define MP_COMPILER_SNC                                                        __SNC__
#elif __VOSC__
#define MP_COMPILER_NAME                                                       "Stratus VOS C"
#define MP_COMPILER_VOSC                                                       __VOSC__
#elif __SC__
#define MP_COMPILER_NAME                                                       "Symantec C++"
#define MP_COMPILER_SC                                                         __SC__
#elif __TenDRA__
#define MP_COMPILER_NAME                                                       "TenDRA C/C++"
#define MP_COMPILER_TENDRA                                                     __TenDRA__
#elif __TI_COMPILER_VERSION__
#define MP_COMPILER_NAME                                                       "Texas Instruments C/C++ Compiler"
#define MP_COMPILER_TICOMPILER                                                 __TI_COMPILER_VERSION__
#elif THINKC3
#define MP_COMPILER_NAME                                                       "THINK C"
#define MP_COMPILER_THINKC3                                                    THINKC3
#elif THINKC4
#define MP_COMPILER_NAME                                                       "THINK C"
#define MP_COMPILER_THINKC4                                                    THINKC4
#elif __TINYC__
#define MP_COMPILER_NAME                                                       "Tiny C"
#define MP_COMPILER_TINYC                                                      __TINYC__
#elif __TURBOC__
#define MP_COMPILER_NAME                                                       "Turbo C/C++"
#define MP_COMPILER_TURBOC                                                     __TURBOC__
#elif _UCC
#define MP_COMPILER_NAME                                                       "Ultimate C/C++"
#define MP_COMPILER_UCC                                                        _MAJOR_REV
#elif __USLC__
#define MP_COMPILER_NAME                                                       "USL C"
#define MP_COMPILER_USLC                                                        __SCO_VERSION__
#elif __VBCC__
#define MP_COMPILER_NAME                                                       "VBCC"
#define MP_COMPILER_VBCC                                                       __VBCC__
#elif __WATCOMC__
#define MP_COMPILER_NAME                                                       "Watcom C++"
#define MP_COMPILER_WATCOMC                                                    __WATCOMC__
#elif __ZTC__
#define MP_COMPILER_NAME                                                       "Zortech C++"
#define MP_COMPILER_ZTC                                                        __ZTC__
#elif __EDG__
#define MP_COMPILER_NAME                                                       "EDG C++ Frontend"
#define MP_COMPILER_EDG                                                        __EDG_VERSION__
#else
#error "MetaPlatform: Compiler is not supported"
#endif

#ifdef __ANDROID__
#define MP_PLATFORM_NAME                                                       "ANDROID"
#define MP_PLATFORM_ANDROID                                                    __ANDROID__
#elif _AIX
#define MP_PLATFORM_NAME                                                       "AIX"
#define MP_PLATFORM_AIX                                                        _AIX
#elif __amigaos__
#define MP_PLATFORM_NAME                                                       "AmigaOS"
#define MP_PLATFORM_AMIGA                                                      __amigaos__
#elif __BEOS__
#define MP_PLATFORM_NAME                                                       "BEOS"
#define MP_PLATFORM_BEOS                                                       __BEOS__
#elif __bsdi__
#define MP_PLATFORM_NAME                                                       "BSD/OS"
#define MP_PLATFORM_BSDI                                                       __bsdi__
#elif _UNICOS
#define MP_PLATFORM_NAME                                                       "Cray Unicos"
#define MP_PLATFORM_UNICOS                                                     _UNICOS
#elif __DGUX__
#define MP_PLATFORM_NAME                                                       "DG/UX"
#define MP_PLATFORM_DGUX                                                       __DGUX__
#elif __dgux__
#define MP_PLATFORM_NAME                                                       "DG/UX"
#define MP_PLATFORM_DGUX                                                       __dgux__
#elif __DragonFly__
#define MP_PLATFORM_NAME                                                       "DragonFly"
#define MP_PLATFORM_DRAGONFLY                                                  __DragonFly__
#elif _SEQUENT_
#define MP_PLATFORM_NAME                                                       "DYNIX/ptx"
#define MP_PLATFORM_DYNIX                                                      _SEQUENT_
#elif __FreeBSD__
#define MP_PLATFORM_NAME                                                       "FreeBSD"
#define MP_PLATFORM_FREEBSD                                                    __FreeBSD__
#elif __hpux
#define MP_PLATFORM_NAME                                                       "HP/UX"
#define MP_PLATFORM_HPUX                                                       __hpux
#elif _SGI_SOURCE
#define MP_PLATFORM_NAME                                                       "IRIX"
#define MP_PLATFORM_SGI                                                        _SGI_SOURCE
#elif __MACH__
#define MP_PLATFORM_NAME                                                       "iOS"
#define MP_PLATFORM_APPLE                                                      __MACH__
#define MP_PLATFORM_IOS                                                        __MACH__
#define MP_PLATFORM_UNIX                                                       __MACH__
#elif __MACOSX__
#define MP_PLATFORM_NAME                                                       "MacOS"
#define MP_PLATFORM_APPLE                                                      __MACOSX__
#define MP_PLATFORM_MACOS                                                      __MACOSX__
#define MP_PLATFORM_UNIX                                                       __MACOSX__
#elif __OSX__
#define MP_PLATFORM_NAME                                                       "MacOS"
#define MP_PLATFORM_APPLE                                                      __OSX__
#define MP_PLATFORM_MACOS                                                      __OSX__
#define MP_PLATFORM_UNIX                                                       __OSX__
#elif __APPLE__
#define MP_PLATFORM_NAME                                                       "Apple"
#define MP_PLATFORM_APPLE                                                      __APPLE__
#define MP_PLATFORM_UNIX                                                       __APPLE__
#elif __mpexl
#define MP_PLATFORM_NAME                                                       "MPE/iX"
#define MP_PLATFORM_MPEIX                                                      __mpexl
#elif __MSDOS__
#define MP_PLATFORM_NAME                                                       "MSDOS"
#define MP_PLATFORM_MSDOS                                                      __MSDOS__
#elif __NetBSD__
#define MP_PLATFORM_NAME                                                       "NetBSD"
#define MP_PLATFORM_NETBSD                                                     __NetBSD__
#elif __OpenBSD__
#define MP_PLATFORM_NAME                                                       "OpenBSD"
#define MP_PLATFORM_OPENBSD                                                    __OpenBSD__
#elif __OS2__
#define MP_PLATFORM_NAME                                                       "OS/2"
#define MP_PLATFORM_OS2                                                        __OS2__
#elif __osf__
#define MP_PLATFORM_NAME                                                       "OSF/1"
#define MP_PLATFORM_OSF                                                        __osf__
#elif __QNX__
#define MP_PLATFORM_NAME                                                       "QNX"
#define MP_PLATFORM_QNX                                                        __QNX__
#elif __SCO_DS
#define MP_PLATFORM_NAME                                                       "SCO OpenServer"
#define MP_PLATFORM_SCO                                                        __SCO_DS
#elif __SUNPRO_C
#define MP_PLATFORM_NAME                                                       "Solaris"
#define MP_PLATFORM_SUN                                                        __SUNPRO_C
#elif __sun
#define MP_PLATFORM_NAME                                                       "Solaris"
#define MP_PLATFORM_SUN                                                        __sun
#elif __SunOS
#define MP_PLATFORM_NAME                                                       "SUN"
#define MP_PLATFORM_SUN                                                        __SunOS
#elif __ultrix__
#define MP_PLATFORM_NAME                                                       "Ultrix"
#define MP_PLATFORM_ULTRIX                                                     __ultrix__
#elif _UNIXWARE7
#define MP_PLATFORM_NAME                                                       "UnixWare"
#define MP_PLATFORM_UNIXWARE                                                   _UNIXWARE7
#elif __VMS
#define MP_PLATFORM_NAME                                                       "VMS"
#define MP_PLATFORM_VMS                                                        __VMS
#elif __CYGWIN__
#define MP_PLATFORM_NAME                                                       "CYGWIN"
#define MP_PLATFORM_CYGWIN                                                     __CYGWIN__
#elif __CYGWIN32__
#define MP_PLATFORM_NAME                                                       "CYGWIN"
#define MP_PLATFORM_CYGWIN                                                     __CYGWIN32__
#elif __CYGWIN64__
#define MP_PLATFORM_NAME                                                       "CYGWIN"
#define MP_PLATFORM_CYGWIN                                                     __CYGWIN64__
#elif __MINGW32__
#define MP_PLATFORM_NAME                                                       "MINGW"
#define MP_PLATFORM_MINGW                                                      __MINGW32__
#elif __MINGW64__
#define MP_PLATFORM_NAME                                                       "MINGW"
#define MP_PLATFORM_MINGW                                                      __MINGW64__
#elif _WIN32
#define MP_PLATFORM_NAME                                                       "Windows"
#define MP_PLATFORM_WINDOWS                                                    _WIN32
#elif __WIN32
#define MP_PLATFORM_NAME                                                       "Windows"
#define MP_PLATFORM_WINDOWS                                                    __WIN32
#elif __WIN32__
#define MP_PLATFORM_NAME                                                       "Windows"
#define MP_PLATFORM_WINDOWS                                                    __WIN32__
#elif _WIN64
#define MP_PLATFORM_NAME                                                       "Windows"
#define MP_PLATFORM_WINDOWS                                                    _WIN64
#elif __WIN64
#define MP_PLATFORM_NAME                                                       "Windows"
#define MP_PLATFORM_WINDOWS                                                    __WIN64
#elif __WIN64__
#define MP_PLATFORM_NAME                                                       "Windows"
#define MP_PLATFORM_WINDOWS                                                    __WIN64__
#elif _UWIN
#define MP_PLATFORM_NAME                                                       "U/Win"
#define MP_PLATFORM_UWIN                                                       _UWIN
#elif _WINDU_SOURCE
#define MP_PLATFORM_NAME                                                       "Wind/U"
#define MP_PLATFORM_WINDU                                                      _WINDU_SOURCE
#else
#error "MetaPlatform: Platform is not supported"
#endif

#ifdef JNI_VERSION_1_8
#define MP_PLATFORM_JAVA                                                       JNI_VERSION_1_8
#elif JNI_VERSION_1_6
#define MP_PLATFORM_JAVA                                                       JNI_VERSION_1_6
#elif JNI_VERSION_1_4
#define MP_PLATFORM_JAVA                                                       JNI_VERSION_1_4
#elif JNI_VERSION_1_2
#define MP_PLATFORM_JAVA                                                       JNI_VERSION_1_2
#elif JNI_VERSION_1_1
#define MP_PLATFORM_JAVA                                                       JNI_VERSION_1_1
#endif

#ifdef __linux
#define MP_PLATFORM_LINUX                                                      __linux
#elif __linux__
#define MP_PLATFORM_LINUX                                                      __linux__
#endif

#ifdef __unix
#define MP_PLATFORM_UNIX                                                       __unix
#elif __unix__
#define MP_PLATFORM_UNIX                                                       __unix__
#endif

#ifdef _POSIX_VERSION
#define MP_PLATFORM_POSIX                                                      _POSIX_VERSION
#endif

#ifdef __cplusplus_cli
#define MP_PLATFORM_CLI                                                        __cplusplus_cli
#endif

#ifdef __cplusplus_winrt
#define MP_PLATFORM_WINRT                                                      __cplusplus_winrt
#endif

#ifdef __alpha__
#define MP_PROCESSOR_NAME                                                      "Alpha"
#define MP_PROCESSOR_ALPHA                                                     __alpha__
#elif __alpha
#define MP_PROCESSOR_NAME                                                      "Alpha"
#define MP_PROCESSOR_ALPHA                                                     __alpha
#elif _M_ALPHA
#define MP_PROCESSOR_NAME                                                      "Alpha"
#define MP_PROCESSOR_ALPHA                                                     _M_ALPHA
#elif __amd64__
#define MP_PROCESSOR_NAME                                                      "x64"
#define MP_PROCESSOR_X64                                                       __amd64__
#define MP_PROCESSOR_AMD64                                                     __amd64__
#elif __amd64
#define MP_PROCESSOR_NAME                                                      "x64"
#define MP_PROCESSOR_X64                                                       __amd64
#define MP_PROCESSOR_AMD64                                                     __amd64
#elif __x86_64__
#define MP_PROCESSOR_NAME                                                      "x64"
#define MP_PROCESSOR_X64                                                       __x86_64__
#define MP_PROCESSOR_AMD64                                                     __x86_64__
#elif __x86_64
#define MP_PROCESSOR_NAME                                                      "x64"
#define MP_PROCESSOR_X64                                                       __x86_64
#define MP_PROCESSOR_AMD64                                                     __x86_64
#elif _M_X64
#define MP_PROCESSOR_NAME                                                      "x64"
#define MP_PROCESSOR_X64                                                       _M_X64
#elif _M_AMD64
#define MP_PROCESSOR_NAME                                                      "x64"
#define MP_PROCESSOR_X64                                                       _M_AMD64
#define MP_PROCESSOR_AMD64                                                     _M_AMD64
#elif __arm__
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       __arm__
#elif __thumb__
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       __thumb__
#elif __TARGET_ARCH_ARM
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       __TARGET_ARCH_ARM
#elif __TARGET_ARCH_THUMB
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       __TARGET_ARCH_THUMB
#elif _ARM
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       _ARM
#elif _M_ARM
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       _M_ARM
#elif _M_ARMT
#define MP_PROCESSOR_NAME                                                      "ARM"
#define MP_PROCESSOR_ARM                                                       _M_ARM
#elif __convex__
#define MP_PROCESSOR_NAME                                                      "Convex"
#define MP_PROCESSOR_CONVEX                                                    __convex__
#elif __hppa__
#define MP_PROCESSOR_NAME                                                      "HP/PA RISC"
#define MP_PROCESSOR_HPPA                                                      __hppa__
#elif __HPPA__
#define MP_PROCESSOR_NAME                                                      "HP/PA RISC"
#define MP_PROCESSOR_HPPA                                                      __HPPA__
#elif __hppa
#define MP_PROCESSOR_NAME                                                      "HP/PA RISC"
#define MP_PROCESSOR_HPPA                                                      __hppa
#elif __i386
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       __i386
#elif __i386__
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       __i386__
#elif __IA32__
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       __IA32__
#elif _M_I86
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       _M_I86
#elif _M_IX86
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       _M_IX86
#elif __X86__
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       __X86__
#elif _X86_
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       _X86_
#elif __THW_INTEL__
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       __THW_INTEL__
#elif __I86__
#define MP_PROCESSOR_NAME                                                      "x86"
#define MP_PROCESSOR_X86                                                       __I86__
#elif __ia64__
#define MP_PROCESSOR_NAME                                                      "Intel Itanium (IA-64)"
#define MP_PROCESSOR_IA64                                                      __ia64__
#elif _IA64
#define MP_PROCESSOR_NAME                                                      "Intel Itanium (IA-64)"
#define MP_PROCESSOR_IA64                                                      _IA64
#elif __IA64__
#define MP_PROCESSOR_NAME                                                      "Intel Itanium (IA-64)"
#define MP_PROCESSOR_IA64                                                      __IA64__
#elif __ia64
#define MP_PROCESSOR_NAME                                                      "Intel Itanium (IA-64)"
#define MP_PROCESSOR_IA64                                                      __ia64
#elif _M_IA64
#define MP_PROCESSOR_NAME                                                      "Intel Itanium (IA-64)"
#define MP_PROCESSOR_IA64                                                      _M_IA64
#elif __itanium__
#define MP_PROCESSOR_NAME                                                      "Intel Itanium (IA-64)"
#define MP_PROCESSOR_IA64                                                      __itanium__
#elif __m68k__
#define MP_PROCESSOR_NAME                                                      "Motorola 68k"
#define MP_PROCESSOR_M86K                                                      __m68k__
#elif __MC68K__
#define MP_PROCESSOR_NAME                                                      "Motorola 68k"
#define MP_PROCESSOR_M86K                                                      __MC68K__
#elif __mips__
#define MP_PROCESSOR_NAME                                                      "MIPS"
#define MP_PROCESSOR_MIPS                                                      __mips__
#elif __mips
#define MP_PROCESSOR_NAME                                                      "MIPS"
#define MP_PROCESSOR_MIPS                                                      __mips
#elif __MIPS__
#define MP_PROCESSOR_NAME                                                      "MIPS"
#define MP_PROCESSOR_MIPS                                                      __MIPS__
#elif __powerpc
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __powerpc
#elif __powerpc__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __powerpc__
#elif __POWERPC__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __POWERPC__
#elif __ppc__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __ppc__
#elif _M_PPC
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   _M_PPC
#elif _ARCH_PPC
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   _ARCH_PPC
#elif _ARCH_PPC64
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   _ARCH_PPC64
#elif __powerpc64__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __powerpc64__
#elif __ppc64
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __ppc64
#elif __ppc64__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __ppc64__
#elif __PPC64__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_POWERPC                                                   __PPC64__
#elif __THW_RS6000
#define MP_PROCESSOR_NAME                                                      "RS/6000"
#define MP_PROCESSOR_RS6000                                                    __THW_RS6000
#elif _IBMR2
#define MP_PROCESSOR_NAME                                                      "RS/6000"
#define MP_PROCESSOR_RS6000                                                    _IBMR2
#elif __sparc__
#define MP_PROCESSOR_NAME                                                      "SPARC"
#define MP_PROCESSOR_SPARC                                                     __sparc__
#elif __sparc
#define MP_PROCESSOR_NAME                                                      "SPARC"
#define MP_PROCESSOR_SPARC                                                     __sparc
#elif __sparc64__
#define MP_PROCESSOR_NAME                                                      "PowerPC"
#define MP_PROCESSOR_SPARC                                                     __sparc64__
#elif __sh__
#define MP_PROCESSOR_NAME                                                      "SuperH"
#define MP_PROCESSOR_SUPERH                                                    __sh__
#elif __370__
#define MP_PROCESSOR_NAME                                                      "System/370"
#define MP_PROCESSOR_SYSTEM370                                                 __370__
#elif __THW_370__
#define MP_PROCESSOR_NAME                                                      "System/370"
#define MP_PROCESSOR_SYSTEM370                                                 __THW_370__
#elif __s390__
#define MP_PROCESSOR_NAME                                                      "System/390"
#define MP_PROCESSOR_SYSTEM390                                                 __s390__
#elif __s390x__
#define MP_PROCESSOR_NAME                                                      "System/390"
#define MP_PROCESSOR_SYSTEM390                                                 __s390x__
#elif __TMS320C2000__
#define MP_PROCESSOR_NAME                                                      "TMS320"
#define MP_PROCESSOR_TMS320                                                    __TMS320C2000__
#elif __TMS320C55X__
#define MP_PROCESSOR_NAME                                                      "TMS320"
#define MP_PROCESSOR_TMS320                                                    __TMS320C55X__
#elif __TMS320C6X__
#define MP_PROCESSOR_NAME                                                      "TMS320"
#define MP_PROCESSOR_TMS320                                                    __TMS320C6X__
#elif __TMS470__
#define MP_PROCESSOR_NAME                                                      "TMS470"
#define MP_PROCESSOR_TMS470                                                    __TMS470__
#elif __SYSC_ZARCH__
#define MP_PROCESSOR_NAME                                                      "z/Architecture"
#define MP_PROCESSOR_ZARCHITECTURE                                             __SYSC_ZARCH__
#else
#error "MetaPlatform: Processor is not supported"
#endif

#ifdef _DEBUG
#define MP_DEBUG                                                               _DEBUG
#elif DEBUG
#define MP_DEBUG                                                               DEBUG
#endif

#ifdef UNICODE
#define MP_UNICODE                                                             UNICODE
#endif

#ifdef MP_PLATFORM_CLI
#define MP_UNUSED(VALUE)                                                       VALUE
#define MP_CONSTANT_ENUM(NAME, VALUE, TYPE)                                    public: static property TYPE NAME { TYPE get() { return VALUE; } }
#define MP_CONSTANT_INTEGER(NAME, VALUE)                                       public: static property int NAME { int get() { return VALUE; } }
#define MP_CONSTANT_NAME(NAME)                                                 public: static property MP_STRING NAME { MP_STRING get() { return #NAME; } }
#define MP_CONSTANT_PATTERN(VALUE)                                             public: static property MP_STRING PATTERN { MP_STRING get() { return MP_TYPE_NAME(VALUE); } }
#define MP_CONSTANT_STRING(NAME, VALUE)                                        public: static property MP_STRING NAME { MP_STRING get() { return VALUE; } }
#else
#define MP_UNUSED(VALUE)                                                       VALUE
#define MP_CONSTANT_ENUM(NAME, VALUE, TYPE)                                    public: static constexpr const TYPE NAME = VALUE
#define MP_CONSTANT_INTEGER(NAME, VALUE)                                       public: static constexpr const int NAME = VALUE
#define MP_CONSTANT_NAME(NAME)                                                 public: static constexpr const char* NAME = #NAME
#define MP_CONSTANT_PATTERN(VALUE)                                             public: static constexpr const char* PATTERN = MP_TYPE_NAME(VALUE)
#define MP_CONSTANT_STRING(NAME, VALUE)                                        public: static constexpr const char* NAME = VALUE
#endif

#define MP_DOUBLE_MIN                                                          (double)(1.7E-308)
#define MP_DOUBLE_MAX                                                          (double)(1.7E+308)
#define MP_FLOAT_MIN                                                           (float)(3.4E-38)
#define MP_FLOAT_MAX                                                           (float)(3.4E+38)
#define MP_INT8_MIN                                                            (-127i8 - 1)
#define MP_INT8_MAX                                                            (127i8)
#define MP_INT16_MIN                                                           (-32767i16 - 1)
#define MP_INT16_MAX                                                           (32767i16)
#define MP_INT32_MIN                                                           (-2147483647i32 - 1)
#define MP_INT32_MAX                                                           (2147483647i32)
#define MP_INT64_MIN                                                           (-9223372036854775807i64 - 1)
#define MP_INT64_MAX                                                           (9223372036854775807i64)
#define MP_UINT8_MIN                                                           (0ui8)
#define MP_UINT8_MAX                                                           (0xFFui8)
#define MP_UINT16_MIN                                                          (0ui16)
#define MP_UINT16_MAX                                                          (0xFFFFui16)
#define MP_UINT32_MIN                                                          (0ui32)
#define MP_UINT32_MAX                                                          (0xFFFFFFFFui32)
#define MP_UINT64_MIN                                                          (0ui64)
#define MP_UINT64_MAX                                                          (0xFFFFFFFFFFFFFFFFui64)

#ifdef MP_PLATFORM_CLI
#include "cli/All.hpp"
#elif MP_PLATFORM_IOS
#include "ios/All.hpp"
#elif MP_PLATFORM_JAVA
#include "java/All.hpp"
#elif MP_PLATFORM_LINUX
#include "linux/All.hpp"
#elif MP_PLATFORM_MACOS
#include "macos/All.hpp"
#elif MP_PLATFORM_WINDOWS
#include "windows/All.hpp"
#else
#error "MetaPlatform: Current platform is not supported"
#endif
