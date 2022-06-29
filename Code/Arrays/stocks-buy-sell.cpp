/*
Ques: You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different 
day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Input: prices = [7,1,5,3,6,4]
Output: 5

Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


1st Approach (Brute Force):- 
    1. 1st loop from i=0 2nd loop from j=i+1 and check for the profits 
    2. End we will hav max profit 

    TC= O(N^2)

2nd Approach (Using extra space):-
    prices=[5,2,6,1,4]
    start from end and put the max
    auxarr=[6,6,6,4,4]

    Now calculate the differece between two arr and find the profit 
    --> end of the iteration we will have max profit
    TC= O(N)
    SC= O(N)

3rd Approach (without using extra space):-
    1. Iterate the prices arr maintain a min element so far (min_till_now) also maintain max_profix
    2. Compare the min_till_now with current element and update the min_till_now
    3. Calculate the profit: prices[i]-min_till_now
    4. Update the max_profixt by comparing max_profixt with 3rd step profit 


    TC= O(N)
    SC= O(1)
*/   



   int maxProfit(vector<int>& prices) {
    int min_till_now=prices[0];
    int max_profit=0;    
    
    for(int i=1;i<prices.size();i++){
        min_till_now= min(min_till_now,prices[i]);
        int profit = prices[i]-min_till_now;
        max_profit=max(profit,max_profit);
    }    
    
        return max_profit;
    }

