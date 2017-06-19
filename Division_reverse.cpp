#include<stdio.h>
int main(){
    int i, n, div;
    printf("Please enter a number : ");
    scanf("%d", &n);
    for(i=1; i<=100; i++){
            div=n%10;
            printf("%d", div);
            if(n==div){break;}
            n=n-div;
            n=n/10;
            }
    getchar();
    getchar();
    return 0;
    }

