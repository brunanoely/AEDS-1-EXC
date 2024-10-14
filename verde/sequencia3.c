#include <stdio.h>

double fat(double a){
    if (a < 2)
        return 1;
    return a * fat(a - 1);
}

double somatorio(double n){
    double soma = 1;
    for(int i = 1; i <= n; i++){
            soma += 1.0/fat(i);
    }
    return soma;
}

int main(){
 double a;
 scanf("%lf",&a);

 printf("%.2lf",somatorio(a));
}