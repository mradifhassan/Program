#include <stdio.h>
#include <stdbool.h>

void prime(long long int n);
void primeCode(long long int i);
int main(){
    long long int n;
    scanf("%lld", &n);
    prime(n);
    return 0;
}

void prime(long long int n){
    int array[n + 1];
    for(long long int i = 0; i < n; i++){
        array[i] = true;
    }
    array[0] = array[1] = false;
    for(long long int i = 2; i <= n; i++){
        if(array[i] == true){
            for(long long int j = i * 2; j <= n; j += i){
                array[j] = false;
            }
        }
    }
    for(long long int i = 2; i <= n; i++){
        if(array[i] == true){
            primeCode(i);
        }
    }
    printf("File creation process succeeded\n");
}
void primeCode(long long int i){
    FILE *pFile = fopen("prime-code.txt", "a");
    if(pFile == NULL){
        printf("File creation process interrupted!\n");
    }
    fprintf(pFile, "%lld\n", i);
    fclose(pFile);
}
