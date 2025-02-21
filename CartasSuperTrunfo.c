// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    #include <stdio.h>
    #include <locale.h>
    int main() {
    
        setlocale(LC_ALL,"Portuguese_Brazil");
    
        char codigoCidade [5];
        char nomeCidade [20];
        float populacao;
        int area;
        float pib;
        int  numeroPontosTuristicos;
    
        printf("SUPER TRUNFO - CIDADES\n");
        printf("Cadastre suas cartas idenficadas pelas letras de A a H e quatro cidades numeradas de 1 a 4!\n");
        printf("Digite o Código da Cidade:\n");
        scanf("%s", &codigoCidade);
        printf("Digite o Nome da Cidade:\n");
        scanf("%s", &nomeCidade);
        printf("Digite a População:\n");
        scanf("%f", &populacao);
        printf("Digite a Área:\n");
        scanf("%d", &area);
        printf("Digite o Pib:\n");
        scanf("%f", &pib);
        printf("Digite o número de pontos turísticos:\n");
        scanf("%d", &numeroPontosTuristicos);
        printf("Código da Cidade é: %s\n", codigoCidade);
        printf("Nome da Cidade: %s\n", nomeCidade);
        printf("População é: %.3f\n", populacao);
        printf("Área é: %d Km Quadrados\n", area);
        printf("Pib é: %.3f\n", pib);
        printf("Número de Pontos Turísticos e: %d\n", numeroPontosTuristicos);
    
    return 0;

    }
