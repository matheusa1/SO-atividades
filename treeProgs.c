#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    int n;

    printf("Deseja uma árvore de quantos níveis?\n>");
    scanf("%d", &n);

    int i = 0;
    while (i <= n - 1) {
        pid_t pid1 = 0;
        pid_t pid2 = 0;

        pid1 = fork();
        if(pid1) {
            pid2 = fork();
            pid1 = 0;
        }
        if(pid2) break;
        i++;
    }
    
    scanf("%d", &n);

    return 0;
}