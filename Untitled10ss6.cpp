#include <stdio.h>
#include <math.h> 
int main(){
     int a,fusion,reveser_number;
                   printf("nhap vao so a:");
                   scanf("%d",&a);
if(a<0){
	     	printf("a  am chuyen dau tu len truoc n");
		    a=-a;
	}
if(a==0){
	     	printf("a  bang 0");
	}
        	fusion=a;
while(fusion>0){
		    reveser_number =reveser_number *10+(fusion%10);
		    fusion/=10;
	}
    	printf("Thu tu tu trai sang phai cua so la:",fusion);
while(reveser_number>0){
	        	int digit=reveser_number%10;
	        	printf(" %d ",digit);
	         	reveser_number/=10;
	}
	printf("\n");
}	
 

