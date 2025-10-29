#include <stdio.h>
int main(){
	int n; 
	long sum;
	printf("\nnhap mot so nguyen duong:");
	while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Gia tri khong hop le. Vui long nhap lai mot so **nguyen duong** N: ");
        while (getchar() != '\n'); 
    }
	for(int i=1; i<= n; i++){
		sum = sum + i ; 
	} 
	 printf("\ntong cua tat ca cac so tu 1 den n là : %ld",sum); 
} 

