#include <bits/stdc++.h>
using namespace std;

float SimpleIntrest(int a , int c, float b = 10.0 ){
    return((a*b*c)/100);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p = 100000 ;
    int t = 2 ;

    cout << "p = " << p << endl ;
    cout << "t = " << t << endl ;

    cout <<"Simple Intrest using default values :- " << SimpleIntrest(p,t) << endl ;

    int r = 15.0 ;
    cout << "Using Give Arguments r = " << r << " simple intrest is " << SimpleIntrest(p,r,t) << endl ;

    return 0;
}