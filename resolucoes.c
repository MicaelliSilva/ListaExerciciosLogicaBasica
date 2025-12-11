//DECLARAÇÃO DE VARIÁVEIS:

//Exercício 1:

#include <stdio.h>

int main()
{
    float numFloat = 10.00;
    int numInt = 20;
    char letra = 'M';
    
    printf("%d %.2f %c", numInt, numFloat, letra);

    return 0;
}

//Exercicio 2:

#include <stdio.h>

int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
      printf("Voce tem %d anos", idade);
    

    return 0;
}

//ESTRUTURAS CONDICIONAIS (IF/ELSE)

//Exercicio 3:

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    
    printf("Digite um numero inteiro:");
    scanf("%d", &num1);
    
     printf("Digite outro numero inteiro:");
    scanf("%d", &num2);
    
    
    if(num1 > num2){
        printf("Maior numero é: %d", num1);
    }
    else{
        printf("Maior numero é: %d", num2);
    }
    

    return 0;
}

//Exercicio 4:

#include <stdio.h>

int main()
{
    float nota;
    
    printf("Digite a nota do aluno:");
    scanf("%f", &nota);
    
    
    if(nota >= 6.0){
        printf("APROVADO");
    }
    else{
        printf("REPROVADO");
    }
    

    return 0;
}

//Exercicio 5:

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    
    if (num % 2 == 0){
        printf("PAR");
    }
    else{
        printf("IMPAR");
    }
    

    return 0;
}

//LAÇOS DE REPETIÇÃO (FOR / WHILE)

//Exercicio 6:

#include <stdio.h>

int main()
{
    
    for(int i = 1; i < 11; i++){
        printf("\n%d", i);
    }
    
    return 0;
}

//Exercicio 7:

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d" , &num); 
    
    for(int i = 1; i <= 10; i++){
        i * num;
        printf("\n%d", i * num);
    }
    
    return 0;
}

//Exercicio 8:

#include <stdio.h>

int main()
{
    int count = 1;
    int soma = 0;
    
    while(count <= 100){
        soma += count;
        count++;
    }
    
    printf("%d",soma);

    return 0;
}

//Exercicio 9:

#include <stdio.h>

int main()
{
    int num;
    int mult = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    for(int i = num; i > 0; i--){
        mult *= i;
    }
    printf("%d",mult);

    return 0;
}

//Exercicio 10:

#include <stdio.h>

int main()
{
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    while(num != 0){
    printf("Digite novamente um numero: ");
    scanf("%d", &num);
    }
    
    return 0;
}

//ESTRUTURA SWITCH:

//Exercicio11:

#include <stdio.h>

int main()
{
    int opcao;
    int n1,n2;
    int soma, subtracao, multiplicacao, divisao;
    printf("Opção 1: Soma ");
    printf("\nOpção 2: Subtração ");
    printf("\nOpção 3: Multiplicação ");
    printf("\nOpção 4: Divisão \n");
    
    printf("\nDigite uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        
            printf("Digite o primeiro numero da soma: ");
            scanf("%d" , &n1);
            
            printf("Digite o segundo numero da soma: ");
            scanf("%d" , &n2);
            
            soma = n1 + n2;
            
            printf("Soma = %d", soma);
            
        break;
        
        case 2:
        
            printf("Digite o primeiro numero da subtração: ");
            scanf("%d" , &n1);
            
            printf("Digite o segundo numero da subtração: ");
            scanf("%d" , &n2);
            
            subtracao = n1 - n2;
            
            printf("Subtracao = %d", subtracao);
            
            break;
            
        case 3:
            printf("Digite o primeiro numero da multiplicação: ");
            scanf("%d" , &n1);
            
            printf("Digite o segundo numero da multiplicação: ");
            scanf("%d" , &n2);
            
            multiplicacao = n1 * n2;
            
            printf("Multiplicacao = %d", multiplicacao);
            
            break;
            
        case 4:
            printf("Digite o primeiro numero da divisão: ");
            scanf("%d" , &n1);
            
            printf("Digite o segundo numero da divisão: ");
            scanf("%d" , &n2);
            
            divisao = n1 / n2;
            
            printf("Divisao = %d", divisao);
            
            break;
        
    }
    return 0;
}


//Exercicio12:

#include <stdio.h>

