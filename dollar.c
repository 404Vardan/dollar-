#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    long long dollars = 1;
    while (1)
    {
        char c;
        printf("here's $%lld. double it and give it to the next person?(y)\n",dollars);
        scanf(" %c",&c);

        if (c=='y')
        {
            dollars*= 2;
        
        }
        else
        {
            break;
        }

        
    
        
    }
    printf("here's $%lld.\n",dollars);
    return 0;
}