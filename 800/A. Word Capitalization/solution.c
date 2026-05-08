// Problem: A. Word Capitalization
// Platform: Codeforces
// Language: C
// Topic: Strings, Implementation
// Rating: 800


#include<stdio.h>
#include<math.h>

int main(){
    char text[1000];
    fgets(text, sizeof(text), stdin);
    if(text[0]>=97){
        text[0]-=32;
    }
    printf("%s", text);
}