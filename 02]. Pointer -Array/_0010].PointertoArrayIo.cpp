#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int ptr1[5]; // integer array declaration  
    int *ptr2[5]; // integer array of pointer declaration  
    cout << "Enter five numbers :" << endl;  
    for(int i=0;i<5;i++)  
    {  
        cin >> ptr1[i];  
    }  
    for(int i=0;i<5;i++)  
    {  
        ptr2[i]=&ptr1[i];   
    }  
    // printing the values of ptr1 array  
    cout << "The values are" << endl;  
    for(int i=0;i<5;i++)  
    {  
        cout << *ptr2[i] << endl;  
    }  

    return 0;
}