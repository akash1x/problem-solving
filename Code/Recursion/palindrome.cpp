#include<bits/stdc++.h>
using namespace std;
string s;
	
bool palindrome(int i){

	if(i>=s.size()/2) return true;

	if(s[i]!=s[s.size()-i-1]) return false;

	return palindrome(i+1);
}

int main(){
	cin>>s;
	if(palindrome(0)){
		cout<<"yes";
	}else{
		cout<<"No";
	}	
}