/*Fazer um programa que leia cinco números e informe quantos são menores que um outro
número Y , também lido via teclado.*/

void questao02(){
    float numero1, numero2, numero3, numero4, numero5, numeroY;
    int menorQueY;

    menorQueY = 0;

    printf("\nDigite o valor de Y: ");
    scanf("%f", &numeroY);

    printf("\nDigite o primeiro número; ");
    scanf("%f", &numero1);
    if(numero1 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o segundo número; ");
    scanf("%f", &numero2);
    if(numero2 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o terceiro número; ");
    scanf("%f", &numero3);
    if(numero3 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o quarto número; ");
    scanf("%f", &numero4);
    if(numero4 < numeroY) {
        menorQueY++;
    }

    printf("\nDigite o quinto número; ");
    scanf("%f", &numero5);
    if(numero5 < numeroY) {
        menorQueY++;
    }

    printf("\nDos números digitados %i é(são) menor(es) que %.2f.\n", menorQueY, numeroY);

    return 0;
}
