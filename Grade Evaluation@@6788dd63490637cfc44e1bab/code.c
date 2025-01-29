#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=='A' || a=='a'){
        printf("Excellent");
    }
    else if(a=='B' || a=='b'){
        printf("Good");
    }
    else if(a=='C' || a=='c'){
        printf("Average");
    }
    else if(a=='D' || a=='d'){
        printf("Below Average");
    }
    else if(a=='F' || a=='f'){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }
    return 0;
}