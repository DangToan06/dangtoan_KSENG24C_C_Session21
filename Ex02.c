#include<stdio.h>

int main(){
    char s;
    FILE *fptr;
    fptr = fopen("bt01.txt", "r");
    if(fptr == NULL){
        printf("Mo file loi...!");
    }

    s = fgetc(fptr);
    printf("Ki tu dau tien trong file la: %c\n", s);

    fclose(fptr);
    printf("Doc file thanh cong!!!\n");
}