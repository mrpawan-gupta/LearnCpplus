
#include <bits/stdc++.h>
using namespace std;

// class Defination - Declaration
class CreateClass {
    public: //Variables type
        int value1 , value2 ;  //data member (also instance variable)      
        string value3 ;

    // public variable can be accessed directly from anywhere
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    CreateClass FirstClass ; // Creating a Object of The Class

    FirstClass.value1 = 102 ; // variable access through main function
    FirstClass.value2 = -125 ;
    FirstClass.value3 ="Pawan Gupta"; // value inserted

    cout <<"values Are : " << endl;

    cout << FirstClass.value1 << " " << FirstClass.value2 << " " << FirstClass.value3 ;

    return 0;
}