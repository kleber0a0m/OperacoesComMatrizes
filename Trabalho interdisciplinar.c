#include <stdio.h>
#include <locale.h>
#include <ctype.h>
 
void exibirMatriz(int n, int m, float matriz[n][m])
{
    int l, c;
    printf("\n\n");
    for (l = 0; l < n; l++)
    {
        for (c = 0; c < m; c++)
        {
            printf("%.1f  ", matriz[l][c]);
        }
 
        printf("\n");
    }
}
 
void soma(int n1, int m1, float matriz1[n1][m1], float matriz2[n1][m1])
{
    int l, c;
    
    printf("\n----------------\n\n");
    
    exibirMatriz(n1,m1,matriz1);

    printf("\n+\n\n");
    
    exibirMatriz(n1,m1,matriz2);

    printf("\n=\n\n");
 
    for (l = 0; l < n1; l++)
    {
        for (c = 0; c < m1; c++)
        {
            printf("%.1f  ", matriz2[l][c] + matriz1[l][c]);
        }
 
        printf("\n");
    }
 
    printf("\n");
 
}
 
void subtracao(int n1, int m1, float matriz1[n1][m1], float matriz2[n1][m1])
{
    int l, c;
    printf("\n----------------\n\n");
 
	exibirMatriz(n1,m1,matriz1);
 
    printf("\n-\n\n");
 
    exibirMatriz(n1,m1,matriz2);
 
    printf("\n=\n\n");
 
    for (l = 0; l < n1; l++)
    {
        for (c = 0; c < m1; c++)
        {
            printf("%.1f  ", matriz1[l][c] - matriz2[l][c]);
        }
 
        printf("\n");
    }
 
    printf("\n");
 
}
 
void multiplicacao(int n1, int m1, int n2, int m2, float matriz1[n1][m1], float matriz2[n2][m2])
{
    int l, c, x;
 
    float matriz3[n1][m2], aux = 0;
    printf("\n----------------\n\n");
    
    exibirMatriz(n1,m1,matriz1);
 
    printf("\nx\n\n");

    exibirMatriz(n2,m2,matriz2);
    
    printf("\n=\n\n");
 
    for (l = 0; l < n1; l++)
    {
        for (c = 0; c < m2; c++)
        {
            matriz3[l][c] = 0;
            for (x = 0; x < n2; x++)
            {
                aux += matriz1[l][x] *matriz2[x][c];
            }
 
            matriz3[l][c] = aux;
            aux = 0;
        }
    }
 
    exibirMatriz(n1,m2,matriz3);
    
    printf("\n\n");
 
}
 
void multNum(int n1, int m1, float matriz[n1][m1], float numero)
{
    int l, c;
 
    printf("\n----------------\n\n");
 
	exibirMatriz(n1,m1,matriz);
 
    printf("\nx\n\n%.1f", numero);
 
    printf("\n\n=\n\n");
 
    for (l = 0; l < n1; l++)
    {
        for (c = 0; c < m1; c++)
        {
            printf("%.1f  ", matriz[l][c] *numero);
        }
 
        printf("\n");
    }
 
    printf("\n");
 
}
 
