// erase the element 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans1 = {1,1,4,2,2,3,4,5,5,5,5,5,5,5};

    int number = -1;
    cout<<endl;
    cout<<"Enter the index number"<<endl;
    cin>>number;
    ans1.erase(ans1.begin()+number);

    cout<<endl;
    for(auto it:ans1){
        cout<<it<<" ";
    }
    
    return 0;
}