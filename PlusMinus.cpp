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
  double pos = 0;
  double zero = 0;
  double negative = 0;
  vector<int> arr(n);
  for(int arr_i = 0;arr_i < n;arr_i++){
    cin >> arr[arr_i];
    if(arr[arr_i] > 0)
    {
      pos++; 
    }
    if(arr[arr_i] == 0)
    {
      zero++; 
    }
    if(arr[arr_i] < 0)
    {
      negative++; 
    }
  }
  cout << pos/n << endl;
  cout << negative/n << endl;
  cout << zero/n << endl;

  return 0;
}

