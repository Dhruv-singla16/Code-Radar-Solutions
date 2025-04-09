#include<stdio.h>
int main(){
    int n,i,n1,r,sum=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        n1=A[i];
        while(n1!=0){
            r=n1%10;
            sum=sum+n1;
            n1=n1/10;
        }
        printf("%d ",sum);
    }
}