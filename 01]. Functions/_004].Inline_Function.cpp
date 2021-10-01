#include <bits/stdc++.h>
using namespace std;

// inline keyword is used to repeplace the code in function at function call position
inline int sum(int a, int b){
    return a + b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10, b = 535 ;

    cout <<"a: " << a << endl;
    cout <<"b: " << b << endl;

    cout << "a + b = " << sum(a, b) << endl;
    return 0;
}