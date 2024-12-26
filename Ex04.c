#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    FILE *fptr;
    fptr = fopen("bt01.txt", "r");
    if(fptr == NULL){
        printf("Mo file khong thanh cong...!");
        return 1;
    }

    fgets(s, sizeof(s), fptr);

    s[strlen(s) - 1] = '\0';

    printf("Dong dau tien trong file la:\n");
    printf("%s\n", s);

    fclose(fptr);
    printf("Doc file tanh cong\n");
    return 0;
}