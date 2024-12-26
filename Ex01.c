#include<stdio.h>

int main(){
	char string[100];
	FILE *fptr;
	fptr = fopen("bt01.txt", "w");
	if(fptr == NULL){
		printf("Loi mo file...");
		return 1;
	}

	printf("Nhap mot chuoi de luu vao file:\n");
	fgets(string,sizeof(string),stdin);

	fputs(string,fptr);

	fclose(fptr);
	printf("Tao file thanh cong!!!");

	return 0;
}