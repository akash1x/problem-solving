//Count the occurrence of the letters.

//Input
/*10 3
1 3 4 5 6 2 2 3 4 5 
2
1
4*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hasharr[N];

int main(){
int n,q;
cin>>n>>q;
int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
	hasharr[arr[i]]++;
}
while(q--){
	int x;
	cin>>x;
	cout<<hasharr[x]<<endl;
}
return 0;
}