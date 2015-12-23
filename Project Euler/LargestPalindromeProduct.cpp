#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isValidNum(int maxLimit) {
  int valid = 0;
  for(int mi = 999; 100 <= mi; mi--)
  {
    for(int mx = 999; 100 <= mx; mx--)
    {
      int result = mi * mx;

      if(result == maxLimit)
      {
        valid = 1;
      };

    }
    if(valid) break;
  }

  return valid;
}


int main() {
  int testCases;
  cin >> testCases;

  int maxLimit;
  for(int cnt =0; cnt < testCases; cnt++)
  {
    cin >> maxLimit;


    int foundMax;
    int minVal;
    int maxVal;
    string maxString;
    int halfSizeS;

    for(; 101101 <= maxLimit; maxLimit--)
    {
      maxString = to_string(maxLimit);
      halfSizeS = maxString.size() / 2;

      foundMax = 0;
      for(int a = 0; a < halfSizeS; a++)
      {

        int backward = maxString.size() - a - 1;
        if(maxString[a] == maxString[backward])
        {
          foundMax++;
        }
      }

      if(foundMax == halfSizeS)
      {
        if(isValidNum(maxLimit)) 
        {
          break;

        }else{
          foundMax = 0;
        }
      }else {foundMax = 0;}

      if(foundMax != 0) break;

    }
    cout << maxLimit << endl;

  }
  return 0;
}

