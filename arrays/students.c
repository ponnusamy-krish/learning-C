#define MAXVAL 50
#define COUNTER 11
#include<stdio.h>

int main(){
    float value[MAXVAL];
    int i,high,low;
    int group[COUNTER] = {0,0,0,0,0,0,0,0,0,0,0};
    
    for(i = 0;i < MAXVAL; i++){
        scanf("%d",&value[i]);
        ++ group[(int) (value[i]/10)];

    }

    return 0;
}
