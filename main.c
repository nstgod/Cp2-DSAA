#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Nome: Nelson Troccoli Santos Neto
// RM: 562815
// Turma: 1CCPG
int main() {
    char opcoes;
    printf("===== MENU DE EXERCiCIOS =====\n");
    printf("1 - Sequencia de Fibonacci;\n");
    printf("2 - Fatoriais;\n");
    printf("3 - Verificar Palindromo;\n");
    printf("4 - Verificar Substring.\n");
    printf("Escolha uma das opcoes: ");
    scanf("%c", &opcoes);

    switch (opcoes) {
        case '1': {
            int num, i;
            printf("Digite um numero de 1 a 50: ");
            scanf("%d", &num);
            if (num < 1 || num > 50) {
                printf("Numero fora do intervalo\n");
                return 1;
            }

            long long Fibonacci[num];

            if (num >= 1) {
                Fibonacci[0] = 0;
            } 

            if (num >= 2) {
                Fibonacci[1] = 1;
            }

            for (i = 2; i < num; i++) {
                Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
            }

            printf("Sequencia de Fibonacci:\n");
            if (num >= 1) {
                printf("%lld", Fibonacci[0]);
            }   
            
            for (i = 1; i < num; i++) {
            printf(", %lld", Fibonacci[i]);
                }
            
            return 0;
            break;
        }
        
        case '2': {
            int i, num;
        printf("Digite um numero inteiro (1 a 20): ");
        scanf("%d", &num);
    
        if (num <1 || num > 20) {
        printf("Numero fora do intervalo\n");
        return 1;
        }
    
        long long fatoriais[num];

        long long fatorialAtual = 1;
        for (i = 0; i < num; i++) {
        fatorialAtual *= (i + 1);
        fatoriais[i] = fatorialAtual;
        }
    
        printf("\nFatoriais:\n");
        for (i = 0; i < num; i++) {
            printf("%d! = %lld\n", (i + 1), fatoriais[i]);
        }
        
        return 0;
        break;

        }
        
        case '3': {
        char palavra [101];
        int tamanho, i;
        printf("Digite uma palavra (sem espacos, ate 100 caracteres): ");
        scanf("%s", palavra);
    
        tamanho = strlen(palavra);
    
        for (i = 0; i < tamanho / 2; i++) {
            if (palavra[i] != palavra[tamanho - i - 1]) {
                printf("A palavra nao e um palindromo\n");
                return 0;
            }
        }
    
        printf("A palavra e um palindromo\n");
        
        return 0;
        break;
        }
        
        case '4': {
            char string1 [51];
            char string2 [51];
            int i, j, tamanho1, tamanho2;
            printf("Digite a primeira string: ");
            scanf("%s", string1);
            printf("Digite a segunda string: ");
            scanf("%s", string2);

            tamanho1 = strlen(string1);
            tamanho2 = strlen(string2);

            for (i = 0; i <= tamanho1 - tamanho2; i++) {
                for (j = 0; j < tamanho2; j++) {
                    if (string1[i + j] != string2[j]) {
                    }
                }
                if (j == tamanho2) {
                    printf("A segunda string e uma substring da primeira\n");
                    break;
                }
            }
            
            if (j != tamanho2) {
                printf("A segunda string nao e uma substring da primeira\n");
            }
            return 0;
            break;
        }

    }
 
system("pause");
return 0;
}
