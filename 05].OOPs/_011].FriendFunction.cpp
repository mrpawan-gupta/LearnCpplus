#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setNumber(int n1 , int n2){
        a = n1 ;
        b = n2 ;
    }

    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    // friend function allows you to access the private data of class.
    friend Complex sumComplex(Complex, Complex);
};

Complex sumComplex(Complex o1 , Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(){
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(3, 5);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of freind function :-
1. not in scope of class (class ka hissa nai hai!)
2. it cannot be called from the object of that class 
i.e c1.sumComplexx() == is Invalid ;
3. Can be declared Anywhere in class I.e public or private
*/