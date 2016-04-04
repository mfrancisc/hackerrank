#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

string result;
stack<string> resStack;

void append(string str){
   result = result + str; 
    resStack.push(result);
}

void erase(int k){
   stack<char> s; 
   for(int i = 0; i < result.size(); i++){
       s.push(result[i]);
   } 
    
   for(int i = 0; i < k; i++){
       s.pop();
   } 
    string newResult = "";
   while(!s.empty()){
       char l = s.top();
       newResult = l + newResult;
       s.pop();
   }
    
    result = newResult;
    resStack.push(result);
}

void get(int k){
    cout << result.at(k - 1) << endl;
}

void undo(){
   resStack.pop();
    if(!resStack.empty()){
    result = resStack.top();
    }else{
        result = "";
    }
}
int main() {
    result = "";
    int testCases;
    cin >> testCases;
    
    int func;
    string str;
    for(int n = 0; n < testCases; n++){
        cin >> func;
        if(func != 4){
            cin >> str;
        }
       int k; 
       switch ( func )
      {
         case 1:
             append(str);
           break;
         case 2:
           k = stoi(str);
            erase(k);
           break;
         case 3:
           k = stoi(str);
             get(k);
           break;
         case 4:
            undo();
           break;
      }
    }
    
    return 0;
}

