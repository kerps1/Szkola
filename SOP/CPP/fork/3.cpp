#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    for (int i = 0; i < 100; i++) {
        if (pid == 0) {
            pid = fork();
            continue;
        } else {
            break;
        }
    }
}