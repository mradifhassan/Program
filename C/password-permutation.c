#include <stdio.h>
void code(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j){
    FILE *pFile = fopen("/home/alex/Program/code-permutation.txt", "a");
    if(pFile == NULL){
        printf("File creation process interrupted!\n");
    }
    fprintf(pFile, "%d %d %d %d %d %d %d %d %d %d\n", a, b, c, d, e, f, g, h, i, j);
    printf("File creation process succeeded\n");
    fclose(pFile);
}
int main(){
    long long count = 0;
    for(int a = 0; a <= 9; a++){
        for(int b = 0; b <= 9; b++){
            for(int c = 0; c <= 9; c++){
                for(int d = 0; d <= 9; d++){
                    for(int e = 0; e <= 9; e++){
                        for(int f = 0; f <= 9; f++){
                            for(int g = 0; g <= 9; g++){
                                for(int h = 0; h <= 9; h++){
                                    for(int i = 0; i <= 9; i++){
                                        for(int j = 0; j <= 9; j++){
                                           if(a != b && a != c && a != d && a != e && a!= f && a != g && a!= h && a != i && b != c && b != d && b != e && b != f && b != g && b != h && b != i && c != d && c != e && c != f && c != g && c != h && c != i && d != e && d != f && d != g && d != h && d != i && e != f && e != g && e != h && e != i && f != g && f != h && f != i && g != h && g != i && h != i && j != a && j != b && j != c && j != d && j != e && j != f && j != g && j != h && j != i){
                                             code(a, b, c, d, e, f, g, h, i, j);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
    return 0;
}
