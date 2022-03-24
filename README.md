# Atividades de SO

Repositório contendo os códigos das atividades 2 de Sistemas Operacionais.

## Libs usadas

### <string.h> para tratar strings.

### <sys/types.h> para ter acesso a tipagem pid_t.

### <unistd.h> para usar o comando fork();

## Como rodar:

### Tree

`make tree`

Informe o número de galhos requeridos que será criado uma sequencia de fork() com o número de galhos desejados.

### CommandChild

`make command`

Informe qual o comando que o Child executará.

### ArrayDivision

`make array`

Informe o tamanho do array, os valores do array, a quandidade de Childs e o valor a ser encontrado, que o algoritmo retornará um a posição do item no array e o pid do Child.

### Simple Shell

`make shell`

Uma simples interface de shell, feita para rodar o comando desejado. Feito para treinar a execução do exec.