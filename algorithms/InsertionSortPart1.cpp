#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector <int>  ar) {

    int j = 1;
    int key;
    int i;
    for(; j < ar.size(); j++){
        key = ar[j];
        i = j - 1;

        while(i >= 0 && ar[i] > key){
            ar[i + 1] = ar[i];
            i = i - 1;

            for(int x = 0; x < ar.size(); x++) cout << ar[x] << " ";
            cout << endl;
        }
        ar[i + 1] = key;

    }

    for(int x = 0; x < ar.size(); x++) cout << ar[x] << " ";
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}

