#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum = 0,temp;
    scanf("%d", &n);
    while(n > 0){
        temp = n%10;
        sum +=temp;
        n = n/10;
    }
    printf("%d",sum);
    return 0;
}