#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    if(a=='R' || a=='r'){
        printf("Stop");
    }
    else if(a=='G' || a=='g'){
        printf("Go");
    }
    else if(a=='Y' || a=='y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}