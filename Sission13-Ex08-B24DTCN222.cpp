#include<stdio.h>
void ucln(int a,int b){
	int r;
	int temp;
	if(b>a){
		temp =a;
		a=b;
		b=temp;
	}
	r= a % b;
	while(1){
		if(r==0){
			printf("ucln cua la %d",b);
			return;
		}else{
			a=b;
			b=r;
			r= a % b;
		}
	}
}
int main(){
	int a,b;
	printf("moi ban nhap vao hai so a va b");
	scanf("%d",&a); 
	scanf("%d",&b);
	ucln(a,b);
	return 0;
}
