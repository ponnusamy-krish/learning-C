#define MAXVAL 50
#define COUNTER 11
#include<stdio.h>

int main(){
    float value[MAXVAL];//initialize the maximum number of students
    int i,high,low;//initializes the variables for loops and hign and lows
    int group[COUNTER] = {0,0,0,0,0,0,0,0,0,0,0};//initializes the value for students who belongs to groups
    
    for(i = 0;i < MAXVAL; i++){
        scanf("%f",&value[i]);//getting students marks
        ++group[(int)(value[i]/10)];//increases the group[i] value by one
    }
printf("\n");
printf("Group\tRange\tFrequency\n\n");

for(i = 0; i < COUNTER;i++){
    low = i * 10;
    if (i == 10) high = 100;
    else high = low + 9;
    printf("%2d\t %3d to %3d %d\n", i+1,low,high,value[i]);
}

    return 0;
}
