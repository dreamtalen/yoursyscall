#include <lib.h>
#define yoursyscall	_yoursyscall
#include <unistd.h>
#include <sys/resource.h>

PUBLIC void yoursyscall(arg,deadline)
int arg;
int deadline;
{
  message m;

  m.m1_i1 = arg;
  m.m1_i3 = deadline;
  return(_syscall(PM_PROC_NR, YOURSYSCALL, &m));
}
