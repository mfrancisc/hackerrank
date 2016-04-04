#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    stack<int> s; 
    int numbers;
    int n;
    int area;
    int maxArea = 0;

    cin >> numbers;

    int nArr[numbers];

    for(int i = 0; i < numbers; i++){
        cin >> nArr[i];
    }

    int li;
    int x;
    for(x = 0; x < numbers;){
        if(s.empty() || nArr[s.top()] <= nArr[x])
        {
            s.push(x++);  
        }else if(nArr[x] < nArr[s.top()]) {

            int top = s.top();
            s.pop();

            if(s.empty()){
                area = nArr[top] * x; 
            } else {
                area = nArr[top] * (x - s.top() - 1);
            }

            if(maxArea < area){
                maxArea = area;
            }
        }
    }


    while(!s.empty()) {
        int top = s.top();
        s.pop();

        if(s.empty()){
            area = nArr[top] * x; 
        } else {
            area = nArr[top] * (x - s.top() - 1);
        }

        if(maxArea < area){
            maxArea = area;
        }

    }

    cout << maxArea;

    return 0;
}

