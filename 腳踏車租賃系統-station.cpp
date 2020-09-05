#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

map <string,bool> record;///�O�����ٽ֯� �n������class�i�H�A�Q��

class station ///��
{
public:
    station();
    void show(); ///���(�X�x��)
    void borrow(string name,int numStation);///��
    void returnn(string name,int numStation);///��
private:
    int bike[6];   ///�X�x��
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
        cout<<i<<"�����ثe��"<<bike[i]<<"���}�񨮥i�ѯ���"<<endl;
    }
}

void station::borrow(string name,int numStation)
{
    if (!record[name]&&bike[numStation]>0)
    {
    cout<<"�w�ɨ�"<<endl;
    cout<<"�P�¨ϥθ}�񨮯���t�� ���z�����n���@��"<<endl;
    cout<<endl;

    bike[numStation]--;///�X�������l���
    record[name]=true;///��ܦ��ϥΪ̦�����
    }
    else if(bike[numStation]==0)
    {
        cout<<"�ܩ�p"<<numStation<<"�����w�L�}�� �L�k����"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"�ܩ�p �z�w�ɨ�"<<endl;
        cout<<endl;
    }
}

void station::returnn(string name,int numStation)
{
    if (record[name]&&bike[numStation]<20)
    {
    cout<<"�w�٨�"<<endl;
    cout<<"�P�¨ϥθ}�񨮯���t�� ���z�����n���@��"<<endl;
    cout<<endl;

    bike[numStation]++;///�X�������l�W�[
    record[name]=false;///��ܦ��ϥΪ̤w�٨�
    }
    else if (bike[numStation]>=20)
    {
        cout<<"�ܩ�p"<<numStation<<"������m�w�� �L�k�٨�"<<endl;
        cout<<endl;
    }
    else
    {
        cout<<"�ܩ�p �z�L�ɨ�"<<endl;
        cout<<endl;
    }
}



int main()
{
///���B�w�g�O�n�J�i�h�ɪ����A
string n="��B߻";
record["��B߻"]=false;///���]�e����member�w�g����B߻�����
station s;

while(1)
{
  int num,order;

  cout<<"�w��ϥθ}��X����t��"<<endl;
  cout<<"�p�n�����Ы� 1 �p�n�٨��Ы� 2 �p�n�ϥζW�ŨϥΪ̽Ы� 3 �p�n�����Ы�4 QQ"<<endl;
  cin>>order;


     if (order==1)
         {
              cout<<"�п�J����"<<endl;
              cin>>num;

              s.borrow(n,num);
         }

     else if(order==2)
         {
               cout<<"�п�J����"<<endl;
               cin>>num;

               s.returnn(n,num);
          }
      else if (order==3)
         {
             bool check=true;///�T�{���b���O�_���W�ŨϥΪ�
             if (check)
               {
                  s.show();
               }
            else
               {
                   cout<<"�ܩ�p �z�L���v��"<<endl;
               }
          }

    else if (order==4)
    {
        break;
    }
    else
     {
         cout<<"���n�ÿ�J�Ʀr�n��?? ����!!!!!!"<<endl;
     }


}

}
