// Declaração da função para calcular o IMC
double calcular_imc(double peso, double altura);

// Implementação da função que calcula o IMC
double calcular_imc(double peso, double altura) {
    // Verifica se os parâmetros são válidos
    if (peso <= 0 || peso > 1000) {
        return -1;
    }
    
    if (altura <= 0 || altura >= 3.5) {
        return -1;
    }
    
    // Retorna o valor do IMC
    return peso / (altura * altura);
}
