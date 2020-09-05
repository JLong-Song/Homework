#include<iostream>
using namespace std;
void fun(int,int,int);
int main()
{
    int n,i,j,N[20][20];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>N[i][j];
        }
    }
    fun(N[1][1],1,1);

}
void fun(int N[1][1],int x,int y)
{
    if(N[x][y]==0)
    {
         if(N[x+1][y]==0)
        {
            fun(N[x+1][y],x+1,y);
        }
        else if(N[x-1][y]==0)
        {
            fun(N[x-1][y],x-1,y);
        }
        else if(N[x][y-1]==0)
        {
            fun(N[x][y-1],x,y-1);
        }
        else if(N[x][y+1]==0)
        {
            fun(N[x][y+1],x,y+1);
        }
    }
}
