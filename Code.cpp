#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_set>

#define ll long long

using namespace std;
 
int main() {
    unordered_set<int> x;
    int temp;

    for(int i = 0; i < 4; i++) {
        cin >> temp;
        x.insert(temp);
    }
    int size = x.size();
    
    cout << 4 - size;
    return 0;
}
