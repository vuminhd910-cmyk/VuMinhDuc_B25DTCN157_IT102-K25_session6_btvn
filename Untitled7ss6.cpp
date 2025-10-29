#include <stdio.h>
int main(){
	int a,b;
	printf("nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	if(a == 0 || b == 0){
		return a+b ;
	}
	while (a!=b){
		if (a > b){
			a-=b;
		}else{
			b-=a;
		}
	}
	printf("uoc chung lon nhat:%d\n",a);
	return a; 
}

