#include<stdio.h>
int main()
{
    int n,i,counte=0,counto=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++){
        scanf("%d",&s[n]);
    }
    for(i=0;i<n;i++){
        if((s[i])%2==0){
            counte++;
        }
        else{
            counto++;
        }
    }
    printf("%d %d",counte,counto);

}