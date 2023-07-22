#include<stdio.h>

int main(){
    int year =1,period;
    float amount,inrate,value;
    printf("Input amount, Interest rate, Period\n"),
    scanf("%f %f %d",&amount,&inrate,&period);

    year = 1;

    while(year <= period){
        value = amount + inrate * amount; //value = 10000 + 0.14 * 10000
        printf("%2d Rs %.2f\n", year, value);
        amount  = value;

        year++;
    }

    return 0;

}