#include <bits/stdc++.h>
using namespace std;

//function for adition of two numbers ;


int sum (int value1 , int value2){
    // function declaration 
    return value1 + value2;
}

// main function
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int a = 10 ;
    int b = 10 ;

    // function calling

    cout << a << " + " << b << " = " << sum(a, b) << endl;
    return 0;
}