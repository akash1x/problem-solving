/*

Two ways to solve this problem:- 
1. Parameterized way
2. Functional way

*/


//Parameterized

void sum(int n,int sum){
	if(n<1) {
		cout<<sum;
		return;
	} 
	sum(n-1,sum+n);
}

//Functional

int sum(int n){
	if(n==0) return 0;
	return n+ sum(n-1);
}