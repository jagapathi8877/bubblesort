/*
 * Bubble Sort Implementation in C
 * Author: jagapathi8877
 * Date: September 9, 2025
 */
#include<stdio.h>
int i,j;
void print_array(int arr[],int n){
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
void sort(int arr[],int n){
	for(i=0;i<n;i++){
		int swap = 0;
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swap = 1;
			}
		}
		if(swap){
			printf("PASS :",i+1);
			print_array(arr,n);
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
}
