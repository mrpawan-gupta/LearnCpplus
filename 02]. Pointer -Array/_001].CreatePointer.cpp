#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10005 ;

    int* p = &a ; // pointer declaration

    cout << " value of a = " << a << endl;
    
    cout << " value of a = " << *p << endl; // pointer derefrencing
    return 0;
}