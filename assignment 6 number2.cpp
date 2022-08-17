#include <stdio.h>
int main(){
	int n;
	printf("nhap kich thuoc cua tap hop=");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
    
	int S=0,count=0;
	for(i=0;i<n;i++){
}
		if(arr[i]%2==1){
		S=S+arr[i];
		count++;
		
	if(count>0&count%2==0){
	
		float TBC=S/count;
		printf("trung binh cong so le: %f",TBC);
	}
    }else{
	printf("khong co so le trong mang");
    }
}
}
