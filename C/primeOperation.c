#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void prime(int n);
bool isPrime(int n);
void nthPrime(int n);

void option(){
    printf("Enter operation: \n1. Prime number generating\n2. Is prime or not\n3. N th prime number\n");
    int m, n;
    scanf("%d", &m);
    switch(m){
        case 1:
        printf("Enter number: ");
        scanf("%d", &n);
        prime(n);
        break;
        case 2:
        printf("Enter number: ");
        scanf("%d", &n);
        if(isPrime(n) == true){
            printf("Prime\n");
        }
        else{
            printf("Composite\n");
        }
        break;
        case 3:
        printf("Enter number: ");
        scanf("%d", &n);
        nthPrime(n);
        break;
    }
}

int main(){
    option();
    return 0;
}

void prime(int n){
    bool array[n];
    for(int i = 0; i <= n; i++){
        array[i] = true;
    }
    array[0] = array[1] = false;
    for(int i = 2; i <= n; i++){
        if(array[i] == true){
            for(int j = 2 * i; j <= n; j += i){
                array[j] = false;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(array[i] == true){
            printf("%d\n", i);
        }
    }
}

bool isPrime(int n){
    if(n < 0) return false;
    if(n % 2 == 0) return false;
    if(n == 2 || n == 3) return true;
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

void nthPrime(int n){
    int limit = n * 50;
    int array[limit + 1];
    for(int i = 0; i <= limit; i++){
        array[i] = true;
    }
    array[0] = array[1] = false;
    for(int i = 2; i <= limit; i++){
        if(array[i] == true){
            for(int j = 2 * i; j <= limit; j += i){
                array[j] = false;
            }
        }
    }
    int count = 0;
    for(int i = 2; i <= limit; i++){
        if(array[i] == true){
            count++;
            if(count == n){
                printf("%d\n", i);
                return;
            }
        }
    }
}
