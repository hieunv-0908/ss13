#include<stdio.h>

void themPhanTu(int n,int m,int arr[100][100]){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("array[%d][%d]= \n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void inPhanTu(int n,int m,int arr[100][100]){
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

	void inBien(int n,int m,int arr[100][100]){
		if(n>0&&m>0){
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(i==0||i==n-1||j==0||j==m-1){
						printf("%d\t",arr[i][j]);
					}else{
						printf("\t");
					}
				}
				printf("\n");
			}
			
		}else{
			printf("phan tu khong co");
		}	
	} 

	void inDuongCheoChinh(int n,int m,int arr[100][100]){
		if(n>0||m>0||n==m){
			for(int i=0;i<n;i++){
				printf("%d\n",arr[i][i]);
			}
		}else{
			printf("phan tu nay k co");
		}
	}
	void inDuongCheoPhu(int n,int m,int arr[100][100]){
		if(n>0||m>0||n==m){
			for(int i=0;i<n;i++){
				printf("%d\n",arr[i][n-i-1]);
			}
		}else{
			printf("phan tu nay k co");
		}
	}
	int kiemTraSoNguyen(int num){
		if(num<2) return 0;
			for(int i=2;i*i<=num;i++){
				if(num%i==0) return 0;
			}	
				return 1;	
	}
	void soNguyenTo(int n,int m,int arr[100][100]){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if (kiemTraSoNguyen(arr[i][j])){				
					printf("%d\t",arr[i][j]);
				}
			} 
			
		}
		printf("\n");
	}

int main(){
	int arr[100][100];
	int n;
	int m; 
	int choose;
do{
		printf("_____________MENU_________________\n");
	
		printf("1.Nhap cac phan tu cua mang \n");
		printf("2.In cac phan tu cau mang theo ma tran \n");
		printf("3.IN ra cac phan tu o goc theo ma tran \n");
		printf("4.IN ra phan ti nam tren duong bien \n");
		printf("5.In cac phan tu nam tren duong cheo chinh vaf phu theo ma tran\n");
		printf("6.In ra cac phan tu la so  nguyen to theo ma tran\n");
		printf("7.Thoat\n");
		printf("\n________________________________________\n");
		printf("MOi ban nhap lua chon: \n");
		scanf("%d",&choose);
	switch(choose){
		case 1:// nhap cac gia tri phan tu cau mang
		printf("moi ban nhap so phan tu: \n");
		scanf("%d",&n);
		printf("moi ban nhap phan tu vao mang: \n");
		scanf("%d",&m);
		themPhanTu(n,m,arr);
			break;
		case 2:
			printf("In cac phan tu\n");
			inPhanTu(n,m,arr);
			break;
		case 3:
			break;
		case 4:
			printf("IN bien\n");
			inBien(n,m,arr);
			break;
		case 5:
			printf("duong cheo chinh\n");
			inDuongCheoChinh(n,m,arr);
			printf("duong cheo phu\n");
			inDuongCheoPhu(n,m,arr);
			break;
		case 6:
			printf("So NGuyen TO\n");
			soNguyenTo(n,m,arr);
			
			break;
		case 7:
			break;				
	}
}while(choose !=7);
	
	return 0;
}
