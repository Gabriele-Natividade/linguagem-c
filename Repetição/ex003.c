#include <stdio.h>

int main() {
    int idade, i;
    char sexo;
    float velocidade;

    // Contadores e acumuladores
    int qtdHomens = 0, qtdMulheres = 0;
    int somaIdadeHomens = 0;
    int qtdHomensMultados = 0;

    // Controle da maior velocidade
    float maiorVelocidade = 0;
    int idadeMaiorVelocidade = 0;

    // Loop para ler dados dos 40 motoristas
    for (i = 1; i <= 40; i++) {
        printf("\n--- Motorista %d ---\n", i);

        // Entrada da idade
        printf("Digite a idade: ");
        scanf("%d", &idade);

        // Entrada do sexo
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo); // espaço antes de %c para ignorar '\n' do buffer

        // Entrada da velocidade
        printf("Digite a velocidade registrada: ");
        scanf("%f", &velocidade);

        // Contabilizar quantidade de homens e mulheres
        if (sexo == 'M' || sexo == 'm') {
            qtdHomens++;
            somaIdadeHomens += idade;
            qtdHomensMultados++;
        } else if (sexo == 'F' || sexo == 'f') {
            qtdMulheres++;
        }

        // Verificar maior velocidade
        if (velocidade > maiorVelocidade) {
            maiorVelocidade = velocidade;
            idadeMaiorVelocidade = idade;
        }
    }

    // Resultados finais
    printf("\n===== RESULTADOS =====\n");

    // a) Quem foi mais multado
    if (qtdHomens > qtdMulheres) {
        printf("Homens foram mais multados (%d contra %d mulheres).\n", qtdHomens, qtdMulheres);
    } else if (qtdMulheres > qtdHomens) {
        printf("Mulheres foram mais multadas (%d contra %d homens).\n", qtdMulheres, qtdHomens);
    } else {
        printf("Homens e mulheres foram multados igualmente (%d cada).\n", qtdHomens);
    }

    // b) Maior velocidade registrada
    printf("Maior velocidade registrada: %.2f km/h (Idade do infrator: %d anos).\n", maiorVelocidade, idadeMaiorVelocidade);

    // c) Idade média dos homens infratores
    if (qtdHomensMultados > 0) {
        float mediaIdadeHomens = (float)somaIdadeHomens / qtdHomensMultados;
        printf("Idade média dos homens infratores: %.2f anos.\n", mediaIdadeHomens);
    } else {
        printf("Nenhum homem foi multado, portanto não há média de idade.\n");
    }

    return 0;
}
