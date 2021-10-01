#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b ;

    cout << "Enter First Number : ";
    cin >> a;

    cout << "Enter Second Number : " ;
    cin >> b;

    cout << "Arithmetic Operators : + - * / %" << endl;

    cout << " + " << (a+b) << endl;
    cout << " - " << (a-b) << endl;
    cout << " / " << (a/b) << endl;
    cout << " * " << (a*b) << endl;
    cout << " % " << (a%b) << endl;

    return 0;
}