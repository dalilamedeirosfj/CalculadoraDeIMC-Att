// Inclusão das bibliotecas necessárias
#include "minunit-master/minunit.h"
#include "../src/calculadora.h"

// Teste 1: Avalia se o cálculo do IMC funciona corretamente com dados normais
MU_TEST(teste_imc_valores_normais) {
    double resultado_imc = calcular_imc(200, 2); // Função refatorada
    mu_assert_double_eq(50.0, resultado_imc); // O valor esperado do IMC é 50
}

// Teste 2: Verifica se o sistema lida corretamente com um peso igual a zero
MU_TEST(teste_peso_zero) {
    double resultado_imc = calcular_imc(0, 1.75);
    mu_assert_double_eq(-1, resultado_imc); // Retorna -1 para peso inválido
}

// Teste 3: Avalia o comportamento quando a altura inserida é negativa
MU_TEST(teste_altura_negativa) {
    double resultado_imc = calcular_imc(70, -1.75);
    mu_assert_double_eq(-1, resultado_imc); // Retorna -1 para altura inválida
}

// Teste 4: Verifica se o sistema lida com uma altura muito elevada
MU_TEST(teste_altura_exagerada) {
    double resultado_imc = calcular_imc(70, 175);
    mu_assert_double_eq(-1, resultado_imc); // Retorna -1 para altura inválida
}

// Conjunto de testes
MU_TEST_SUITE(suite_de_testes) {
    MU_RUN_TEST(teste_imc_valores_normais);
    MU_RUN_TEST(teste_peso_zero);
    MU_RUN_TEST(teste_altura_negativa);
    MU_RUN_TEST(teste_altura_exagerada);
}

// Função principal para rodar os testes
int main(int argc, char *argv[]) {
    MU_RUN_SUITE(suite_de_testes);
    MU_REPORT();
    return MU_EXIT_CODE;
}
