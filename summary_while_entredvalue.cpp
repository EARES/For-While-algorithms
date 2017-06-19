#include<stdio.h>
int main(){
    int i=1, sum=0;
    int s;
    printf("Please enter a number: ");
    scanf("%d", &s);
                while(i<=s){
                            sum=sum+i*i;
                            i++;
                            }
                            printf("Summary %d \n", sum);
    getchar();
    getchar();
    return 0;
    }
