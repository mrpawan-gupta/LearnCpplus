
/*
Enum in C++ is a data type that contains fixed set of constants.
C++ Enums can be thought of as classes that have fixed set of constants.

enum can have fields, constructors and methods
enum may implement many interfaces but cannot extend any class because it internally extends Enum class

*/

#include <bits/stdc++.h>
using namespace std;

enum week { 
//     0       1        2           3       4       5         6    <---- index 
     Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday 
    };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    week day;  
    day = Friday;  

    // index of Friday ----> 4
    // 4+1 ---> 5 ;

    cout << "Day: " << day+1 <<endl;  
    return 0;  

    return 0;
}