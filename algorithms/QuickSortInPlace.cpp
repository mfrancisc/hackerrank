#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector <int> &arr, int start, int end){

    int q = start;
    int temp;

    for(int u = start; u < end; u++){
        if(arr[u] <= arr[end]){
            temp = arr[u];
            arr[u] = arr[q];
            arr[q] = temp;
            q++;
        }
    }
    temp = arr[q];
    arr[q] = arr[end];
    arr[end] = temp;

    return q;

}

void print(vector <int> &arr){
    for(int x= 0; x < arr.size(); x++){
        cout<<arr[x] << " ";
    }
    cout << endl;
}

void quickSort(vector <int> &arr, int start, int end){
    if(start >= end) return;

    int q = partition(arr, start, end);
    print(arr);
    quickSort(arr, start, q -1);
    quickSort(arr, q + 1, end);
}

int main() {
    int ar_size;
    cin>>ar_size;

    vector<int> arr(ar_size);

    for(int x= 0; x < arr.size(); x++){
        cin>>arr[x];
    }

    quickSort(arr, 0, ar_size -1);

    return 0;
}

