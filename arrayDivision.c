#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int searchArray(int* array, int start, int end, int value);

int main() {
    int arraySize;
    int* array;
    int numOfForks;
    int x;

    printf("\nDigite a quantidade de filhos\n > ");
    scanf("%d", &numOfForks);
    printf("\nQual o tamanho do vetor?\n > ");
    scanf("%d", &arraySize);
    printf("\nDigite os números do vetor:\n");
    for(int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }
    printf("\nQual o valor a ser procurado?\n > ");
    scanf("%d", &x);

    int sizePartPerSon = arraySize / numOfForks;

    pid_t pid = 1;

    for(int i = 0; i < numOfForks; i++) {
        if(!pid) break;
        pid = fork();
        if(!pid) {
            int result = searchArray(array, i * numOfForks, numOfForks * (i + 1), x);
            if(result == -1) return 0;
            printf("\nEstá na posição %d\nNo processo filho de pid: %d\n", result, getpid());
        }
    }

    return 0;
}

int searchArray(int* array, int start, int end, int value) {
    for(int i = start; i <= end; i++) {
        if(array[i] == value) return i;
    }
    return -1;
}