/*      
constructor is a special method which is invoked automatically at the time of object creation. 
It is used to initialize the data members of new object generally. 
The constructor in C++ has the same name as class or structure.


Default Constructor
A constructor which has no argument is known as default constructor. It is invoked at the time of creating object.

*/

#include <bits/stdc++.h>
using namespace std;

class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked"<<endl;    
        }    
};  


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Employee e1; //creating an object of Employee   
    Employee e2;  

    return 0;
}