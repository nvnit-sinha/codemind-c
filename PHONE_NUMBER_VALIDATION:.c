#include<stdio.h>
int main()
{
    int a,i;
    char s[10];
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        a++;
    }
    if(s[0]==0)
    {
        printf("Invalid");
    }
    else if (i==10)
    printf("Valid");
    // else if (i>9 ||i<9)
    // printf("False");
    else
    printf("Invalid");
    // printf("%d",i);
    return 0;
}