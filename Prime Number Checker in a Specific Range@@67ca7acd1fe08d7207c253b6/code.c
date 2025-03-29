void printPrimesInRange(int start, int end) 
{
    for (int i = start; i <= end; i++) 
    {
        for (int c = 2; c < i; i++) 
        {
            if (i % c != 0) 
                printf("%d ",i);
        }
    }
    
}