/*
1st Approach(Brute Force) TC=O(N); 

2nd Approach:-
-->power n is even:- 
				1. x= x*x
				2. n=n/2;
-->power n is odd:- 
				1. ans=ans*x
				2. n=n-1

TC= O(logn)
*/

class Solution {
public:
    double myPow(double x, int n) {
    double ans =1.0;
    long long nn=n;  // long long because if we convert -ve to positive at the end range we will get overflow issues.	
    if(nn<0) nn=-1*nn;    
    while(nn>0){
        if(nn%2==0){
            x=x*x;
            nn=nn/2;
        }else{
            ans=ans*x;
            nn=nn-1;
        }
    }    
    if(n<0){
        ans=1/ans;
    }    
    return ans;  
    }
};