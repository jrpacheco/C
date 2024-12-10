#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    // Aloca memória para 'n' inteiros
    int *array = (int *)malloc(n * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (array == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    // Inicializa os elementos do array
    int i;
    for (i = 0; i < n; i++) {
        array[i] = (i + 1) * 10; // Atribuindo valores simples para teste
    }

    // Exibe informações detalhadas
    printf("\nEndereco armazenado em array: %p\n", (void *)array);
    printf("Valor do primeiro elemento (*array): %d\n", *array);

    printf("\nDetalhes dos elementos do array:\n");
    for (i = 0; i < n; i++) {
        printf("Elemento %d: Valor = %d, Endereco = %p\n", i, array[i], (void *)&array[i]);
    }

    // Libera a memória alocada
    free(array);

    return 0;
}