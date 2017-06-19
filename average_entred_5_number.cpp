#include<stdio.h>
int main(){
    int i=1,n,sum=0;    
    while(i<=5){
                  printf("%d. enter a number : ", i);
                  scanf("%d", &n);
                  sum=sum+n;
                  i++;
                  }
                  printf("Average=%d", sum/5);
    getchar();
    getchar();
    return 0;
    }

