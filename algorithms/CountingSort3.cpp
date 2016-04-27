#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> countEquals(vector <int> &a, int n, int min, int max){
    vector <int> equals (max - min + 1);

    for(int i = min; i <= max; i++){
        equals[i] = 0;
        //cout << i << " ";
    }

    for(int i = 0; i < n; i++){
        equals[a[i]]++;
    }

    return equals;
}

void printLessEquals(vector <int> &equals,int min, int max){
    vector <int> less(max - min + 1);

    less[min] = equals[min];
    cout << less[0] << " ";
    for(int i = min + 1;i <= max; i++  ){
        less[i] = less[i - 1] + equals[i];
        cout << less[i] << " ";
    }
}

int main() {
    int n;
    cin>>n;

    vector<int> a(n);
    string s;
    int min = 0;
    int max = 99;
    for(int i = 0; i < n; i++){
        cin>>a[i]; cin>>s;
    }

    vector <int> equals = countEquals(a,n,min,max );
    printLessEquals(equals,min, max);

    return 0;
}

