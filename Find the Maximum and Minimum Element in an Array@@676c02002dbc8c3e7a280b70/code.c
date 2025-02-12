#include<stdio.h>
int main(){
    int n,i,max,min;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++){
        scanf("%d ",&s[i]);
    }
    max=s[0];
    min=s[0];
    for(i=0;i<n;i++){
        if(max<s[i]){
            max=s[i];
        }
        if(min>s[i]){
            min=s[i];
        }
    }
    printf("%d %d",min,max);
    
}