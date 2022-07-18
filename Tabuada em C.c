#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, escolha, resultado;
    
    printf("Tabuada Geral\n");
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &a);
    printf("Digite um numero inteiro: \n");
    scanf("%d", &b);
    
    printf("Digite:\n 1 = Soma\n 2 = Diminuir\n 3 = Multiplicar\n 4 = Dividir\n");
    scanf("%d", &escolha);
    
    switch (escolha){
        case 1:
        resultado = a + b;
        break;
        
        case 2:
        resultado = a - b;
        break;
        
        case 3:
        resultado = a * b;
        break;
        
        case 4:
        resultado = a / b;
        break;

        default:
        printf ("Opção inválida!");
    }
   
    printf("Resultado = %d\n",resultado);
    
}