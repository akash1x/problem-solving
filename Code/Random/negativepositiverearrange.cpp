#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
	int pivot = 0;
	int i=-1;
	for(int j=0;j<n;j++){
		if(arr[j]<pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}

}

int main(){
	int arr[9]={-1 ,0,-3, -7, 4, 5, 6, 2, 8  };
	rearrange(arr,9);
	for(int ele: arr){
		cout<< ele<< " ";
	}
}
