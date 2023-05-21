#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

int max_of_four(int a,int b,int c, int d){
    int arr[20] = {a,b,c,d};
    int max_num = 0;
    for(int i = 0; i <=4; i++){
        if(arr[i] > max_num){
            max_num = arr[i];
        }
    }
return max_num;

}