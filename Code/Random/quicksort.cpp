#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int r){
	int pivot = arr[r]; //last element
	int i = l-1;

	for(int j=l;j<r;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}

	swap(arr[i+1],arr[r]);	
	return i+1;
}


void quickSort(int arr[],int l,int r){
	if(l<r){
		int pivot = partition(arr,l,r);
		quickSort(arr,l,pivot-1);
		quickSort(arr,pivot+1,r);
	}
}


int main(){
	int arr[5]={5,4,1,2,3};
	quickSort(arr,0,4);
	for(int ele: arr){
		cout<< ele <<" ";
	}
	return 0;
}