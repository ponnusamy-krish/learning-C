#include <stdio.h>

int sqrnum(int num);
int readnum(void);
int prompt(void);

int main()
{
    int t;
    for (prompt(); (t = readnum()); prompt())
    {

        sqrnum(t);
        if (getchar() == '\n')
        {
            break;
        }
    }

    return 0;
}

int prompt(void)
{
    printf("Enter a number");
    return 0;
}

int readnum(void)
{
    int t;
    scanf("%d", &t);
    return t;
}
int sqrnum(int num)
{
    printf("%d", num * num);
    return num * num;
}