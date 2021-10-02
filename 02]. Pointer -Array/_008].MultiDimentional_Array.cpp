#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test[3][3];  //declaration of 2D array   

    //initialization 
    
    test[0][0]=5;    
    test[0][1]=10;  
    test[0][2]= 13 ;
    test[1][0]= 42 ; 
    test[1][1]=15;  
    test[1][2]=20;  
    test[2][0]=30;  
    test[2][1]= 0 ;
    test[2][2]=10;  


    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    } 
    return 0;
}