#include<stdio.h>
void selection_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int small = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[small]){
				int tmp = arr[j];
				arr[j]=arr[small];
				arr[small]=tmp;
			}
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int elements=0;
	int arr[n];
	for(int i=0;;i++){
		scanf("%d",&arr[i]);
		elements++;
		char c;
		scanf("%c",&c);
		if(c =='\n'){
			break;
		}
	}
	selection_sort(arr,n);
	if(n==elements){
		for(int i=0;i<n;i++){
			if(i<n-1)
			printf("%d ",arr[i]);
			else
			printf("%d",arr[i]);
		}
		printf("\n");
	}
	else{
		printf("-1\n");
	}
}
