#include <stdio.h>
int main (){

 int a;
 printf("Nhap a=");
 scanf("%d",&a);
 
 int b;
 printf("Nhap b=");
 scanf("%d",&b);
 
 int c;
 printf("Nhap c=");
 scanf("%d",&c);
 
 if (a>b){
 	 if(a>c){
 	printf("a is biggest");	
	 
     }else
	      printf("c is largest");
 
 
 }else
      if(b<c){
	 printf("c is largest");
	
	}else
	printf("b is largest");
	
}


	
