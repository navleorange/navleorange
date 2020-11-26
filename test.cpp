#include <bits/stdc++.h>

using namespace std;

#define MAX 26

int main()
{
  int n;
  int bad;
  int count = 0;
  int sum = 0;

  cin >> n;

  vector<int> good(n);
  vector<int> difference(n);

  for(int i=0; i<good.size(); i++) cin >> good.at(i);

  for(int i=0; i<good.size(); i++) {
      cin >> bad;
      difference.at(i) = good.at(i) - bad;
  }

  sort(difference.begin(), difference.end());
  reverse(difference.begin(), difference.end());

  while(count != difference.size()) {
      sum += difference.at(count);

      if(sum >=0 )
        count++;
      else
        break;
  }

  cout << count << endl;

    return 0;
}