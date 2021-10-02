/*

When function is called within the same function, it is known as recursion in C++. The function which calls the same function, is known as recursive function.

A function that calls itself, and doesn't perform any task after function call, is known as tail recursion. In tail recursion, we generally call the same function with return statement.

Let's see a simple example of recursion.

recursionfunction(){    
recursionfunction(); //calling self function    
}    

*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) { 
    
    if(n<0) return(-1); /*Wrong value*/    
    
    if(n==0) return(1);  /*Terminating condition*/ 

    else  return(n*factorial(n-1));      
  
}  

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int factorial(int);  
    int fact,value;  
    cout<<"Enter any number: ";  
    cin>>value;  
    fact=factorial(value);  
    cout<<"Factorial of a number is: "<<fact<<endl;   
    return 0;
}