#include<stdio.h>
int main(){
    int i=0,n,sum=0;    
    while(1){
                  printf("%d. enter a number : ", i);
                  scanf("%d", &n);
                  sum=sum+n;
                  if(n==0){break;}
                  i++;
                  }
                  printf("%d entered number summary=%d ve average=%d",i,sum,sum/i);
    getchar();
    getchar();
    return 0;
    }

