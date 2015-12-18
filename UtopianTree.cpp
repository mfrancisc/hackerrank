#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
  int t;
  cin >> t;
  for(int a0 = 0; a0 < t; a0++){
    int n;
    cin >> n;
  int h = 1;
    for(int x = 1; x <= n; x++)
    {

      int res = x % 2;
      if(res != 0)
      {
        h *=2;
      }else{
        h +=1;
      }

    }
      cout << h << endl;;
  }
  return 0;
}


