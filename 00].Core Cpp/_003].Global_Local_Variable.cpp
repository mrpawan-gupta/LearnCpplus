#include <iostream>
using namespace std;

int a = 10 ;  // Global Variables

void sum(int x, int y){
    int sum  = x + y;  // local variable sum

    cout <<"The sum of " << x << " and " << y <<" is " << sum << endl;
}
int main(){
    int b = 20 ;

    sum(a,b);  // Function calling
    return 0;
}
