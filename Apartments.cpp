#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, a, k;
    cin >> p >> a >> k;
    vector<int> desired(p);
    for (int i = 0; i < p; i++) cin >> desired[i];

    vector<int> size(a);
    for (int i = 0; i < a; i++) cin >> size[i];

    int count = 0, j = 0, i = 0;
    sort(size.begin(),size.end());
    while(i<p && j<a){
        if (size[j] < desired[i] - k) {
            j++;                 
        } else if (size[j] > desired[i] + k) {
            i++;                
        } else {
            count++;            
            j++;
        }
    }
    cout << count;
    return 0;
}
/*
Compile & Run:
g++ -std=gnu++17 -O2 -Wall FILENAME.cpp -o FILENAME
./FILENAME

add input and output text:
./Template < input.txt > output.txt

*/
