#include <bits/stdc++.h>
using namespace std;

// call by value function from
// funtion declaration

/*
val1 == a ; ----> value of a goes to val1
val2 == b ; ----> value of b goes to val2
*/

int multiple(int val1 , int val2){
    return val1*val2 ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10 ;
    int b = 10 ;

    cout << "a: " << a << endl ;
    cout << "b: " << b << endl ;

    cout << "a * b = " << multiple(a,b) << endl ;

    // function calling by value function

    return 0;

}