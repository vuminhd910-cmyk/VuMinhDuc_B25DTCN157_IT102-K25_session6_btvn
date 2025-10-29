#include <stdio.h>
int main(){
	int a,b,c,d,fusion; 
	printf("nhap vao so nguyen duong a:");
	scanf("%d",&a);
	printf("nhap vao so nguyen duong b:");
	scanf("%d",&b);
             c=a;
              b=d;
         while(b!=0){
      	fusion = a  % b;
	              a = b;
	               b = fusion;  
 } 
int leastcommonmultiple = (c*d)/a;
  printf("bo chung cua hai so la:%d",leastcommonmultiple);	 
}

