#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n = 0;
    // cin >> n;
    // unordered_set<int> nums;
    // for(int i = 0; i<n;i++){
    //     int val;
    //     cin >> val;
    //     nums.insert(val);
    // }
    // cout << nums.size();

    vector<int> nums;
    int n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    int count = 0;
    for(int i = 0; i< n-1; i++){
        if(i==0 || nums[i] != nums[i+1]){
            count++;
        }
    }
    cout << count;
}
/*
Compile & Run:
g++ -std=gnu++17 -O2 -Wall FILENAME.cpp -o FILENAME
./FILENAME

add input and output text:
./Template < input.txt > output.txt

*/
