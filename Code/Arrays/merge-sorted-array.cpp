/*
Approach:- 
1. check the first element of 2nd array with element of 1st array if 1st array element is greater swap
2. sort the 2nd array
3. 2nd array will have sort elements and the first element of 2nd array will be greater than last element of 1st arr
    i.e arr2[0]>arr1[n-1]
    there just pushback the element of arr2 to arr1
    TC= O(mlogn)+O(n);

 2nd Approach(GAP algorithm )   TC= O(nlogn) 

*/


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
       
        for(int i=0;i<m;i++){
            if(nums1[i]>nums2[0]){
                 swap(nums2[0],nums1[i]);
                 sort(nums2.begin(),nums2.end());
            }
        }
        nums1.resize(m);
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
   
    }