#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // your code here
    int n = 0;
    cin >> n;
    int max = 0;
    for(int i = 0; i < n; i++){
        int x = 0;
        cin >> x;
        if(max < x){
            max = x;
        }
    }
    cout << max;
}
/*
Compile & Run:
g++ -std=gnu++17 -O2 -Wall FILENAME.cpp -o FILENAME
./FILENAME

add input and output text:
./Template < input.txt > output.txt

*/
