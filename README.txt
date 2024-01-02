Adding Some Functionalities to the Existing xv6- Operating System:

Part One: Modified xv6 kernel to trace system calls, printing their names and return values. Edited `syscall()` in `syscall.c` to achieve this tracing functionality.

Part Two: Extended xv6 by adding `getprocinfo` system call, providing process info via `struct uproc`. Implemented `ps` utility querying all processes. Modified necessary files (syscall.h, syscall.c, proc.h) to integrate new system call.

Part Three: Enhanced `proc` struct in `proc.h` by adding time-related fields. Implemented `wait2` system call to retrieve process runtime info. Updated `wait()` system call. Modified proc-related files for time tracking and retrieval (proc.c, trap.c).

Overall, modifications in the kernel involved adding system calls, modifying data structures, and handling time-related process information.
