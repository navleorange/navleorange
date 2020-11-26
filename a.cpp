#include <bits/stdc++.h>

using namespace std;

int main()
{
  double a, b, c;
  double sum;
  double s_a, s_b, s_c;

  cin >> a >> b >> c;
  sum = a+b+c;

  s_a = (a / sum) * (100 -a);
  s_b = (b / sum) * (100-b);
  s_c = (c / sum) * (100-c);

  printf("%.10f\n",s_a + s_b + s_c); 

  return 0;
}