/*Fazer um programa que leia 4 números e informe se a soma dos 2 primeiros é maior, menor ou igual à soma dos 2 últimos.*/

void questao03(){
    float numero1, numero2, numero3, numero4, somaDoisPrimeiros, somaDoisUltimos;

    printf("\nInforme o primeiro número: ");
    scanf("%f", &numero1);
    printf("\nInforme o segundo número: ");
    scanf("%f", &numero2);
    printf("\nInforme o terceiro número: ");
    scanf("%f", &numero3);
    printf("\nInforme o quarto número: ");
    scanf("%f", &numero4);

    somaDoisPrimeiros = numero1 + numero2;
    somaDoisUltimos = numero3 + numero4;

    if (somaDoisPrimeiros == somaDoisUltimos){
        printf("\nA soma dos dois primeiros números é igual a soma dos sois últimos.\n");
    } else{
        if(somaDoisPrimeiros > somaDoisUltimos){
            printf("\nA soma dos dois primeiros números é maior que a soma dos dois últimos.\n");
        } else {
            printf("\nA soma dos dois primeiros números é menor que a soma dos dois últimos.\n");
        }

    }

    return 0;
}
