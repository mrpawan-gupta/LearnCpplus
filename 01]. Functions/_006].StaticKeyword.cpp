#include <bits/stdc++.h>
using namespace std;

int series(int x){
    static int c = 0; // put one time the value of c == 0 
    c++; // updation
    cout << "Num" << c << " : " << c << endl;

    if(x==1) return 0 ;
    else return series(x-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 15 ;

    cout << "input value of limit : " << a << endl;

    cout << series(a);

    return 0;
}