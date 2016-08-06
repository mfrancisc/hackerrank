#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string numberInWords[30]  = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen", "twenty","twenty one","twenty two","twenty three", "twenty four","twenty five","twenty six",
    "twenty seven", "twenty eight", "twenty nine"};

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    if(m==0) cout << numberInWords[h] << " o' clock" << endl;
    if(m==1) cout<< numberInWords[m] + " minute past " + numberInWords[h] << endl;
    if(m==15) cout<< "quarter past " + numberInWords[h] << endl;
    if(m<30 && m>1 && m!= 15) cout<< numberInWords[m] + " minutes past " + numberInWords[h] << endl;
    if(m==30) cout << "half past " + numberInWords[h] << endl;
    if(m>30 && m != 45) cout << numberInWords[60-m] + " minutes to " + numberInWords[h+1] << endl;
    if( m == 45) cout << "quarter to " + numberInWords[h+1] << endl;
    
    return 0;
}

