/*Fazer um programa que leia quatro n�meros e informe quantos s�o maiores que um outro n�mero X,
tamb�m lido via teclado.
*/
void questao01(){
    float numero1, numero2, numero3, numero4, numeroX;
    int maiorQueX;

    printf("\nInforme o primeiro numero: ");
    scanf("%f", &numero1);
    printf("\nInforme o segundo numero: ");
    scanf("%f", &numero2);
    printf("\nInforme o terceiro numero: ");
    scanf("%f", &numero3);
    printf("\nInforme o quarto numero: ");
    scanf("%f", &numero4);
    printf("\nInforme o valor de X: ");
    scanf("%f", &numeroX);

    maiorQueX = 0;

    if(numero1 > numeroX){
        maiorQueX++;
    }

    if(numero2 > numeroX){
        maiorQueX++;
    }

    if(numero3 > numeroX){
        maiorQueX++;
    }

    if(numero4 > numeroX){
        maiorQueX++;
    }

    printf("\nDos n�meros digitados %i �(s�o) maior(es) que %.2f.\n", maiorQueX, numeroX);

    return 0;
}
