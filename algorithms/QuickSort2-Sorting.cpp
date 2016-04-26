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

vector <int> Partition(vector <int> arr,int start,int end){

    if(start >= end - 1) return arr;

    int pivot = start;

    vector <int> left;
    vector <int> right;

    for(int x = start + 1; x < end; x++){
        if(arr[x] <= arr[pivot]){
            left.push_back(arr[x]);
        } else{
            right.push_back(arr[x]);
        }
    }


    vector <int> leftT = Partition(left, 0, left.size());
    vector <int> rightT =  Partition(right, 0, right.size());

    vector <int> result;
    leftT.push_back(arr[pivot]);
    for(int i = 0; i < leftT.size(); i++){
        cout<< leftT[i] << " ";
        result.push_back(leftT[i]);
    }

    for(int i = 0; i < rightT.size(); i++){
        cout<< rightT[i] << " ";
        result.push_back(rightT[i]);
    }
    cout << endl;

    return result;
}

void quickSort(vector <int> &arr,int start,int end) {

    arr = Partition(arr, start, end);
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr,0,n);

    return 0;
}

