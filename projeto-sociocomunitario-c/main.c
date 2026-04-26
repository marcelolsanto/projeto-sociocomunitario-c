#include <stdio.h>
#include <locale.h>

int main() {
    // Configura o idioma para português para aceitar acentuação no terminal
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis (Estrutura Sequencial)
    float renda_familiar, renda_per_capita, distancia_km;
    int numero_membros;
    float salario_minimo = 1412.00; // Valor de referência atual

    // Entrada de Dados
    printf("==================================================\n");
    printf("   SISTEMA DE TRIAGEM - AUXÍLIO PERMANÊNCIA\n");
    printf("==================================================\n\n");

    printf("Informe a renda bruta total da família (R$): ");
    scanf("%f", &renda_familiar);

    printf("Informe o número de pessoas que vivem na residência: ");
    scanf("%d", &numero_membros);

    printf("Informe a distância entre sua casa e o campus (em KM): ");
    scanf("%f", &distancia_km);

    // Processamento de Dados (Estrutura Sequencial)
    renda_per_capita = renda_familiar / numero_membros;

    printf("\n--------------------------------------------------\n");
    printf("RESUMO DA ANÁLISE:\n");
    printf("Renda per capita calculada: R$ %.2f\n", renda_per_capita);

    // Saída de Dados com Lógica Condicional
    // Critério 1: Renda per capita de até 1.5 salário mínimo
    if (renda_per_capita <= (1.5 * salario_minimo)) {

        // Critério 2: Verifica a distância para ver se precisa de transporte além da alimentação
        if (distancia_km >= 15.0) {
            printf("STATUS: ELEGÍVEL PARA AUXÍLIO INTEGRAL.\n");
            printf("Justificativa: Renda dentro do limite e aluno mora em região distante (%.1f km).\n", distancia_km);
            printf("Benefícios sugeridos: Auxílio-Alimentação e Auxílio-Transporte.\n");
        } else {
            printf("STATUS: ELEGÍVEL PARA AUXÍLIO PARCIAL.\n");
            printf("Justificativa: Renda dentro do limite, mas aluno mora próximo ao campus (%.1f km).\n", distancia_km);
            printf("Benefícios sugeridos: Apenas Auxílio-Alimentação.\n");
        }

    } else {
        // Se a renda for maior que 1.5 salário mínimo
        printf("STATUS: NÃO ELEGÍVEL NA TRIAGEM AUTOMÁTICA.\n");
        printf("Justificativa: A renda per capita ultrapassa o teto de 1,5 salário mínimo estabelecido pelo edital socioeconômico.\n");
    }

    printf("--------------------------------------------------\n");
    printf("Encaminhe este resultado ao Departamento de Assistência Social.\n");

    return 0;
}