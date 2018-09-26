#include <sys/ptrace.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    long ptrace_status;

    pid_t tracee_pid;
    tracee_pid = atoi(argv[1]);
    ptrace_status = ptrace(PTRACE_ATTACH, tracee_pid, 0, 0);

    if (ptrace_status == -1) {
        perror("Error attaching to process");
    }


    return 0;
}
