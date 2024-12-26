#include<stdio.h>

int main(){
    FILE *file1, *file2;
    char s;

    file1 = fopen("bt01.txt", "r");
    if(file1 == NULL){
        printf("Doc file khong thanh cong..!");
        return 1;
    }

    file2 = fopen("bt06.txt", "w");
    if(file2 == NULL){
        printf("Doc file khong thanh cong..!");
        return 1;
    }

    while((s = fgetc(file1)) != EOF){
        fputc(s,file2);
    }
    printf("Sao chep thanh cong!!");
    fclose(file1);
    fclose(file2);
    return 0;
}