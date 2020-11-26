#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ULLI;

int main()
{
    ULLI a, b, x;
    ULLI ng = pow(10,9) + 1;
    int ok = -1;
    ULLI search;
    ULLI result;

    cin >> a >> b >> x;

    while(abs(ng-ok) > 1) {
        search = (ng + ok)/2;

        result = a * search + b * (log10(search)+1);

        if(result > x)
            ng = search;
        else
            ok = search
         
    }

    cout << ok << endl;

    return 0;
}