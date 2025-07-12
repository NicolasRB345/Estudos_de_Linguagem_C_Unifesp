/*Algoritimo que calculo o IMC do usuário baseado no seu peso e altura*/

#include <stdio.h>
#include <string.h>

int main()
{

    char nome[100], avaliacao[20];
    float peso, altura, imc;

    printf("\n");
    printf("============CALCULADOR DE IMC============");
    printf("\n");
    printf("\n");

    printf("-----------------------------------------\n");
    printf("|      IMC       |       Avaliacao      |");
    printf("\n-----------------------------------------\n");
    printf("|      <20       | Abaixo do normal     |\n");
    printf("|    [20,25]     | Normal               |\n");
    printf("|    [25,30]     | Sobrepeso            |\n");
    printf("|    [30,35]     | Obesidade leve       |\n");
    printf("|    [35,40]     | Obesidade moderada   |\n");
    printf("|     >=40       | Obesidade morbida    |\n");
    printf("-----------------------------------------");

    printf("\n");
    printf("\n");

    printf("Digite seu nome: ");
    fgets(nome, 100, stdin); // lê o nome completo com espaços
    printf("\n");

    printf("Certo, Agora me diga seu peso atual em Kg: ");
    scanf("%f", &peso);
    printf("\n");

    printf("Agora me diga sua altura em metros: ");
    scanf("%f", &altura);
    printf("\n");
    printf("\n");

    imc = peso/(altura * altura);

    if (imc < 20)
    {
        strcpy(avaliacao, "Abaixo do normal");
    }

    else if ( imc >= 20 && imc < 25)
    {
        strcpy(avaliacao, "Normal");
    }

    else if ( imc >= 25 && imc < 30)
    {
        strcpy(avaliacao, "Sobrepeso");
    }

    else if ( imc >= 30 && imc < 35)
    {
        strcpy(avaliacao, "Obesidade leve");
    }

    else if (imc >= 35 && imc < 40)
    {
        strcpy(avaliacao, "Obesidade moderada");
    }

    else
    {
        strcpy(avaliacao, "Obesidade morbida");
    }
    
    
    printf("====================================\n");
    printf("| Paciente: %s                     \n", nome);
    printf("|-----------------------------------\n");
    printf("| Altura: %.2fm                      \n", altura);
    printf("| Peso: %.2f Kg                      \n", peso);
    printf("| IMC Calculado: %.2f                 \n", imc);
    printf("|-----------------------------------\n");
    printf("| Avaliacao: %s                    \n", avaliacao);
    printf("====================================\n");
    
    printf("\n");

    return 0;
}