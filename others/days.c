#include<stdio.h>

int main(){
    int days,months;

    printf("Enter The Number of days: ");
    scanf("%d",&days);

    months = days/30;
    days %=30;
    printf("Months = %d  Days = %d",months,days);


    return 0;
}