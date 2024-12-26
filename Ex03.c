#include<stdio.h>

int main(){
    char s[100];
    FILE *fprt;
    fprt = fopen("bt01.txt", "a");
    if(fprt == NULL){
        printf("Loi mo file...!");
        return 1;
    }

    printf("Moi ban nhap them mot chuoi ky tu vao trong file:\n");
    fgets(s, sizeof(s), stdin);

    fputs(s, fprt);

    fclose(fprt);
    printf("Luu chuoi moi vao file thanh cong!!!");
}