#include <stdio.h>

int isprime(int p){
        if (p <= 1) // Les nombres <= 1 ne sont pas premiers
        return 0;   
    for ( int i = 2; i<p ; i++ ){
        if (p%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int p = 100000;
    printf("%d\n",isprime(p));
    return 0;
}
