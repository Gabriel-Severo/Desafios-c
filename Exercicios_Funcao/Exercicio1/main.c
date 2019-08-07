#include <stdio.h>
#include <stdlib.h>
/*
abaixo do peso < 19,1 < 20,7
no peso normal 19,1 - 25,8 20,7 - 26,4
marginalmente acima do peso 25,8 - 27,3 26,4 - 27,8
acima do peso ideal 27,3 - 32,3 27,8 - 31,1
obeso > 32,3 > 31,1
*/

void avaliar(char sexo, float imc){
    if(sexo == 'M'){
        if(imc<20.7)
            printf("Abaixo do peso");
        else if(imc<26.4)
            printf("Peso normal");
        else if(imc<27.8)
            printf("Marginalmente acima do peso");
        else if(imc<31.1)
            printf("Acima do peso ideal");
        else
            printf("Obeso");
    }else{
        if(imc<19.1)
            printf("Abaixo do peso");
        else if(imc<25.8)
            printf("No peso normal");
        else if(imc<27.3)
            printf("Marginalmente acima do peso");
        else if(imc<32.3)
            printf("Acima do peso ideal");
        else
            printf("Obeso");
    }
    printf(" %c ", sexo);
}

float imc (float peso, float altura){
    return ((peso)/(altura*altura));
}
int main(){
    float peso, altura, imcValor;
    char sexo;
    printf("Digite o peso e a altura ");
    scanf("%f %f", &peso, &altura);
    imcValor = imc(peso, altura);
    printf("Resultado: %f\n", imcValor);
    printf("Digite se você é homem ou mulher, use M ou F ");
    scanf("%s", &sexo);
    avaliar(sexo, imcValor);
    return 0;
}
