#include<stdio.h>
#include<string.h>

void pad(char *s,int length);

int main(){
    char str[80];
    strcpy(str, "This is a test");
    pad(str,40);
    printf("%d",strlen(str));
    return 0;

}

void pad(char *s,int length){
    int l = strlen(s);
    while (l < length){
        s[l] = ' ';
        l++;
    }
    s[l] = '\0';
}
