/*      structure is collections of different elements 
        --> User defined Data Type
        -->   it is the way to group Variables

*/
#include <bits/stdc++.h>
using namespace std;

struct CreateStudents
{
    int id ;
    string name ;
    float cpi ;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    struct CreateStudents student1 ;

    student1.id = 191500533 ;
    student1.name = "pawan" ;
    student1.cpi = 7.7  ;

    cout << "id: " << student1.id << endl;
    cout << "name: " << student1.name << endl;
    cout << "cpi: " << student1.cpi << endl;
    
    return 0;
}