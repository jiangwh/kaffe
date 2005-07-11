/*
 * i386/netbsd/jit-md.h
 * NetBSD i386 JIT configuration information.
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * See the file "license.terms" for information on usage and redistribution 
 * of this file. 
 */

#ifndef __i386_netbsd_jit_md_h
#define __i386_netbsd_jit_md_h

/**/
/* Include common information. */
/**/
#include "i386/jit.h"

/**/
/* Extra exception handling information. */
/**/

/* Function prototype for signal handlers */
#define	EXCEPTIONPROTO SIGNAL_ARGS(sig, ctx)

/* Get the first exception frame from a signal handler */
#if defined(HAVE_SYS_UCONTEXT_H)
#define	EXCEPTIONFRAME(f, c)						\
        (f).retbp = _UC_MACHINE_SP(((ucontext_t *)(c)));                \
	(f).retpc = _UC_MACHINE_PC(((ucontext_t *)(c)))
#else
#define EXCEPTIONFRAME(f, c)						\
	(f).retbp = (c)->sc_ebp;					\
	(f).retpc = (c)->sc_eip + 1;
#endif


#endif
