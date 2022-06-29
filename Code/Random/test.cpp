#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> res(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans =0;
    
    
    // 1 2 7 4 6 8 7 8
    //               i        

    for(int i=1;i<arr.size();i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }else{
            arr.push_back(arr[i-1]);
            ans++;
        }
    }
    
    cout<<ans;
    
    return 0;
}