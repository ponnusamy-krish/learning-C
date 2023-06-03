// Update the '_' in the code below

#include <stdio.h>

int main() {
    int t;
    int N;
    int i = 1;
    //accept the count of test cases given in the 1st line
    scanf("%d\n", &t );
    //run a loop to accept 't' inputs
    while ( i <= t) {
        //accept 1 integer on the 1st line of each test case
        scanf("%d", &N);
        //output the negative integer - i.e. (-N)
        printf("%d\n", -N );
        i = i+1;
    }
    return 0;
}