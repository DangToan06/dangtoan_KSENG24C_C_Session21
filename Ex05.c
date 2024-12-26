#include<stdio.h>
#include<string.h>

int main(){
    int n;
    char s[100];
    char sOutput[100];
    FILE *fptr;
    fptr = fopen("bt05.txt", "w");
    if(fptr == NULL){
        printf("File mo khong thanh cong..!");
        return 1;
    }

    printf("Nhap so dong cho file: ");
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++){
        printf("Nhap sau cho dong thu %d\n", i+1);
        fgets(s, sizeof(s), stdin);
        fputs(s, fptr);
    }

    fclose(fptr);
    printf("Ghi vaof file thanh cong\n");

    fptr = fopen("bt05.txt", "r");
    if(fptr == NULL){
        printf("File mo khong thanh cong..!\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        fgets(sOutput,sizeof(s),fptr);
        sOutput[strlen(sOutput) - 1] = '\0';
        printf("%s\n", sOutput);
    }

    fclose(fptr);
    printf("Doc vaof file thanh cong\n");
    return 0;
}