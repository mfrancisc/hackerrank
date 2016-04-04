/** 
 * 1 x  -Push the element x into the stack.
 * 2    -Delete the element present at the top of the stack.
 * 3    -Print the maximum element in the stack.
 * */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;



int main() {
    stack<int> s;
    stack<int> maxS;
    int testCases;
    cin >> testCases;

    int func;
    int n;

    for(int i = 0; i < testCases; i++)
    {
        cin >> func;
        switch ( func ) { 
            case 1:
                cin >> n;
                s.push(n);
                if(maxS.empty() || maxS.top() <= n){
                    maxS.push(n);
                }
                break;
            case 2:
                if(!s.empty())
                {
                    int last = s.top();
                    s.pop();
                    if(!maxS.empty() && maxS.top() == last){
                        maxS.pop();
                    }
                }
                break;
            case 3:
                cout << maxS.top() << endl;
                break;
        }
    }

    return 0;
}