int main()
{
   
    int num;
    
    printf("\nDigite um numero de 1 a 7: ");
    scanf("%d", &num);
    
    switch (num){
        case 1:
        
            printf("Domingo ");
            
        break;
        
        case 2:
        
            printf("Segunda Feira ");
             
            break;
        case 3:
            printf("Terça Feira ");
            
            break;
            
        case 4:
            printf("Quarta Feira ");
            
            break;
        case 5:
            printf("Quinta Feira ");
            
            break;
            
        case 6:
            printf("Sexta Feira ");
            
            break;
            
        case 7:
        printf("Sabado ");
        
        break;
    }
    return 0;
}

//Exercicio 13:

#include <stdio.h>

int main()
{
   
    int num;
    
    printf("\nDigite um numero de 1 a 12: ");
    scanf("%d", &num);
    
    switch (num){
        case 1:
        
            printf("Janeiro ");
            
        break;
        
        case 2:
        
            printf("Fevereiro ");
             
            break;
        case 3:
            printf("Março ");
            
            break;
            
        case 4:
            printf("Abril ");
            
            break;
        case 5:
            printf("Maio ");
            
            break;
            
        case 6:
            printf("Junho ");
            
            break;
            
        case 7:
        printf("Julho ");
        
        break;
        
        case 8:
        printf("Agosto ");
        
        break;
        
        case 9:
        printf("Setembro ");
        
        break;
        
        case 10:
        printf("Outubro ");
        
        break;
        
        case 11:
        printf("Novembro ");
        
        break;
        
        case 12:
        printf("Dezembro ");
        
        break;
    }
    return 0;
}

//DESAFIOS(MISTURANDO CONCEITOS)

//Exercicio 14:

#include <stdio.h>

int main()
{
   
    int idade[5];
    
    printf("Digite as idades: \n");
    
    for(int i = 0; i < 5; i++){
        scanf("%d" , &idade[i]);
    }
    
    float media = 0.0;
    int soma = 0;
    
    for(int i = 0; i < 5; i++){
        
        soma += idade[i];
    }
    
     media = soma / 5.0;
     
    printf("Media das idades = %.2f ", media);
    
    return 0;
}

//Exercicio 15:

#include <stdio.h>

int main()
{
   
    int num;
    int divisores = 0;
    printf("Digite um numero inteiro:");
    scanf("%d" ,&num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            divisores++;
        }
    }

    if (divisores == 2) {
        printf("O numero é primo.\n");
    } else {
        printf("O numero não é primo.\n");
    }

    return 0;
}

//Exercicio 16:

#include <stdio.h>

int main() {
    int valor, n100, n50, n20, n10, n5, n2, resto;

    printf("Digite o valor a sacar: ");
    scanf("%d", &valor);

    if (valor < 2) {
        printf("Valor invalido. O valor minimo para saque é 2 reais.\n");
        return 0;
    }

    n100 = valor / 100;
    resto = valor % 100;

    n50 = resto / 50;
    resto = resto % 50;

    n20 = resto / 20;
    resto = resto % 20;

    n10 = resto / 10;
    resto = resto % 10;

    n5 = resto / 5;
    resto = resto % 5;

    n2 = resto / 2;
    resto = resto % 2;

    printf("\nNotas entregues:\n");
    if (n100){
        
        printf("%d nota(s) de 100\n", n100);
    }
    if (n50){
        
    printf("%d nota(s) de 50\n", n50);
    }
    if (n20){
        
       printf("%d nota(s) de 20\n", n20); 
    } 
    if (n10){
        
    printf("%d nota(s) de 10\n", n10);
    }
    if (n5){
        
    printf("%d nota(s) de 5\n", n5);
    }
    if (n2){
        
    printf("%d nota(s) de 2\n", n2);
    }
    if (resto != 0){
        
        printf("\nValor restante de R$ %d não pode ser sacado com as notas disponiveis.\n", resto);
    }
    return 0;
}

//Exercicio17:

#include <stdio.h>

int main() {
    int senha;
    
    printf("Digite a senha: ");
    scanf("%d", &senha);
    
    while(senha != 1234){
        printf("\nSenha incorreta!!");
        printf("\nDigite Novamente: ");
    scanf("%d", &senha);
    }
    return 0;
}
