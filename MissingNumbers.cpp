#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 10000

int main() {
    int n,m;
    int A[MAX];
    fill(A, A+MAX, 0);
    int B[MAX];
     fill(B, B+MAX, 0);
    cin>>n;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        A[x]++;
    }
    cin>>m;
    for(int i = 0; i < m; i++){
        cin>>x;
        B[x]++;
    }
    
    vector<int> r;
    for(int i = 0; i < MAX; i++){
        if(A[i] < B[i]){r.push_back(i);}
    }
    sort(r.begin(), r.end());
    
    while(!r.empty()) {
        cout << r.front() << " ";
        r.erase(r.begin());
    }
    
    return 0;
}

