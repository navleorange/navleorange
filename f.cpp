#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ULLI;

ULLI work(vector<ULLI> &data, ULLI count, ULLI t_max,ULLI n,ULLI sum, ULLI t, ULLI max_count, ULLI sum_max, ULLI i)
{
    if(i == n) {
        if(sum <= t && sum_max < sum && max_count < count) {
            max_count=count;
            sum_max = sum;
        }
    }

    if(sum > t)

}

int main()
{
    ULLI n, t;
    ULLI t_max;
    ULLI count=0;
    ULLI max_count=0;
    ULLI i;
    ULLI sum =0;
    ULLI sum_max = 0;

    cin >> n >> t;

    vector<ULLI> data(n);

    for(int i=0; i<data.size(); i++) { cin >> data.at(i); t_max+=data.at(i);}


  
  return 0;
}
