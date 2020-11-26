#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   int k;

   cin >> n;

   k= n*n;

   vector<int> data(k);

   for(int i=0; i<data.size(); i++) cin >> data.at(i);

   sort(data.begin(),data.end());


  for(int i=0; i<n; i++) {
      for(int j=0; j<n; j++) {
          cout << data.at(i*n +j);

          if(j != n-1)
            cout << " ";
      }
      cout << endl;
  }

    return 0;
}