#include <stdio.h>

int main(){
    int num,n,bitValue;
    printf("");
    scanf("%d %d",&num , &n);
    bitValue = (num >> n) &1;
    printf("%d\n",num,n,bitvalue);
    return 0;
}