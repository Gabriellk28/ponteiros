#include <stdint.h>
int main(void){
    float var = 2.5;
    //Declaração de ponteiro
    float * ponteiro;

    ponteiro = &var;

    printf("Var = %f\nPonteiro = %p\n", var, ponteiro);

    return 0;
}