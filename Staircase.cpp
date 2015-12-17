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
  int n;
  cin >> n;
  vector <string> stairs(n);
  int st = 1;
  for(int x = 0 ;x <= n; x++, st++)
  {
    stairs[x] += std::string(st, '#') ;
    stairs[x] = std::string(n - st, ' ') + stairs[x];
    cout << stairs[x] << endl;
  }
  return 0;
}


