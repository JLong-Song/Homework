#include<iostream>
using namespace std;
int main()
{
    int i,j,N[14],con[14],n,temp=0;
    char space;
    while(cin>>N[0])
    {
        for(i=1;;i++)
        {
            cin>>N[i];
            cin.get(space);
            if(space=='\n')
            {
                n=i+1;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            con[i]=1;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(N[i]==N[j]) con[i]++;
            }
        }
        for(i=0,temp=0;i<n;i++)
        {
            if(con[i]>n/2)
            {
                cout<<N[i]<<endl;
                break;
            }
            else temp++;
        }
        if(temp==n) cout<<"NO\n";
    }
}
