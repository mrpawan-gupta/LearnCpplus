#include <bits/stdc++.h>
using namespace std;

class shop{
    vector<int> ItemId;
    vector<int> ItemPrice;
    int counter;

    public :
        void initCounter(void) {
            counter = 0;
        }
        void setPrice(void);
        void displayPrice(void);
};

void shop ::setPrice(void){
    cout <<"Enter the Id of your Item no : " << counter+1 ;
    int i , j;
    cin >> i;
    ItemId.push_back(i);
    cout <<"Enter the price of your Item no : " << counter+1 ;
    cin >> j;
    ItemPrice.push_back(j);
}

void shop :: displayPrice(){
    for (int i = 0; i < ItemId.size(); i++){
        cout << "The price of Intem with Id " << ItemId[i] << " is " << ItemPrice[i] << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}