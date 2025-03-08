#include<stdio.h>
int main()
{
    int n,i,k,temp;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&k);
    while(k>0){
        temp=A[n-1];
        for(i=n-2;i>=0;i--){
            A[i+1]=A[i];
        }
        A[0]=temp;
        k--;
    }
    for(i=0;i<n;i++){
        printf("%d",A[i]);
    }
}