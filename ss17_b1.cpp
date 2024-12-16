#include<stdio.h>
void addItem(int arr[], int *size);
void showItem(int arr[], int *size);
void lengthCal(int *size, int *length);
void sumCal(int arr[], int *size, int *sum);
void largestNumber(int arr[], int *size,int *max);
int main(){
	int choose;
	int arr[100];
	int size;
	int length;
	int sum=0;
	do{
		printf("\n--------------------MENU--------------------\n");
		printf("1. Nhap vao so phan tu va tung phan tu\n");
		printf("2. Hien thi cac phan tu trong mang\n");
		printf("3. Tinh do dai mang\n");
		printf("4. Tinh tong cac phan tu trong mang\n");
		printf("5. Hien thi pha tu lon nhat\n");
		printf("6. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d",&choose);
		
		switch(choose){
			case 1: {
				addItem(arr,&size);
				break;
			}
			case 2: {
				showItem(arr,&size);
				break;
			}
			case 3: {
				lengthCal(&size,&length);
				break;
			}
			case 4: {
				sumCal(arr,&size,&sum);
				break;
			}
			case 5: {
				int max;
				largestNumber(arr,&size,&max);
				break;
			}
			case 6: {
				printf("Thoat chuong trinh");
				break;
			}
			default: {
				printf("Khong hop le");
				break;
			}
		}
	}while(choose!=6);
}
void addItem(int arr[], int *size){
	printf("Nhap so phan tu: ");
	scanf("%d",&*size);
	for(int i=0; i<*size; i++){
		printf("arr[%d]= ",i);
		scanf("%d", &arr[i]);
	}
}

void showItem(int arr[], int *size){
	printf("Cac phan tu trong mang la: ");
	for(int i=0; i<*size; i++){
		printf("%d ",arr[i]);
	}
}
void lengthCal(int *size, int *length){
	*length= *size;
	printf("Do dai mang la: %d", *length);
}
void sumCal(int arr[], int *size, int *sum){
	for(int i=0; i<*size; i++){
		*sum+=arr[i];
	}
	printf("Tong cac phan tu la: %d", *sum);
}
void largestNumber(int arr[], int *size,int *max){
	arr[0]= *max;
	for(int i=0; i<*size; i++){
		if(arr[i]>*max){
			*max= arr[i];
		}
	}
	printf("Phan tu lon nhat la: %d ", *max);
}
