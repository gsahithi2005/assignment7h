#include<stdio.h>
#include<string.h>
int main(){
    char s[100],ss[100];
    printf("\n enter a string:");
    fgets(s,sizeof(s),stdin);
    printf("\n  enter the substring:");
    fgets(ss,sizeof(ss),stdin);
    if(strstr(s,ss)==0){
        printf("\n substring is not found");}
    else{
        printf("\n The substring exists in the string");
    }
    return 0;
}