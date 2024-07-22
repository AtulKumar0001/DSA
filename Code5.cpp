// buy and sell the stock problem 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], maxProfit = 0;
        for(int i = 0; i<prices.size();i++){
            if(buy > prices[i]){
                buy = prices[i];
            }else if(prices[i] - buy > maxProfit){
                maxProfit =  prices[i] - buy;
            }
        }
        return maxProfit;
}
};
int main(){ 
    return 0;
}