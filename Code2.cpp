// count the frequency of the specific element 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans1 = {1,1,4,2,2,3,4,5,5,5,5,5,5,5};

    sort(ans1.begin(), ans1.end());

    int element;
    cout<<"Enter the element name: ";
    cin>>element;
    
    cout<<count(ans1.begin(),ans1.end(),element)<<endl;
    
    return 0;
}