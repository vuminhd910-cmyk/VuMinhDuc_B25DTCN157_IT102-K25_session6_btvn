#include <stdio.h>
int main(){
	double a,b;
	int lua_chon; 
	printf("nhap so  a:");
	scanf("%lf",&a);
	printf("nhap so  b:");
	scanf("%lf",&b); 		
do{
printf("\n---- MENU CHUC NANG ----\n");
printf("1. tong cua hai so\n");
printf("2. hieu cua hai so\n");
printf("3. tich cua hai so\n");
printf("4. thuong cua hai so\n");
printf("5. thoat\n");
printf("lua chon cua ban:\n"); 
scanf("%d",&lua_chon);
switch(lua_chon){
	case 1:
	printf("tong cua 2 so: %.2lf\n",a+b);
	break;
	case 2:
	printf("hieu cua 2 so: %.2lf\n",a-b);
	break;
	case 3:
	printf("tich cua hai so: %.2lf\n",a*b);
	break;
	case 4: 
	if(b==0)
		printf("khong the chia cho 0 yeu cau nhap lai\n");
    else
        printf("thuong cua hai so: %.2lf\n",a/b);
	break;
	case 5:
		printf("thoat khoi chuong trinh\n");
		break;
	default:
	  printf("lua chon khong hop le\n");
	  	}
		  } 	while( lua_chon !=5);
           	return 0 ;  
	
	
} 
 
