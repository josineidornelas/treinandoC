/*Fazer um programa que leia 4 n�meros e informe se a soma dos 2 primeiros � maior, menor ou igual � soma dos 2 �ltimos.*/

void questao03(){
    float numero1, numero2, numero3, numero4, somaDoisPrimeiros, somaDoisUltimos;

    printf("\nInforme o primeiro n�mero: ");
    scanf("%f", &numero1);
    printf("\nInforme o segundo n�mero: ");
    scanf("%f", &numero2);
    printf("\nInforme o terceiro n�mero: ");
    scanf("%f", &numero3);
    printf("\nInforme o quarto n�mero: ");
    scanf("%f", &numero4);

    somaDoisPrimeiros = numero1 + numero2;
    somaDoisUltimos = numero3 + numero4;

    if (somaDoisPrimeiros == somaDoisUltimos){
        printf("\nA soma dos dois primeiros n�meros � igual a soma dos sois �ltimos.\n");
    } else{
        if(somaDoisPrimeiros > somaDoisUltimos){
            printf("\nA soma dos dois primeiros n�meros � maior que a soma dos dois �ltimos.\n");
        } else {
            printf("\nA soma dos dois primeiros n�meros � menor que a soma dos dois �ltimos.\n");
        }

    }

    return 0;
}
