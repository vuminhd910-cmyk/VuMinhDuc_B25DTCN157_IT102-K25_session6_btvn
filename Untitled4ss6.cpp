#include <stdio.h>
int main(){
	int a,summer;
	printf("\nnhap so nguyen duong:");
	scanf("%d",&a);
	if(a<0 || a>10){
		printf("so nay ko thuoc bang cuu chuong");
	}else{
	 for(int i = 1; i<=10; i++){
	 	summer = a * i ; 
	  printf("\nbang cuu chuong theo tung so la:%d * %2d = %d",a,i,summer);
}
}
}
 
