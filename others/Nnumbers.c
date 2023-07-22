#define N 10
#include<stdio.h>

int main(){
    int count = 0,sum = 0,number;
    float average;
    while(count < N){
        scanf("%d",&number);
        sum+=number;
        count++;
    }
    printf("sum = %d\n",sum);
    average = sum/N;
    printf("Average = %.2f", average);
    return 0;
}