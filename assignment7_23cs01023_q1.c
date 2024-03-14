#include<stdio.h>
int main(){
    char a[100],s;
    printf("enter a string:");
    fgets(a,sizeof(a),stdin);
    printf("enter a character:");
    scanf("%c",&s);
    int i,count=0;
    for(i=0;a[i]!=0;i++){
        if(a[i]==s){
            count++;
        }
    }
    printf("The frequency of %c is %d",s,count);
    return 0;
}