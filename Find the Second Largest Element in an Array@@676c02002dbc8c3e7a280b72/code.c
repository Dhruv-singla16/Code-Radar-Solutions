#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    if(n==1){
        printf("-1");
        label:
    }
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int r=0;r<n;r++){
        for(int c=0;c<n-1-r;c++){
            if(a[c]>a[c+1]){
                temp=a[c];
                a[c]=a[c+1];
                a[c+1]=temp;
            }
        }
    }
    printf("%d",a[n-2]);
    goto label:
}
