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
  int m;
  cin >> n >> m;
  vector<string> topic(m);
  vector<string> topicKnown;
  for(int i = 0;i < m;i++){
    cin >> topic[i];
  }


  //fisrt person
  for(int a = 0; a < n; a++)
  {

    //second person
    for(int g = a + 1; g < n; g++)
    {
      string lineTopic = "";
      //topics
      for(int b =0; b < m; b++)
      {
        if(topic[a][b] == '1' || topic[g][b] == '1' )
        {
          lineTopic += '1';
        }
      }

      topicKnown.push_back(lineTopic);

    }


  }

  // max topics
  int topicRes = 0;
  for(int r = 0; r < topicKnown.size(); r++)
  {
    int topicTot = count(topicKnown[r].begin(), topicKnown[r].end(), '1');
    if(topicTot >= topicRes)
    {
      topicRes = topicTot;
    }
  }

  //total teams that knows max topics
  int teams = 0;
  for(int r = 0; r < topicKnown.size(); r++)
  {
    int topicTot = count(topicKnown[r].begin(), topicKnown[r].end(), '1');
    if(topicTot == topicRes)
    {
      teams++;
    }
  }

  cout << topicRes << endl;
  cout << teams << endl;


  return 0;
}




