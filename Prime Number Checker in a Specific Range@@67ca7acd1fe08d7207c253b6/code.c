// #include <stdio.h>

// int isPrime(int num) 
// {
//     if (num < 2) 
//         return 0;
    
//     return 1;
// }

void printPrimesInRange(int start, int end) 
{
    int c=0;
    for (int i = start; i <= end; i++) 
    {
        for (int c = 2; c < i; i++) 
        {
            if (i % c != 0) 
                printf("%d ",i)
        }
    }
    // if(!c)
    //     printf("No prime numbers");
}