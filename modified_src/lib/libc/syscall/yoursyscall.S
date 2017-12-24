#include <machine/asm.h>

IMPORT(_yoursyscall)
ENTRY(yoursyscall)
	jmp	_C_LABEL(_yoursyscall)

