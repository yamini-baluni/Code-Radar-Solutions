#include <stdio.h>

int main(){
    int num,n,bitvalue;
    printf("");
    scanf("%d %d",&num , &n);
    bbitvalue = (num >> n) &1;
    printf("%d\n",num,n,bitvalue);
    return 0;
}