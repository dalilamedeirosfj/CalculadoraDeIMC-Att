#include <stdio.h>
#include "calculadora.h"

int main() {
    double massa, estatura, indice;
    
    // Coleta os dados do usuário
    printf("Informe seu peso (kg): ");
    scanf("%lf", &massa);
    
    printf("Informe sua altura (m): ");
    scanf("%lf", &estatura);
    
    // Calcula o IMC
    indice = calcular_imc(massa, estatura);
    
    // Verifica se os dados inseridos são válidos
    if (indice != -1) {
        printf("Seu IMC é: %.2f\n", indice);
        
        // Classificação baseada no IMC
        if (indice < 18.5) {
            printf("Status: Abaixo do peso\n");
        } else if (indice >= 18.5 && indice < 25.0) {
            printf("Status: Peso normal\n");
        } else if (indice >= 25.0 && indice < 30.0) {
            printf("Status: Sobrepeso\n");
        } else {
            printf("Status: Obesidade\n");
        }
    } else {
        printf("Erro: valores fornecidos são inválidos.\n");
    }
    
    return 0;
}
