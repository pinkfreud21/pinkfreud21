#include <stdio.h>



int main() {
    int massa = 0;
    float altura = 0;
    float imc = 0;

    printf("Digite sua massa: ");
    scanf("%d", &massa);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("Seu IMC é: %.2f", imc);

    return 0;
}