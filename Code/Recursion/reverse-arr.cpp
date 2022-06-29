
#include<bits/stdc++.h>
using namespace std;

int arr[10];


// 2 pointers
void reverseFunc(int l,int r){

	if(l>=r) return;
	swap(arr[l],arr[r]);

	reverseFunc(l+1,r-1);
}

//1 pointer
void reverseFunc2(int i,int n){

	if(i>=n/2) return;

	swap(arr[i],arr[n-i-1]);

	reverseFunc2(i+1,n);
}


int main(){

	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	//reverseFunc(0,n-1);
	reverseFunc2(0,n);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}