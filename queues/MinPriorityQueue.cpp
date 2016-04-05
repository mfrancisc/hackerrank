#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    int cookies;
    int minSweetnes;

    cin >> cookies;
    cin >> minSweetnes;

    priority_queue<int, std::vector<int>, std::greater<int> > ck;
    int c;

    for(int i = 0; i < cookies; i++){
        cin >> c;
        ck.push(c);
    }

    int op = 0;

    while(ck.top() < minSweetnes){
        int first = ck.top();
        ck.pop();

        if(ck.size() < 1){
            op = -1;
            break;
        }

        int second = ck.top();
        ck.pop();

        int tempSum = first + (second * 2);
        op++;

        ck.push(tempSum);

        if (ck.size() == 1 && ck.top() < minSweetnes){
            op = -1;
            break;
        }
    }

    cout << op << endl;

    return 0;
}

