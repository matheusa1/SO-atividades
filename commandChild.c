#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>


int main() {

    char command[100];
    
    printf("Qual comando deseja usar?\n > ");
    scanf("%s", command);

    pid_t pid = fork();
    if(pid) {
        printf("\nSou o pai\n");
        return 0;
    }

    char* cmd[] = { command , "-l" , (char*) 0};
    execv("/bin/ls", cmd);

    return 0;
}
