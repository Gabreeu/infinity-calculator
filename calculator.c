#include<stdio.h>
#include<math.h>

double mult(double n1, double n2);
double div(double n1, double n2);   //aqui estamos declarando as funçoes para abaixo mostrarmos ao compilador o que elas fazem, 
double soma(double n1, double n2);  //isso ajuda a manter o codigo organizado e limpo
double sub(double n1, double n2);
double imc(double n1, double n2);
double pot(double n1, double n2, double r);
double raiz(double n1, double n2, double r);


int main(){
    char op, op2;
    double v1, v2, r;
    r=0;

    printf("escreva a operacao:\n");
    printf("+  adicao\n");
    printf("-  subtacao\n");
    printf("*  multiplicacao\n");
    printf("/  divisao\n");
    printf("o  outros\n");
    scanf(" %c", &op);
    if (op=='o'){
      printf("I  Indice de massa corporea\n");
      printf("P  Potenciacao de um numero\n");
      printf("R  Raiz quadrada de um numero\n");
      scanf(" %c",&op2); 
      switch (op2) {
            case 'I':
                printf("Digite o peso: ");
                scanf(" %lf", &v1);
                printf("Digite a altura: ");         
                scanf(" %lf", &v2);
                break;
            case 'P':
                printf("Base: ");
                scanf(" %lf",&v1);
                printf("Expoente: ");
                scanf(" %lf",&v2);
                break;
            case 'R':
                printf("digite o valor: ");
                scanf(" %lf",&v1);
                printf("digite a potencia da raiz: ");
                scanf(" %lf",&v2);
            //se for adicionar mais operações adicione aqui
                break;
             default:
                printf("Opcao invalida para 'outros'.\n");
                return 1;  // Encerra o programa se a opção for inválida
      }  
    }else{
        printf("Digite o valor 1: ");
	    scanf("%lf",&v1);
	    printf("Digite o valor 2: ");          
	    scanf("%lf",&v2);
    }
    switch (op){
        case '+':
            printf("Soma= %.2f", soma(v1,v2));
            break;
        case '-':
            printf("Subtracao= %.2f", sub(v1,v2));
            break;
        case '*':
            printf("Mult= %.2f", mult(v1,v2));
            break;
        case '/':
            printf("Div= %.2f", div(v1,v2));
            break;
        case 'o':
            switch (op2){
                case 'I':
                    printf("IMC=%.2f", imc(v1,v2));
                    break;
                case 'P':
                    printf("%.2f na potencia %.2f: %.2f", v1,v2,pot(v1,v2,r));
                    break;
                case 'R':
                    printf("raiz na potencia de %.2f de %2.f: %.2f", v1,v2,pot(v2,v1,r));
                    break;
                default:
                    printf("valor invalido.\n");
                    break;

            }
        break;//impede que o case(op) exiba a mensagem de valor invalido quando nao era p aparecer
        default:
            printf("valor invalido.\n");
        break;
    }

    return 0;
}

double mult(double n1, double n2){return n1*n2;}
double div(double n1, double n2){return n1/n2;}
double soma(double n1, double n2){return n1+n2;}
double sub(double n1, double n2){return n1-n2;}
double imc(double n1, double n2){return n1/(n2*n2);}
double pot(double n1, double n2, double r){r=pow(n1,n2); return r;}
double raiz(double n1, double n2, double r){r=pow(n1,1.0/n2); return r;}