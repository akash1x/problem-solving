#include<bits/stdc++.h>
using namespace std;
int arr[10]={9,1,6,7};
void merge(int l, int r,int mid){
    int l_size=mid-l+1;
    int r_size=r-mid;
    int L[l_size];
    int R[r_size];
    for(int i=0;i<l_size;i++){
        L[i]=arr[i+l];
    }
    
    for(int i=0;i<r_size;i++){
        R[i]=arr[i+mid+1];
    }
    L[l_size]=R[r_size]=INT_MAX;
    int l_index=0;
    int r_index=0;
    for(int i=0;i<=r;i++){
        if(L[l_index]<=R[r_index]){
            arr[i]=L[l_index];
            l_index++;
        }else{
            arr[i]=R[r_index];
            r_index++;
        }
    }
}

void mergeSort(int l, int r){
    if(l==r) return;
    int mid = (l+r)/2;
    mergeSort(l,mid);
    mergeSort(mid+1,r);
    merge(l,r,mid);
}

int main(){
    
    mergeSort(0,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}