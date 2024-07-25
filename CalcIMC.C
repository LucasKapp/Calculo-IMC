#include <stdio.h>

float calcularIMC (float peso, float altura); {
    return peso / (altura * altura);

}

int main () {
    float peso, altura;

printf ("informe o peso: ")
scanf ("%f" &peso);

printf ("informe a altura: ")
scanf ("%f" &altura);

if (altura <= 0) {
    printf("informe um valor valido!!!")
    return 1

}

float imc = calcularIMC(peso, altura);
printf("seu IMC é: ", imc);

if (imc <18.5) {
    printf("abaixo do peso./n")
} else if (imc <25) {
    printf("peso normal./n)
} else if (imc <30) {
    printf("Acima do peso./n")
} else {
    printf ("Obesidade./n")

}

return 0;

}
