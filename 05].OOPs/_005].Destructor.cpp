#include <bits/stdc++.h>
using namespace std;

class Employee{
    public : 
    Employee(){
        cout << "Constructor Invoked" << endl;
    }
    ~Employee(){
        cout << "Desturctor Invoked" << endl;
    }
};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    Employee one; //Creating an Object of Employee
    Employee two; 

    return 0;
}