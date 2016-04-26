#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int swaps;
int shifts;

int partition(vector <int> &arr, int start, int end){
    int q = start;
    int temp;
    for(int u = start; u < end; u++){
        if(arr[u] <= arr[end]){
            temp = arr[q];
            arr[q] = arr[u];
            arr[u] = temp;
            q++;
            swaps++;
        }
    }
    temp = arr[q];
    arr[q] = arr[end];
    arr[end] = temp;
    swaps++;

    return q;
}

void quickSort(vector <int> &arr, int start, int end){

    if(start >= end) return;

    int q = partition(arr, start, end);
    quickSort(arr, start, q - 1);
    quickSort(arr, q + 1, end);
}

void insertionSort(vector <int> &ar) {

    int j = 1;
    int key;
    int i;
    for(; j < ar.size(); j++){
        key = ar[j];
        i = j - 1;

        while(i >= 0 && ar[i] > key){
            ar[i + 1] = ar[i];
            i = i - 1;
            shifts++;
        }

        ar[i + 1] = key;
    }

}

int main() {
    int ar_size;
    cin>>ar_size;

    vector <int> arr(ar_size);
    for(int i = 0; i < ar_size; i++){
        cin>>arr[i]; 
    }

    swaps = 0;
    vector <int> arrQ = arr;
    quickSort(arr, 0, ar_size - 1);

    shifts = 0;
    insertionSort(arrQ);

    cout << shifts - swaps;

    return 0;
}

