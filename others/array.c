#include<stdio.h>
int main(){
   int a, b, c;
   int arr[5] = {1, 2, 3, 25, 7};
   a = ++arr[1];
   b = arr[1]++;

   printf("%d--%d", a, b);
   return 0;
}