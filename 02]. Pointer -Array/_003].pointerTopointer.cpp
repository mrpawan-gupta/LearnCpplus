#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10005 ;

    cout << " value of a = " << a << endl;

    int* p = &a ;

    cout << " (pointer) value of a = " <<*p << endl;

    int** p2 = &p ;

    cout <<"Adress of a = " << &a << endl;

    cout << " (pointer) value of &a = " << *p2 << endl;

    cout << " pointer to pointer of a = " << **p2 << endl;


    return 0;
}