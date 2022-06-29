/*
Ques: Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Link: https://leetcode.com/problems/sort-colors/

1st approach:- 
sorting TC = O(nlogn);

2nd approach:- 
counting sort

3rd approach:- 
Ducth National Flag Algorithm 
--> Use three pointers low=0,mid=0,high=n-1.
--> Everything between 0 - low =0
--> Everything between low-mid =1
--> Everything between high - n-1 =2

TC= O(N)


[2,0,2,1,1,0]
 l         h
 m
*/


void sort012(int *arr, int n)
{
	int low =0;
    int mid =0;
    int high = n-1;
    
   while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}