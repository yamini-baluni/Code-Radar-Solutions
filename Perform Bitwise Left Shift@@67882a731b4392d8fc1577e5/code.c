#include <stdio.h>
int main(){
    int num,shift;
    printf("");
    scanf("%d %d", &num, &shift);
    int result = num << shift;
    printf("%d\n",result);
    return 0;
}