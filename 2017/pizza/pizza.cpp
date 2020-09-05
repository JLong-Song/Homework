#include<iostream>
#include<string>
#include"order pizza.h"
using namespace std;

int main()
{
    char c;
    string s;
    int input_type,input_size,input_topping;
    Order Customer;
    cout<<"Please enter your name: ";
    cin>>s;
    cout<<endl<<"Hi, "<<s<< ",you may start order now!\n";
    do
    {
        cout<<endl<<"What type of pizza do you like? (1.deep dish, 2.hand tossed, 3. pan):";
        cin>>input_type;
        cout<<endl<<"What size of pizza do you like? (1. small, 2. medium, 3. large):";
        cin>>input_size;
        cout<<endl<<"How many toppings do you like? ";
		cin>>input_topping;
        if(input_topping!=0)
        {
            Customer.add(input_type,input_size,input_topping);
        }
        else
        {
            Customer.add(input_type,input_size);
        }
        cout<<endl<<"Do you need another pizza? (Y/n):";
        cin>>c;
    }
    while(c!='n'&&c!='N');
    cout<<endl<<"Thank you! Here is your order list: Total of "<<Customer.count()<<" pizza"<<endl;
    Customer.output();


    return 0;
}
