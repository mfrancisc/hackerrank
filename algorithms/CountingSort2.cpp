#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> countEquals(vector <int> &ar, int n, int m){
    vector<int> equals(m);

    for(int i = 0; i < m; i++){
        equals[i] = 0;
    }

    for(int i = 0; i < n; i++){
        equals[ar[i]]++;
    }

    return equals;

}

vector <int> countSum(vector <int> &equals,int m){
    vector <int> sum(m);

    sum[0] = 0;
    for(int i = 1; i < m; i++){
        sum[i] = sum[i - 1] + equals[i - 1];
    }

    return sum;

}

vector <int> rearrange(vector <int> &ar, vector <int> &sum, int n, int m){
    vector <int> b(n);

    for(int i = 0; i < n; i++){
        int key = ar[i];
        int index = sum[key];
        b[index] = key;
        sum[key]++;
    }

    return b;
}

void print(vector <int> &b){
    for(int i = 0; i < b.size(); i ++){
        cout << b[i] << " ";
    }
}

int main() {
    int n;
    cin>>n;

    vector<int>ar(n);
    for(int i = 0; i < n; i++){
        cin>>ar[i];
    }

    vector<int> equals(100);
    equals = countEquals(ar, n, 100);

    vector<int> sum(100);
    sum = countSum(equals, 100);

    vector<int> b(n);

    b = rearrange(ar, sum, n, 100);

    print(b);

    return 0;
}

