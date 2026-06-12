#include<stdio.h>
#include<cs50.h>
void greet(int n);
int main(){
greet(3);
    return 0;
}
void greet (int n){
    n=get_int("enter the value of n?");
    for(int i=0;i<n;i++){
        printf("hello\n");
    }
}
