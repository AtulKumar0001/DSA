// move zeroes to the end 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j<nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i],nums[j]);
                i++;
            }
  }
}
};
int main(){ 
    return 0;
}