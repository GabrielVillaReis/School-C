#include <stdio.h>
float x;
double fatorial(int n);
int main(void){
    printf("Digite o numero que deseja o fatorail");
    scanf("%f",&x);
    int num = x;
    printf("Fatorial de %d = %.0lf",num,fatorial(num));
    return 0;
}

double fatorial(int n){
    double fat;
    if ( n <= 1 )
        return (1);
    else{
       return n * fatorial(n - 1);
    }
}
