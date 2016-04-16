#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void insertionSort(int ar_size, int *  ar) {

    int j = 1;
    int key;
    int i;
    for(; j < ar_size; j++){
        key = ar[j];
        i = j - 1;

        while(i >= 0 && ar[i] > key){
            ar[i + 1] = ar[i];
            i = i - 1;

        }

        ar[i + 1] = key;

        for(int x = 0; x < ar_size; x++) cout << ar[x] << " ";
        cout << endl;
    }

}


int main(void) {

    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);

    return 0;
}

