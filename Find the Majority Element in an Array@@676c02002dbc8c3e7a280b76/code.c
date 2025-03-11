#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int counted[n]; 
    for ( i = 0; i < n; i++) {
        counted[i] = 0;
    }

    for ( i = 0; i < n; i++) {
        if (counted[i]) {
            continue;
        }

        int count = 1;
        for ( j = i + 1; j < n; j++) {
            if (A[i] == A[j]) {
                count++;
                counted[j] = 1; 
            }
        }
      if(count>n/2){
        printf("%d",A[i]);
      }
    }

}

