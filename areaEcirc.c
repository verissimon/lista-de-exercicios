#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

void main()
{
    float raio;
    printf("insira o raio: ");
    scanf("%f", &raio);
    float circ = 2*M_PI*raio;
    printf("a circunferencia eh: %.3f\n", circ);
    float area = M_PI*raio*raio;
    printf("a area eh: %.3f\n", area);
}
