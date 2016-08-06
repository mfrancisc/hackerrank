#include <iostream>

using namespace std;

int main() {
   long int t,res,n;
    res = 3;
    n = 1;
    cin>>t;
    long int preRes = res;
    long int prevN = n;
    while(n<=t){
        preRes = res;
        prevN = n;
        
        res *= 2;
        n = res-2;
        
    }
    
    cout << preRes - (t - prevN) << endl;
    
    return 0;
}

