#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  int t;

  cin >> t;

  int first;
  int second;
  for(int x =0; x < t; x++){

    cin >> first;
    cin >> second;

    // we find the sqrt of end points
    // then floor rounds by one down
    // ceil rounds by one up
    // the difference between thme + 1(because we rounded first up by one)
    //
    // see : https://www.hackerrank.com/challenges/sherlock-and-squares/forum
    
    cout << (int)(floor(sqrt(second))-ceil(sqrt(first))+1) << endl;

  }

  return 0;
}

