#include<string>
#include<vector>
#include<iostream>
using namespace std;

class Pizza
{
public:
    Pizza(int,int);
    Pizza(int,int,int);
    void outputDescription();
    void computePrice();
    string output_type,out_size,out_topping;
    int type,size_,topping,money;
private:


};

class Order
{
public:
    void add(int,int,int);
    void add(int,int);
    void output();
    int count();
private:
    vector<Pizza> pdata;
    int sum=0;
};

Pizza::Pizza(int a,int b,int c)
{
    type=a;
    size_=b;
    topping=c;
    outputDescription();
    computePrice();
}
Pizza::Pizza(int a,int b)
{
    type=a;
    size_=b;
    topping=0;
    outputDescription();
    computePrice();
}
void Pizza::outputDescription()
{
    if(type==1)
        output_type="deep dish";
    else if(type==2)
        output_type="hand tossed";
    else if(type==3)
        output_type="pan";
    if(size_==1)
        out_size="small";
    else if(size_==2)
        out_size="medium";
    else if(size_==3)
        out_size="large";
}
void Pizza::computePrice()
{
    if(size_==1)
    {
        money=10+2*topping;
    }
    else if(size_==2)
    {
        money=14+2*topping;
    }
    else if(size_==3)
    {
        money=17+2*topping;
    }
}

void Order::add(int a,int b,int c)
{
    Pizza temp=Pizza(a,b,c);
    pdata.push_back(temp);
}
void Order::add(int a,int b)
{
    Pizza temp=Pizza(a,b);
    pdata.push_back(temp);
}
void Order::output()
{
    for(int i=0;i<pdata.size();i++)
    {
        cout<<'A'<<pdata[i].output_type<<' '<<pdata[i].out_size<<" pizza with "<<pdata[i].topping<< " topping(s), $"<<pdata[i].money<<endl;
        sum+=pdata[i].money;
    }
    cout<<"Total price is $"<<sum<<endl;
}
int Order::count()
{
    return pdata.size();
}
