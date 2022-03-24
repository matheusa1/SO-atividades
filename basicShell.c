#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int flag = 0;
    int flag2 = 0;
    char command[50];
    char params[50];
    char params2[50];

    while(1) {
        char file[50];
        file[0] = '\0';
        strcat(file, "/bin/");
        printf("Interface Shell\n\n\n\n\n\nDigite o comando desejado\n > ");
        scanf("%s", command);

        for(int i = 0; command[i] != '\0'; i++) {
            if (command[i] == '9') {
                int count = 0;
                flag = 1;
                for(int j = i + 1; command[j] != '\0'; j++) {
                    if (params[j] == '9') {
                        int count2 = 0;
                        flag2 = 1;     
                        for(int k = j + 1; command[k] != '\0'; k++) {
                            params2[count2] = command[k];
                            count2++;
                        }
                        params[j] = '\0';
                        break;
                    }
                    params[count] = command[j];
                    count++;
                
            }
            command[i] = '\0';
            break;
            }
        }

        strcat(file, command);

        if(flag == 1) {
            if(flag2 == 1) {
            fork();
            char* cmd[] = { command, params, params2, (char*) 0};
            execv(file, cmd);    
            } else {
                fork();
                char* cmd[] = { command, params, (char*) 0};
                execv(file, cmd);
            }
        } else {
            fork();
            char* cmd[] = { command, (char*) 0};
            execv(file, cmd);
        }

    }

    return 0;
}