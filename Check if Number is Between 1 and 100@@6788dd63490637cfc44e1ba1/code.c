#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    if (num<=100 && num>=1){
        printf("In Range\n");
    }
    else{
        printf("out of Range\n");
    }
    return 0;
}