// count the frequency of the numbers 
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    vector<int> ans1 = {1,1,4,2,2,3,4,5,5,5,5,5,5,5};

    sort(ans1.begin(), ans1.end());

    for (int i = 0; i < ans1.size(); ) {
        int count = 1;
        int current = ans1[i];
        while (i + count < ans1.size() && ans1[i + count] == current) {
            count++;
        }
        cout << "The count of " << current << " is " << count << endl;
        i += count;
    }
    return 0;
}