/*
Ques: You are given an array of ‘N’ integers. You have to find the sum of all the subsets in the non-decreasing order of the given array.
Link: https://www.codingninjas.com/codestudio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

*/

#include<bits/stdc++.h>
using namespace std;

void subsetSum(vector<int> &arr,int n, int i,vector<int> &ans,int sum){

	if(i==n){
		//ans.push_back(sum);
		cout<<sum<<endl;
		return;
	}


	sum=sum+arr[i];
	subsetSum(arr,n,i+1,ans,sum);
	sum=sum-arr[i];
	subsetSum(arr,n,i+1,ans,sum);

}

int main(){
vector<int> arr;
int n;
cin>>n;
int x;

for(int i=0;i<n;i++){
cin>>x;
arr.push_back(x);	
}
vector<int> ans;
subsetSum(arr,n,0,ans,0);
}