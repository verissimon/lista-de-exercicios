#include <stdio.h>
#include <math.h>
// Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
// triplo, o seu quadrado, o seu cubo e a sua raiz quadrada
void main(){
    float numero;
    printf("insira o numero: ");
    scanf("%f", &numero);
    float dobro = numero*2;
    float triplo = numero*3;
    float quadrado = numero*numero;
    float cubo = quadrado*numero;
    float raizquad = sqrt(numero);
    printf("o dobro eh: %.2f\n", dobro);
    printf("o triplo eh: %.2f\n", triplo);
    printf("o quadrado eh: %.2f\n", quadrado);
    printf("o cubo eh: %.2f\n", cubo);
    printf("a raiz quadrada eh: %.2f\n", raizquad);

}
