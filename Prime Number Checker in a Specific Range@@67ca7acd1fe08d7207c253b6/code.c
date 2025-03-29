#include <stdio.h>

int isPrime(int i) 
{
    if (i < 2) 
        return 0;
    for (int d = 2; d < i; d++) 
    {
        if (i % d == 0) 
            return 0;
    }
    return 1;
}

void printPrimesInRange(int start, int end) 
{
    int c=0;
    for (int i = start; i <= end; i++) 
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            c++;
        } 
    }
    if(c == 0)
        printf("No prime numbers");
}