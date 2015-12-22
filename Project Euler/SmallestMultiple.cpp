#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int testCases;
  cin >> testCases;

  for(int x = 0; x < testCases; x++)
  {
    int n;
    cin >> n;
    int found = 0;
    int number = n;
    while(true)
    {
      int rest = 0;
      for(int i = 1; i <= n; i++ )
      {
        rest = number % i;
        if(rest != 0) break;
      }
      if(rest == 0)
      {
        found = number;
        break;
      }

      number++;
    }

    cout << found << endl;
  }
  return 0;
}

