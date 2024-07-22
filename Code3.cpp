// remove the duplicate elements 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans1 = {1,1,4,2,2,3,4,5,5,5,5,5,5,5};

    set<int> Non;
    for(int i = 0; i<ans1.size(); i++){
        Non.insert(ans1[i]);
    }
    for(auto it:Non){
        cout<<it;
    }
    
    return 0;
}