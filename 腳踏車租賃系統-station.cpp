#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

map <string,bool> record;///記錄誰還誰租 要放全域或class可以再討論

class station ///站
{
public:
    station();
    void show(); ///顯示(幾台車)
    void borrow(string name,int numStation);///租
    void returnn(string name,int numStation);///還
private:
    int bike[6];   ///幾台車
};
station::station()
{
    int i;
    for (i=1;i<=5;i++)
    {
        bike[i]=20;
    }
}
void station::show()
{
    int i;
    for (i=1;i<=5;i++)
    {
        cout<<i<<"號站目前有"<<bike[i]<<"輛腳踏車可供租借"<<endl;
    }
}

void station::borrow(string name,int numStation)
{
    if (!record[name]&&bike[numStation]>0)
    {
    cout<<"已借車"<<endl;
    cout<<"感謝使用腳踏車租賃系統 祝您有美好的一天"<<endl;
    cout<<endl;

    bike[numStation]--;///幾號站車子減少
    record[name]=true;///表示此使用者有租車
    }
    else if(bike[numStation]==0)
    {
        cout<<"很抱歉"<<numStation<<"號站已無腳踏車 無法租車"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"很抱歉 您已借車"<<endl;
        cout<<endl;
    }
}

void station::returnn(string name,int numStation)
{
    if (record[name]&&bike[numStation]<20)
    {
    cout<<"已還車"<<endl;
    cout<<"感謝使用腳踏車租賃系統 祝您有美好的一天"<<endl;
    cout<<endl;

    bike[numStation]++;///幾號站車子增加
    record[name]=false;///表示此使用者已還車
    }
    else if (bike[numStation]>=20)
    {
        cout<<"很抱歉"<<numStation<<"號站位置已滿 無法還車"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"很抱歉 您無借車"<<endl;
        cout<<endl;
    }
}



int main()
{
///此處已經是登入進去時的狀態
string n="邵雨葳";
record["邵雨葳"]=false;///假設前面的member已經有邵雨葳的資料
station s;

while(1)
{
  int num,order;

  cout<<"歡迎使用腳踏出租賃系統"<<endl;
  cout<<"如要租車請按 1 如要還車請按 2 如要使用超級使用者請按 3 如要結束請按4 QQ"<<endl;
  cin>>order;


     if (order==1)
         {
              cout<<"請輸入站號"<<endl;
              cin>>num;

              s.borrow(n,num);
         }

     else if(order==2)
         {
               cout<<"請輸入站號"<<endl;
               cin>>num;

               s.returnn(n,num);
          }
      else if (order==3)
         {
             bool check=true;///確認此帳號是否為超級使用者
             if (check)
               {
                  s.show();
               }
            else
               {
                   cout<<"很抱歉 您無此權限"<<endl;
               }
          }

    else if (order==4)
    {
        break;
    }
    else
     {
         cout<<"不要亂輸入數字好嗎?? 重來!!!!!!"<<endl;
     }


}

}
