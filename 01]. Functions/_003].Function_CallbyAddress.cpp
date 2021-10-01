#include <bits/stdc++.h>
using namespace std;

void swap(int* val1, int* val2) {
    int temp1 = *val1;
    *val1 = *val2;
    *val2 = temp1;

    cout << "a: " << *val1 << " b: " << *val2 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 10 ;
    int b = 20 ;

    cout << "a : " << a << endl;
    cout << "b : " << b << endl;

    cout << " swap a: " << a << " b: " << b <<" ---> " ;

    swap(&a,&b);

    return 0;
}