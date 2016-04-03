#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack> 
using namespace std;

bool isBalanced(string testCase){
    char c;
    stack<char> s;
    
    for(int n = 0; n < testCase.size(); n++){
       c = testCase[n];
        if(c == '(' || c == '[' || c == '{')
            {
            s.push(c);
        } else {
          
            
            if( s.empty() ){
                return false;
            }
            
            char top = s.top();
            if((top == '(' && c == ')') ||  (top == '[' && c == ']') ||  (top == '{' && c == '}')) {
                s.pop();
            }
        }
    }
    
    if(s.empty()){
        return true;
    }else{
        return false;
    }
    
}

int main() {
    int cases;
    cin >> cases;
    
    string testCase;
    
    for(int n = 0; n < cases; n++){
        cin >> testCase;
        if(isBalanced(testCase)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

