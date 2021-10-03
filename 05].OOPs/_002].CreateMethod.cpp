#include <bits/stdc++.h>
using namespace std;

// class Defination - Declaration
class CreateClass {
    public: //Variables type
        int value1 , value2 ;  //data member (also instance variable)      
        string value3 ;

    // public variable can be accessed directly from anywhere

    void insert(int i , int j , string n)    // method to inset value
        {    
            value1 = i;  
            value2 = j; 
            value3 = n;    
        }    
       void display()    // method to display value
        {    
            cout<< value1<< " " << value2<< " " << value3<< endl;  
        }    
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    CreateClass Object1 ; // Creating a Object of The Class

    Object1.value1 = 102 ; // variable access through main function
    Object1.value2 = -125 ;
    Object1.value3 ="Pawan Gupta"; // value inserted

    cout <<"values Are : " << endl;

    cout << Object1.value1 << " " << Object1.value2 << " " << Object1.value3 << endl;

    cout <<"Methods calling : " << endl ;
    CreateClass Object2 ;

    Object2.insert(-2,23,"Sneha Varshney");

    Object2.display();

    return 0;
}