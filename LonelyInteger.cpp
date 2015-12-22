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
int lonelyinteger(vector < int > a) {

  for(int cnt = 0; cnt < a.size(); cnt++)
  {
    int found = 0;
    for(int x = 0 ; x < a.size(); x++)
    {

      if(a[x] == a[cnt] && x != cnt)
      {
        found = 1;
      }
    }

    if(!found)
    {
      return a[cnt];
    }
  }
  return 0;
}
int main() {
  int res;

  int size;
  cin >> size;
  vector<int> values;
  int item;
  for(int i=0; i<size; i++) {
    cin >> item;
    values.push_back(item);
  }

  res = lonelyinteger(values);
  cout << res;

  return 0;
}

