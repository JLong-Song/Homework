#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int N,x,y,i,j;
    char face,code[1000],code2[500];
    cin>>N;
    while(N--)
    {
        cin>>x>>y>>face;
        cin.get();      //get enter
        cin.getline(code,1000);
        for(i=0,j=0;j<strlen(code)-1;i++,j+=2)
        {
            code2[i]=code[j];
            code2[i+1]='\0';
        }
        for(i=0;i<strlen(code2);i++)
        {
            if(code2[i]=='F')       //前進
            {
                if(face=='N') y+=1;
                else if(face=='E') x+=1;
                else if(face=='W') x-=1;
                else if(face=='S') y-=1;
            }
            else if(code2[i]=='B')      //後退
            {
                if(face=='N') y-=1;
                else if(face=='E') x-=1;
                else if(face=='W') x+=1;
                else if(face=='S') y+=1;
            }
            else if(code2[i]=='R')      //右轉
            {
                if(face=='N') face='E';
                else if(face=='E') face='S';
                else if(face=='W') face='N';
                else if(face=='S') face='W';
            }
            else if(code2[i]=='L')      //左轉
            {
                if(face=='N') face='W';
                else if(face=='E') face='N';
                else if(face=='W') face='S';
                else if(face=='S') face='E';
            }
            else if(code2[i]=='T') break;       //停止
        }
        cout<<x<<" "<<y<<" "<<face<<endl;
    }
}
