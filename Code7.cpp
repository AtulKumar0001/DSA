// find the maximum gap 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 1){
            return 0;
        }

        int maxGap = INT_MIN;
        for(int i = 1; i<nums.size();i++){
            int element = nums[i] - nums[i-1];
            maxGap = max(maxGap,element);
        }
        return maxGap;
}
};