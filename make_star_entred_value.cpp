#include<stdio.h>
int main(){    
    int i,div,n,j;
    printf("Please enter a number : ");
    scanf("%d", &n);  
    for(i=1; i<=n; i++){
             for(j=1; j<=i; j++){
                          printf("*");
                      }
             printf("\n");
             }     
             getchar();
             getchar();
             return 0;     
    }

