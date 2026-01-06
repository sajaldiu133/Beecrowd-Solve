#include<stdio.h>

int main(){
    char L;
    scanf("%c" , &L);
    if(L >= 'A' && L <= 'Z'){
        L = L - 'A' +1;
        printf("%d\n" , L);

    }
return 0;
}
