#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int status = 0;
    printf("rodzic PID: %d / PPID: %d \n \n", getpid(), getppid());
    
    for (int i = 0; i < 100; i++) {
        pid_t pid = fork();
        if (pid == 0) {
            printf("(%d). dziecko PID: %d / PPID: %d \n", i, getpid(), getppid());
            continue;
        } else {
            break;
        }
        wait(&status);
    }

    return 0;
}