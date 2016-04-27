#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> countEquals(vector<int> &a, int n, int m){
    vector<int> equals(m);
    for(int i = 0; i <m; i++){
        equals[i] = 0;
    }

    for(int i = 0; i <n; i++){
        equals[a[i]]++;
    }

    return equals;
}

vector <int> countLess(vector<int> &equals, int m){
    vector <int> less(m);

    less[0] = 0;
    for(int i = 1; i < m; i++)
    {
        less[i] = less[i - 1] + equals[i - 1];
    }

    return less;
}

void printRearrange(vector<int> &a, vector<string> &str, vector<int> &less, int n, int m){

    vector<int> b(n);
    vector <string> strB(n);

    for(int i = 0; i < n; i++){
        int key = a[i];
        string strV = str[i];

        int index = less[key];
        b[index] = key;
        strB[index] = strV;
        less[key]++;
    }

    for(int i = 0; i < n; i++){
        cout << strB[i] << " ";
    }
}

int main() {
    int n;
    cin>>n;
    vector <int> a(n); 
    vector <string> str(n); 
    int half = n / 2;
    string s;

    for(int i = 0; i < half; i++){
        cin>>a[i];
        cin>>s;
        str[i] = '-';
    }

    for(int i = half; i < n; i++){
        cin>>a[i];
        cin>>str[i];
    }

    vector<int> equals = countEquals(a,n,100);
    vector<int> less = countLess(equals, 100);
    printRearrange(a,str,less,n,100);

    return 0;
}

