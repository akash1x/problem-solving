#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	//Base Case
	if(n==0) return 1;

	int smallerProbelm=fact(n-1);
	int biggerProblem= n* smallerProbelm ;
	return biggerProblem;

	//OR

	//return n* fact(n-1);

}


int main(){
	cout<<fact(5);
}