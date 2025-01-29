#include <stdio.h>
int main() {
    char var;
    scanf("%c",&var);
    if(var=='a','e','i','o','u','A','E','I','O','U'){
        printf("Vowel");
    }
    else if((var>='A' && var<='Z') || (var>='a' && var<='z')){
        printf("Consonant");
    }
    else if(var>='0' && var<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
