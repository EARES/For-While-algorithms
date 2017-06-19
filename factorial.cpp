#include<stdio.h>
int main(){
    int i, mult=1, s;
    printf("Please enter a number: ");
    scanf("%d", &s);
                for(i=1; i<=s; i++){
                            mult=mult*i;
                            }
                            printf("%d!=%d \n", s, mult);
    getchar();
    getchar();
    return 0;
    }

