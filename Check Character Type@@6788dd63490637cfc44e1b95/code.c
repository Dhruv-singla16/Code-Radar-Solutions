#include <stdio.h>
int main() {
    char var;
    scanf("%c",&var);
    if(var=='a','e','i','o','u','A','E','I','O','U'){
        printf("Vowel");
    }
    else if((var>='A' && var<='Z') || (var>='a' && var<='z')){
        printf("Constant");
    }
    else if(var=='1','2','3','4','5','6','7','8','9','0'){
        printf("Constant");
    }
    else{
        printf("Special Character");
    }
    return 0;
    }
