#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int valores;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);

    // Aloca memória para 'n' inteiros
    int *array = (int *)malloc(n * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (array == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    printf("Digite %d elementos:\n", n);

    size_t i;
    for (i = 0; i < n; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    //Calcula a soma dos valores
    int soma = 0;
    for (i = 0; i < n; i++)
    {
        soma += array[i];
    }
    
    //Exibir o resultado
    printf("A soma dos Elementos é: %d\n", soma);

    //Liberta memória alocada
    free(array);

    return 0;
}