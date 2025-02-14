#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_SCHED_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_SCHED_H_
#include "libc/runtime/symbolic.h"

#define SCHED_BATCH         SYMBOLIC(SCHED_BATCH)
#define SCHED_DEADLINE      SYMBOLIC(SCHED_DEADLINE)
#define SCHED_FIFO          SYMBOLIC(SCHED_FIFO)
#define SCHED_IDLE          SYMBOLIC(SCHED_IDLE)
#define SCHED_NORMAL        SCHED_OTHER
#define SCHED_OTHER         SYMBOLIC(SCHED_OTHER)
#define SCHED_RESET_ON_FORK SYMBOLIC(SCHED_RESET_ON_FORK)
#define SCHED_RR            SYMBOLIC(SCHED_RR)

#if !(__ASSEMBLER__ + __LINKER__ + 0)
COSMOPOLITAN_C_START_

extern const long SCHED_BATCH;
extern const long SCHED_DEADLINE;
extern const long SCHED_FIFO;
extern const long SCHED_IDLE;
extern const long SCHED_OTHER;
extern const long SCHED_RESET_ON_FORK;
extern const long SCHED_RR;

COSMOPOLITAN_C_END_
#endif /* !(__ASSEMBLER__ + __LINKER__ + 0) */
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_SCHED_H_ */
