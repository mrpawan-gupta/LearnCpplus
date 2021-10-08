#include <bits/stdc++.h>
using namespace std;

class Student{
    public :
        int id;
        string name;
        float cpi;

        Student(int id, string name, float cpi){
            this->id = id;
            this->name = name;
            this->cpi = cpi;
        }

        void display()    
        {    
            cout<<id<<"  "<<name<<"  "<< cpi << endl;    
        }    
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    Student e1 = Student(101, "Sonoo", 8.9); //creating an object of Student   
    Student e2 = Student(102, "Nakul", 5.9); //creating an object of Student  

    e1.display();    
    e2.display(); 
    return 0;
}