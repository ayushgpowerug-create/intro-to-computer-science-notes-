#include<stdio.h>
#include<cs50.h>
int main(){
    int n;
while(true){
    n=get_int("what is n?");
    if(n>0){break;}
    else{continue;}
}
for(int i=0;i<n;i++){
    printf("hello\n");
}
    return 0;
}
