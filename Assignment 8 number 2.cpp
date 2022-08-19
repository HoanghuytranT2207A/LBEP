#include <stdio.h>
#include <math.h>
int tinhdientich(int a,int b,int c){
	int p=a+b+c;
	float d=p/2.0;
	float s=sqrt(d*(d-a)*(d-b)*(d-c));
    return s;
}
int main(){
	int a,b,c;
	int p;
    float s;
    printf("dien tich tam giac: %d",s);
}
