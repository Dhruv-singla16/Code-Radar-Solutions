#include<stdio.h>
int main(){
    int n,no,i,count=0;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&no);
    for(i=0;i<n;i++){
        if(A[i]==no){
            printf("%d",i);
            return 0;
        }
       
    }
    printf("-1");
}