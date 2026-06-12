#include<stdio.h>
#include<cs50.h>
int main(){
    char input=get_char("do you agree?");
    if(input=='y' || input=='Y'){
        printf("agree");
    }
    else{
        printf("not agree");
    }

    return 0;
}
