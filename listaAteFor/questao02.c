/*Fazer um programa que leia cinco n�meros e informe quantos s�o menores que um outro
n�mero Y , tamb�m lido via teclado.*/

void questao02(){
    float numero1, numero2, numero3, numero4, numero5, numeroY;
    int menorQueY;

    menorQueY = 0;

    printf("\nDigite o valor de Y: ");
    scanf("%f", &numeroY);

    printf("\nDigite o primeiro n�mero; ");
    scanf("%f", &numero1);
    if(numero1 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o segundo n�mero; ");
    scanf("%f", &numero2);
    if(numero2 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o terceiro n�mero; ");
    scanf("%f", &numero3);
    if(numero3 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o quarto n�mero; ");
    scanf("%f", &numero4);
    if(numero4 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o quinto n�mero; ");
    scanf("%f", &numero5);
    if(numero5 < numeroY) {
        menorQueY++;
    }

    printf("\nDos n�meros digitados %i �(s�o) menor(es) que %.2f.\n", menorQueY, numeroY);

    return 0;
}
