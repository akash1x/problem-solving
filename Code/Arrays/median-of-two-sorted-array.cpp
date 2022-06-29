/*
1. Brute Force:- 
	1.  Apply merge of merge sort and get the combined sorted array 
	2. Find the median 
	TC=O(n+m)
	SC=O(n+m)
2. Counter Method:- 
	1. Apply merge sort but don't add it to new array keep track to the median positions eg 5, 6 is median index
	2. As soon as we get the median index copy the values in variables and find the median 
	TC=O(n+m)
	SC=O(1)
3. Binary Search Approach:-
	1.Find the elements that will be on left side and elements that will be on right side.
	2.Define partition
	 	int cut1=(low+high)/2;
     	int cut2= (n1+n2+1)/2 - cut1;
    3. Define the l1,l2 and r1,r2 from left and right partition
        	int l1= cut1==0?INT_MIN:nums1[cut1-1];
            int l2= cut2==0?INT_MIN:nums2[cut2-1];
        
            int r1= cut1==n1?INT_MAX:nums1[cut1];
            int r2= cut2==n2?INT_MAX:nums2[cut2];

    4. check this condition if(l1<=r2 && l2<=r1) this will return the result 
    5. if it fails update low and high values for binary search 
    TC= O(log(min(n1,n2)))
    SC=	O(1)


*/


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       if(nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1);
       
        int n1=nums1.size();
        int n2=nums2.size();
        int low=0;
        int high=n1;
        
        while(low<=high){
         
            int cut1=(low+high)/2;
            int cut2= (n1+n2+1)/2 - cut1;
        
            int l1= cut1==0?INT_MIN:nums1[cut1-1];
            int l2= cut2==0?INT_MIN:nums2[cut2-1];
        
            int r1= cut1==n1?INT_MAX:nums1[cut1];
            int r2= cut2==n2?INT_MAX:nums2[cut2];
            
            if(l1<=r2 && l2<=r1){
                if((n1+n2)%2==0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }else{
                    return max(l1,l2);
                }
            }else if(l1>r2){
                high=cut1-1;
            }else{
                low=cut1+1;
            }
        }
        
        
        return 0.0;
    }