int main()
{
    setlocale(LC_ALL, "Portuguese");
 
    char opcao[1];
    int n1 = 0, m1 = 0, n2 = 0, m2 = 0, l = 0, c = 0;
    float numero;
 
    printf("Escolha qual operação vc deseja fazer:\n\n");
    printf("A - Soma de duas matrizes.\n");
    printf("B - Subtração de duas matrizes.\n");
    printf("C - Multiplicação de duas matrizes\n");
    printf("D - Multiplicação de uma matriz por um número.\n\n");
    scanf("%c", &opcao[0]);
    opcao[0] = toupper(opcao[0]);
 
    if (opcao[0] == 'A')
    {
        do {
            if (n2 != n1 || m2 != m1)
            {
                printf("\n\n\nAs matrizes devem possuir a mesma ordem para soma ser realizada.\n\n\n");
                do {
                    if (n1 >= 101 || m1 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                } while (n1 >= 101 || m1 >= 101);
 
                printf("\n");
 
                do {
                    if (n1 >= 101 || m2 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                } while (n2 >= 101 || m2 >= 101);
            }
            else
            {
                do {
                    if (n1 >= 101 || m1 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                } while (n1 >= 101 || m1 >= 101);
 
                printf("\n");
 
                do {
                    if (n1 >= 101 || m2 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                } while (n2 >= 101 || m2 >= 101);
            }
        } while (n2 != n1 || m2 != m1);
 
        float matriz1[n1][m1], matriz2[n2][m2];
 
        printf("\n\nDigite os valores da matriz 1.\n\n");
 
        for (l = 0; l < n1; l++)
        {
            for (c = 0; c < m1; c++)
            {
                scanf("%f", &matriz1[l][c]);
            }
        }
 
        exibirMatriz(n1, m1, matriz1);
 
        printf("\n\nDigite os valores da matriz 2.\n\n");
 
        for (l = 0; l < n2; l++)
        {
            for (c = 0; c < m2; c++)
            {
                scanf("%f", &matriz2[l][c]);
            }
        }
 
        exibirMatriz(n2, m2, matriz2);
        printf("\n");
        soma(n1, m1, matriz1, matriz2);
    }
    else if (opcao[0] == 'B')
    {
        do {
            if (n2 != n1 || m2 != m1)
            {
                printf("\n\n\nAs matrizes devem possuir a mesma ordem para subtração ser realizada.\n\n\n");
                do {
                    if (n1 >= 101 || m1 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                } while (n1 >= 101 || m1 >= 101);
 
                printf("\n");
 
                do {
                    if (n1 >= 101 || m2 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                } while (n2 >= 101 || m2 >= 101);
            }
            else
            {
                do {
                    if (n1 >= 101 || m1 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                } while (n1 >= 101 || m1 >= 101);
 
                printf("\n");
 
                do {
                    if (n1 >= 101 || m2 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                } while (n2 >= 101 || m2 >= 101);
            }
        } while (n2 != n1 || m2 != m1);
 
        float matriz1[n1][m1], matriz2[n2][m2];
 
        printf("\n\nDigite os valores da matriz 1.\n\n");
 
        for (l = 0; l < n1; l++)
        {
            for (c = 0; c < m1; c++)
            {
                scanf("%f", &matriz1[l][c]);
            }
        }
 
        exibirMatriz(n1, m1, matriz1);
 
        printf("\n\nDigite os valores da matriz 2.\n\n");
 
        for (l = 0; l < n2; l++)
        {
            for (c = 0; c < m2; c++)
            {
                scanf("%f", &matriz2[l][c]);
            }
        }
 
        exibirMatriz(n2, m2, matriz2);
        printf("\n");
        subtracao(n1, m1, matriz1, matriz2);
    }
    else if (opcao[0] == 'C')
    {
        do {
            if (n1 != m2)
            {
                printf("\n\n\nO número de colunas da matriz 1 deve ser igual ao número de linhas da matriz 2.\n\n\n");
                do {
                    if (n1 >= 101 || m1 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                } while (n1 >= 101 || m1 >= 101);
 
                printf("\n");
 
                do {
                    if (n1 >= 101 || m2 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                } while (n2 >= 101 || m2 >= 101);
            }
            else
            {
                do {
                    if (n1 >= 101 || m1 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 1:\n");
                        scanf("%d", &n1);
                        printf("\nDigite o número de colunas da matriz 1:\n");
                        scanf("%d", &m1);
                    }
                } while (n1 >= 101 || m1 >= 101);
 
                printf("\n");
 
                do {
                    if (n1 >= 101 || m2 >= 101)
                    {
                        printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                    else
                    {
                        printf("\nDigite o número de linhas da matriz 2:\n");
                        scanf("%d", &n2);
                        printf("\nDigite o número de colunas da matriz 2:\n");
                        scanf("%d", &m2);
                    }
                } while (n2 >= 101 || m2 >= 101);
            }
        } while (m1 != n2);
 
        float matriz1[n1][m1], matriz2[n2][m2];
 
        printf("\n\nDigite os valores da matriz 1.\n\n");
 
        for (l = 0; l < n1; l++)
        {
            for (c = 0; c < m1; c++)
            {
                scanf("%f", &matriz1[l][c]);
            }
        }
 
        exibirMatriz(n1, m1, matriz1);
 
        printf("\n\nDigite os valores da matriz 2.\n\n");
 
        for (l = 0; l < n2; l++)
        {
            for (c = 0; c < m2; c++)
            {
                scanf("%f", &matriz2[l][c]);
            }
        }
 
        exibirMatriz(n2, m2, matriz2);
 
        printf("\n");
 
        multiplicacao(n1, m1, n2, m2, matriz1, matriz2);
    }
    else if (opcao[0] == 'D')
    {
        do {
            if (n1 >= 101 || m1 >= 101)
            {
                printf("\nO tamanho máximo é 100! \nTente outra vez\n\n");
                printf("\nDigite o número de linhas da matriz:\n");
                scanf("%d", &n1);
                printf("\nDigite o número de colunas da matriz:\n");
                scanf("%d", &m1);
 
            }
            else
            {
                printf("\nDigite o número de linhas da matriz:\n");
                scanf("%d", &n1);
                printf("\nDigite o número de colunas da matriz:\n");
                scanf("%d", &m1);
            }
        } while (n1 >= 101 || m1 >= 101);
 
        float matriz1[n1][m1], matriz2[n2][m2];
 
        printf("\n\nDigite os valores da matriz.\n\n");
 
        for (l = 0; l < n1; l++)
        {
            for (c = 0; c < m1; c++)
            {
                scanf("%f", &matriz1[l][c]);
            }
        }
 
        printf("\n\nDigite o número que vai multiplicar todos o elemetos da matriz:\n");
        scanf("%f", &numero);
        exibirMatriz(n1, m1, matriz1);
        multNum(n1, m1, matriz1, numero);
 
    }
 
 

    return 0;
}


 /*
 
 Matriz é uma tabela organizada em linhas e colunas no formato m x n, onde m representa o número de linhas (horizontal) e n o número de colunas (vertical). A função das matrizes é relacionar dados numéricos. Por isso, o conceito de matriz não é só importante na Matemática, mas também em outras áreas já que as matrizes têm diversas aplicações .

Como este conteúdo foi estudado nas disciplinas de Programação e Cálculo, agora vamos desenvolver uma atividade interdisciplinar. Vocês deverão desenvolver programas em C ou C# que seja capaz de realizar 3 operações básicas com matrizes: soma, subtração e multiplicação. 

•	Implementar um programa que receba ou gere duas matrizes de dimensão informado pelo usuário (limite 100x100) e dê a opção de realizar uma das 3 operações, porém lembre-se que deve verificar as dimensões antes para ver se é possível.

•	Após a implementação do programa, você deverá gerar um relatório tutorial, explicando a lógica implementada e demonstrando o programa em execução (prints da tela). Cite aplicações práticas das operações realizadas com as matrizes. 

•	Coloque os códigos e o relatório em uma pasta no Google Drive e envie seu link compartilhado.

*/
