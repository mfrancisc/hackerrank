#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

/**
 * this program takes t big integers,
 * makes to total sum
 * and outputs the first 10 digits of the total sum
 *
 * 
 **/

int main() {
  int t;

  //nr of big integers to sum
  cin >> t;

  string largeN;
  string oldResult;
  string result;
  int rest;
  int partSum;

  // saving first big integer as initial total sum
  cin >> result;
  int toAdd = 0;

  // one big int is already saved
  int tests = t - 1;


  for(int i = 0; i < tests; i++)
  {
    // reading big int
    cin >> largeN;

    // adding leading zeros to have result and largeN
    // with same size
    // result: 23455666
    // largeN: 00012346
    int rs = result.size();
    int leadingZeros = rs - largeN.size();
    largeN = string(leadingZeros, '0').append(largeN);

    // saving oldResult before
    // replacing it with the new sum
    oldResult = result;
    result = "";

    // sum of all digits starting from the last one
    for(int x = rs - 1; 0 <= x; x--)
    {

      //char to int: string - '0' ('0' is 48)
      char olnr = oldResult[x];
      int oldR = olnr - 48;

      char larnr = largeN[x];
      int larN = larnr - 48;

      partSum = oldR + larN + toAdd;

      //if is not the last digit to sum (the first one in the big int)
      if(x != 0) {

        // if the sum has res
        // we save the rest to add it after
        rest = partSum - 10;
        if(rest < 0)
        {
          result = to_string(partSum) + result;
          toAdd = 0;
        }else if (rest >= 0)
        {
          result = to_string(rest) + result;
          toAdd = 1;
        }
      }else {

        // if is the last one to sum we prepend it
        // we don't need to save the rest
        result = to_string(partSum) + result;
      }


    }



  }
  cout << result.substr(0, 10);;

  return 0;
}

