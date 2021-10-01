#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the last number  : ";
    int num ;
    cin >> num ;

    cout << "The  series is : ";

    for (int i = 0 ; i <= num ; i++) {
        cout << i << " " ;
    }
    cout << "\nBreak statement : " << endl ;

    for (int i = 0 ; i <= num ; i++){
        
        if( i ==  5){
            cout << "\nreached at " << i  << endl ;
            break ;
        }
        cout << i << " " ;
    }

    cout << "\ncontinue statement : " << endl ;
    for (int i = 0 ; i <= num ; i++){
        if( i == 5){
            cout << "\nreached at " << i  << endl ;
            continue;
        }
        cout << i << " " ;
    }
    
    return 0;
}