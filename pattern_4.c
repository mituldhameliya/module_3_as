#include<stdio.h>
int main ()
{
    
    for (int i=1; i<=5; i++)
        {
            char a='A';
            for (int j=1; j<=i; j++)
                {
                    printf(" %c",a);
                    a++;
                }
                
                printf("\n");

        }
}