
#include<bits/stdc++.h>
using namespace std;

int arr[10];
int target =2;

void printSub(int i, vector<int> &subsequences,int n,int sum){
	if(i==n){
		if(sum==target){

		for(int i =0;i<subsequences.size();i++){
			cout<<subsequences[i]<<" ";
		}
		cout<<endl;
	}

		return;

}

	
	//Take the element in index i into subsequence
	subsequences.push_back(arr[i]);
	sum+=arr[i];
	printSub(i+1,subsequences,n,sum);

	//Not the element in index i into subsequence
	sum-=arr[i];
	subsequences.pop_back();
	printSub(i+1,subsequences,n,sum);


}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int> subsequences;
	printSub(0,subsequences,n,0);

}
