#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int *ptr;  // integer pointer declaration  

    int marks[10]; // marks array declaration  

    cout << "Enter the elements of an array :" << endl;  

    for(int i=0;i<10;i++)  
    {  
        cin>>marks[i];  
    }  
    ptr=marks; // both marks and ptr pointing to the same element.. 
     
    cout << "The value of *ptr is :" <<*ptr<< endl;  

    cout << "The value of *marks is :" <<*marks<<endl;  
   
    return 0;
}