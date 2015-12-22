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

    int rot;
    int len;
    char a;
    string s;
    cin >> len;
    cin >> s;
    cin >> rot;
    string cryptString = "";
    for(int i = 0; i < len; i++){
        char letter = s[i];
        if(isalpha(letter)){
            a = isupper(letter)?'A':'a';

            //if we add 1 to z or Z
            //it has to return to a or A
            //when to tot number is > 26 we begin from start
            letter= a + (letter - a + rot)%26;
        }

        cryptString += letter;
    }

    cout << cryptString << endl;

    return 0;
}

