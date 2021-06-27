#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int questao;

    printf("\nEscolha a questão desejada (1 a 46): ");
    scanf("%i", &questao);

    switch(questao){
    case 1:
        questao01();
        break;
    case 2:
        questao02();
        break;
    case 3:
        questao03();
        break;
    case 4:
        printf("\nEm produção...\n");
        break;
    case 5:
        printf("\nEm produção...\n");
        break;
    case 6:
        printf("\nEm produção...\n");
        break;
    case 7:
        printf("\nEm produção...\n");
        break;
    case 8:
        printf("\nEm produção...\n");
        break;
    case 9:
        printf("\nEm produção...\n");
        break;
    case 10:
        printf("\nEm produção...\n");
        break;
    case 11:
        printf("\nEm produção...\n");
        break;
    case 12:
        printf("\nEm produção...\n");
        break;
    case 13:
        printf("\nEm produção...\n");
        break;
    case 14:
        printf("\nEm produção...\n");
        break;
    case 15:
        printf("\nEm produção...\n");
        break;
    case 16:
        printf("\nEm produção...\n");
        break;
    case 17:
        printf("\nEm produção...\n");
        break;
    case 18:
        printf("\nEm produção...\n");
        break;
    case 19:
        printf("\nEm produção...\n");
        break;
    case 20:
        printf("\nEm produção...\n");
        break;
    case 21:
        printf("\nEm produção...\n");
        break;
    case 22:
        printf("\nEm produção...\n");
        break;
    case 23:
        printf("\nEm produção...\n");
        break;
    case 24:
        printf("\nEm produção...\n");
        break;
    case 25:
        printf("\nEm produção...\n");
        break;
    case 26:
        printf("\nEm produção...\n");
        break;
    case 27:
        printf("\nEm produção...\n");
        break;
    case 28:
        printf("\nEm produção...\n");
        break;
    case 29:
        printf("\nEm produção...\n");
        break;
    case 30:
        printf("\nEm produção...\n");
        break;
    case 31:
        printf("\nEm produção...\n");
        break;
    case 32:
        printf("\nEm produção...\n");
        break;
    case 33:
        printf("\nEm produção...\n");
        break;
    case 34:
        printf("\nEm produção...\n");
        break;
    case 35:
        printf("\nEm produção...\n");
        break;
    case 36:
        printf("\nEm produção...\n");
        break;
    case 37:
        printf("\nEm produção...\n");
        break;
    case 38:
        printf("\nEm produção...\n");
        break;
    case 39:
        printf("\nEm produção...\n");
        break;
    case 40:
        printf("\nEm produção...\n");
        break;
    case 41:
        printf("\nEm produção...\n");
        break;
    case 42:
        printf("\nEm produção...\n");
        break;
    case 43:
        printf("\nEm produção...\n");
        break;
    case 44:
        printf("\nEm produção...\n");
        break;
    case 45:
        printf("\nEm produção...\n");
        break;
    case 46:
        printf("\nEm produção...\n");
        break;
    default:
        printf("\nPor favor escolha uma questão entre 1 e 46. Reinicie o programa.\n");

    }


}
