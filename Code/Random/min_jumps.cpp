#include<bits/stdc++.h>
using namespace std;
    int minJumps(int arr[], int n){
        int count=0;
        int i=0;
        int travelled =0;
        int max=0,maxIndex=0;
        int currentElement = 0;
        while(i<n-1){
            currentElement = arr[i];
            if(currentElement == 0) return -1;
            if(travelled+arr[i]>=n){
                count++;
                break;
            }
            for(int j=i+1;j<=currentElement;j++){
                if(arr[j]>max){
                    max=arr[j];
                    maxIndex=j;
                }
            }
            travelled+=maxIndex-i;
            count++;
            i=i+travelled;
            max=0;
            maxIndex=0;

            
        }
        return count;
    }

int main(){
int arr[6]={1, 4, 3, 2, 6, 7};
cout<<minJumps(arr,6);
}