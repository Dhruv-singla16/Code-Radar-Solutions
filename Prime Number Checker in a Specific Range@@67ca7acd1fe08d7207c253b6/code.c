int isPrime(int a)
{
    for(int i=2;i<a;i++)
    {
        if(a%i != 0)
        {
            return a;
        }
    }
}

void printPrimesInRange(int a,int b){
    for(int i=a+1;i<b;i++){
        printf("%d ",isPrime(i));
    }
}