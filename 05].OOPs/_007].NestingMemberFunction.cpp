#include <bits/stdc++.h>
using namespace std;

class binary{
    string binary;
    public :
        void read(void);
        void checkBinary(void);
        void onesComplement(void);
        void display(void);
};

void binary :: read(void){
    cout << "Enter the Binary number : ";
    cin >> binary;
}

void binary :: checkBinary(void){
    for (int i = 0; i < binary.length(); i++){
        if(binary.at(i)!='0' && binary.at(i)!= '1'){
            cout << "Invalid Binary format" << endl;
            exit(0);
        }
    }
}

void binary ::onesComplement(){
    for (int i = 0; i < binary.length(); i++){
        if(binary.at(i)=='1'){
            binary.at(i) = '0';
        }
        else{
            binary.at(i)='1';
        }
    }
}

void binary :: display(){
    cout << "display binary number : " << endl;
    for (int i = 0; i < binary.length(); i++)
    {
        cout << binary.at(i);
    }
    cout << "\n";
}
int main()
{
    binary b ;
    b.read();
    b.checkBinary();
    b.display();
    b.onesComplement();
    b.display();

    return 0;
}