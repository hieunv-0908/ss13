#include<stdio.h>
// case 1
void addItem(int arr[], int size){
	for(int i =0;i<size;i++){
		printf ("phan tu thu arr[%d]",i);
		scanf("%d",&arr[i]);
	}
}
// case 2
void printfItem(int arr[],int size){
	for(int i =0;i<size;i++){
		printf("phan tu arr[%d] co gia tir la %d\n",i,arr[i]);
	}
}
// case 3
void insertItem(int ar[],int size){
	int index;
	int n;
	printf("moi nhap vao gia tri muon chen");
	scanf("%d",&n);
	printf("moi nhap vao vi chi can chen");
	scanf("%d",&index);
	if(index > size){
		ar[size +1] = n;
	}else{
		for(int i =size;i>=index;i--){
			 ar[i+1] = ar[i];
		}
		ar[index]=n;	
	}
}
// case 4
void fixItem(int ar[],int size){
	int index;
	int n;
	printf("moi nhap vao gia tri muon thay");
	scanf("%d",&n);
 	printf("moi nhap vao vi chi can sua");
	scanf("%d",&index);
	if(index > 0 && index <size){
		ar[index]=n;	
	}			
}
// case 5
void deletIndex(int ar[],int size){
	int index;
	printf("moi nhap vao vi tri can xoa");
	scanf("%d",&index);
	for(int i=index;i<size;i++){
		ar[i] =ar[i+1];
	}
}
// case 6
void arrangeIndex(int ar[],int size,int select){
	int temp;
	if (select ==1){
		for(int i =0;i<size;i++){
			int indexMin=i;
			for (int j=i+1;j<size;j++){
				if(ar[j] < ar[indexMin]){
					indexMin = j;
		}
			}
			temp = ar[i];
			ar[i] = ar[indexMin];
			ar[indexMin]=temp;
		}
	}
	if (select ==2){
		for(int i =0;i<size;i++){
			int indexMax=i;
			for (int j=i+1;j<size;j++){
				if(ar[j] > ar[indexMax]){
					indexMax = j;
				}
			}	
			temp = ar[i];
			ar[i] = ar[indexMax];
			ar[indexMax]=temp;
		}
	}
}
// case 7
void search(int ar[],int size,int select){
	int n;
	printf("Moi nhap vao so muon tim kiem");
	scanf("%d",&n);
	if(select == 1){
		for(int i =0;i<size;i++){
			if(ar[i] == n){
				printf("Da tim thay %d o vi tri %d",n,i);
				return;
			}
		}
		printf("Khong tim thay so %d.",n);
		return;
	}else if(select == 2){
		int low =0;
		int hight =size -1;
		while(low<=hight){
			int middle = (low +hight) / 2;
			if(ar[middle] < n){
				low = middle +1;
			}else if(ar[middle] > n){
				hight = middle -1;
			}else if(ar[middle] = n){
				printf ("da tim thay %d o vi tri %d",n,middle);
				return;
			}
		}
	}
}
int main(){
	int arr[100];
	int choose;
	int size;
	int select;
	do{
		printf ("\n");
		printf ("\n");
		printf ("\n");
		printf("-----------MENU----------- \n");
		printf("1.Nhap so luong phan tu va gia tri\n");
		printf("2.In ra cac phan tu trong mang dang quan ly\n");
		printf("3.Chen phan tu vao vi tri mong muon\n");
		printf("4.Sua phan tu\n");
		printf("5.Xoa phan tu\n");
		printf("6.Sap xep phan tu\n");
		printf("1.Tang dan.\n");
		printf("2.Giam dan.\n");
		printf("\n");
		printf("7.Tim kiem.\n");
		printf("1.Tim kiem tuyen tinh\n");
		printf("2.Tim kiem nhi phan\n");
		printf("\n");
		printf("8.Thoat\n");
		printf("Moi nhap vao lua chon");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				printf("moi nhap vao so luong phan tu");
				scanf("%d",&size);
				printf("moi nhap vao tung phan tu\n");
				addItem(arr,size);
				break;
			case 2:
				printf("danh sach cac gia tri trong mang\n");
				printfItem(arr,size);
				break;
			case 3:
				insertItem(arr,size);
				break;
			case 4:
				fixItem(arr,size);
				break;
			case 5:
				deletIndex(arr,size);
				size--;
				break;	
			case 6:
				printf("1.Tang dan.\n");
				printf("2.Giam dan.\n");
				printf("Moi nhap vao lua chon:");	
				scanf("%d",&select);
				arrangeIndex(arr,size,select);
				break;
			case 7:
				printf("1.linear search.\n");
				printf("2.binary search.\n");
				printf("Moi nhap vao lua chon");
				scanf("%d",&select);
				search(arr,size,select);
			break;	
			case 8:
				return 1;
				break;
			default:
				break;			
		}
	}while(choose !=8);
	return 0;
}
