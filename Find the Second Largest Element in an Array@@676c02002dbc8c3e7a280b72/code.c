#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    if (n==1) {
        printf("-1");
        return 0;
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
    int count=0;
    for (int i=0; i<n/2; i++) {
        if (a[i]==a[n-i-1])
        count++;
    }
    if (count==n-1) {
        printf("-1");
        return 0;
    }
    printf("%d",a[n-2]);
    
}
