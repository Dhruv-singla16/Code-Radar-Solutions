#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int counted[n]; 
    for (int i = 0; i < n; i++) {
        counted[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (counted[i]) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (ary[i] == ary[j]) {
                count++;
                counted[j] = 1; 
            }
        }
        printf("%d %d\n", ary[i], count);
    }

}

