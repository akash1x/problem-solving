/*
Sub sequence: A contigous or non-contigous sequences which follows the order of the array.

n=3 we will have 2^3 ie 8 subsequences.

[3,1,2]
{} yes
3 yes
1 yes
2 yes
3,1 yes
1,2 yes
3,2 : No, as order is not maintained.
3,1,2 yes



Below structure is widely use please remember it.
TC=O(2^n x n)
SC=O(n)
*/


#include<bits/stdc++.h>
using namespace std;

int arr[10];

void printSub(int i, vector<int> &subsequences,int n){
	if(i==n){
		for(int i =0;i<subsequences.size();i++){
			cout<<subsequences[i]<<" ";
		}
		if(subsequences.size()==0) cout<<"{}";
		cout<<endl;
		return;
	}
	
	//Take the element in index i into subsequence
	subsequences.push_back(arr[i]);
	printSub(i+1,subsequences,n);

	//Not the element in index i into subsequence
	subsequences.pop_back();
	printSub(i+1,subsequences,n);


}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	vector<int> subsequences;
	printSub(0,subsequences,n);

}
