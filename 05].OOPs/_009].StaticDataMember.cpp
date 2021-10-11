#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:
    int id;
    static int count; // static variable is initialised for the class
    // and will get updated ..

public:
    void setData(void){
        cout << "Enter the id : ";
        cin >> id;
        count++;
    }
    void getdata(void){
        cout <<"Id of the employee is : " << id  << " of employee number " << count <<endl;
    }

    /* static function only have access to static variavle
     and other static function */

    static void getCount(void){ 
        cout << "The value of counter is : " << count << endl;

    }
};

int Employee ::count; // int Employee :: Count = 100 ; is aceeptable to set base value of count

/* the value of count will not be reinitialized with new object.
only value is taken and updated by all object.

the default value is of static variable
*/
int main()
{

    Employee Pawan,Sneha;

    Pawan.setData();
    Pawan.getdata();
    Employee :: getCount();

    Sneha.setData();
    Sneha.getdata();
    Employee :: getCount();

    return 0;
}