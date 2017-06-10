#include <stdio.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main()
{
    pid_t pid = fork();

    if (pid == 0) {
        printf("dziecko PID: %d / PPID: %d \n", getpid(), getppid());
    } else if (pid > 0) {
        printf("parent PID: %d / PPID: %d \n", getpid(), getppid());
    } else {
        cout << "fork failed" << endl;
        return 1;
    }
    return 0;
}