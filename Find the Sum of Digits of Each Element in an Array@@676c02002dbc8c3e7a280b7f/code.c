#include<stdio.h>
int main(){
    int n,i,n1,r;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        n1=A[i];
        int sum=0;
        while(n1!=0){
            r=n1%10;
            sum=sum+r;
            n1=n1/10;
        }
        if(n1<0){
            printf("-%d ",sum);
        }
        printf("%d ",sum);
    }
}