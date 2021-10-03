/* #include <bits/stdc++.h>
using namespace std;

class CreateClass{

    private: 
        int val1 , val2 ; // all th variable in Private Can not be accessed directly

    // the private  variabls can only be accessed usinf class function 
    public: 
        int val3 , val4 ;  
        // public variable are open to access.

        auto InputValue(); // class function
        void PrintValue(auto);
};

// function Defination 
auto  CreateClass::InputValue(){

};

void CreateClass::PrintValue(auto value){
    cout << x << " ";
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    CreateClass Class1 ;

    Class1.val3 = 125 ; //
    Class1.val4 = -15 ;

    PrintValue(Class1.val3);
    return 0;
}

*/

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