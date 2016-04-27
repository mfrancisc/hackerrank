#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_countKeysEqual(vector<int> &ar){

    vector<int> equals(100);

    for(int i = 0; i < 100; i++){
        equals[i] = 0;
    }

    for(int a = 0; a < ar.size(); a++){
        equals[ar[a]]++;
    }

    for(int a = 0; a < 100; a++){
        cout << equals[a] << " ";
    }
}

int main() {
    int n;
    cin>>n;

    vector<int>ar(n);

    for(int x = 0; x < n; x++){
        cin>>ar[x];
    }

    print_countKeysEqual(ar);

    return 0;
}

