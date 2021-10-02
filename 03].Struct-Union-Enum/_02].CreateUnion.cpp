#include <bits/stdc++.h>
using namespace std;

// the memory is shared between the different data members of union 

// that is the size of union is the size of max. data type used to store


union Data {
   int i; // data members ;
   float f;
} data, data1;
   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    data1.i = 121;

    cout << "i: " << data1.i << endl;

    data1.f = 1021.2f ;

    cout << "f: " << data1.f << endl;
    cout << "i: " << data1.i << endl;
    
     // value inserted first is not regaim after new alloctio of data1.f ;

    cout << "Memory size occupied by data :" << sizeof(data)<< " " << sizeof(data1);
    return 0;
}