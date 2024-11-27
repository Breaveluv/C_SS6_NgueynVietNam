#include <stdio.h>

int main() {
    int num = 6806 ;
    int a;
    while ( num == 6806 ){
        printf("hay nhap mat khau: ");
        scanf("%d", &a);
        if(a == 6806){
            printf("siuu\n");
            break;

        }else if (a != 6806){
            printf("chua dung dau\n");
        }
    }
    return 0;
}