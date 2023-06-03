#include<stdio.h>

int main(){
    
    int num ,sum = 0;
    printf("Enter 10 Numbers: ");
    for(int i =1;i <=10;i++){
        scanf("%d",&num);
        sum += num*num;
    }
        printf("%d",sum);
        return 0;
}