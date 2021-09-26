#include <iostream>
using namespace std;

void sum(int x, int y){
    int sum  = x + y;

    cout <<"The sum of " << x << " and " << y <<" is " << sum << endl;
}
int main(){
    int a = 10 ;
    int b = 10 ;

    sum(a,b);
    return 0;
}
