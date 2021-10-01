#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10005 , b = 100 ;

    int* p1 = &a;
    int* p2 = &b;

    cout << "Addition : " << a << " + " << b << " = " << (*p1 + *p2) << endl;
    return 0;
}