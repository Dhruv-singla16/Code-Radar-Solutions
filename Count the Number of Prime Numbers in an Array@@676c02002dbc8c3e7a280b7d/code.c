#include<stdio.h>
int main(){
    int n,i,r,c,count=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(r=0;r<n;r++){
        for(c=2;c<=A[r]-1;c++){
            if(A[r]%c==0){
                break;
            }
        }
        if(c==A[r])
        count++;
    }
    printf("%d",count);
}