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
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
  int maxVal = 0;
  for(; l <= r ; l++){
    for(int x = l; x <= r; x++)
    {

      // This operation is performed between two bits (a and b). 
      // The result is 1 if either one of the two bits is 1, 
      // but not in the case that both are. There for, 
      // if neither or both of them are equal to 1 the result is 0.
      //
      // XOR (^)
      // a	b	a^b
      // 0	0	0
      // 0	1	1
      // 1	0	1
      // 1	1	0
      int maxCalc = l ^ x;

      if(maxCalc > maxVal)
      {
        maxVal = maxCalc;
      }
    }
  }
  return maxVal;
}

int main() {
  int res;
  int _l;
  cin >> _l;

  int _r;
  cin >> _r;

  res = maxXor(_l, _r);
  cout << res;

  return 0;
}

