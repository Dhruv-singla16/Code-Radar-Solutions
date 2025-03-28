#include<stdio.h>
int main(){
    int n,i,r,c,temp=0,count=1;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(r=0;r<n;r++){
        for(c=0;c<n-1-r;c++){
            if(A[c]>A[c+1]){
                int temp=A[c];
                    A[c]=A[c+1];
                    A[c+1]=temp;
            }
        }
    }   
    for(i=0;i<n;i++){
        if(A[i+1]-A[i]==1){
           count++; 
        }
        if(A[i] == A[i+1])
        {
            printf("%d",count);
            return 0;
        }
    }
    if(count!=1)
        printf("%d",count);
    else
        printf("1");
}