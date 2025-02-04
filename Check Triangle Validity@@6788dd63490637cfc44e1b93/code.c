#include <stdio.h>

int main(){
    float a,b,c;
    printf("");
    scanf("%f %f %f",&a,&b,&c);

    if((a+b>c)&&(b+c>a)&&(c+a>b)){
        printf("Valid\n",a,b,c);
    }
    else{
        printf("Invalid\n",a,b,c);
    }
    return 0;
    

}