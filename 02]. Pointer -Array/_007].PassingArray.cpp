#include <bits/stdc++.h>
using namespace std;

void  printMax(int arr[5])  
{  
    int max = arr[0];    
        for (int i = 0; i < 5; i++)    
        {    
            if (max < arr[i])    
            {    
                max = arr[i];    
            }    
        }    
        cout<< "Maximum element in array is: "<< max <<"\n";    
}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr1[5] = { 25, 10, 54, 15, 40 };    
    int arr2[5] = { 12, 23, 44, 67, 54 };  

    printMax(arr1); //Passing array to function  
    printMax(arr2);   


    return 0;
}