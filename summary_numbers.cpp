#include<stdio.h>
int main(){
    int i=1, sum=0;
    int s;
    printf("Please enter a number: ");
    scanf("%d", &s);
    for(i=1; i<s; i++){
             sum=sum+i;
             }
             printf("Summary %d \n", sum);
    getchar();
    getchar();
    return 0;
}
