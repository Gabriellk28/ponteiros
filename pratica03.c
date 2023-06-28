#include <stdint.h>

void incrementa(int * ponteiro){
    //int * ponteiro: ponteiro para variável do tipo int
    //Realiza o incremento do conteúdo do ponteiro 
    (*ponteiro)++;
}

int main(void){
    int var = 2;
    printf("Var = %d\n", var);
    incrementa(&var);
    printf("Var = %d\n", var);
    return 0;
}