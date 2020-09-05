#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int N,i,j,tempc=0,tempd=0;
    char Q,c1,c2,d,word[1001],add[101],rev[1001],del[1001];
    cin>>N;
    while(N--)
    {
        cin.get();
        cin.getline(word,1001);
        while(1)
        {
            cin>>Q;
            if(Q=='A')
            {
                cin.get();
                cin.getline(add,101);
                strcat(word,add);
            }
            else if(Q=='C')
            {
                cin.get();
                cin.get(c1);
                cin.get();
                cin.get(c2);
                for(i=0,tempc=0;i<strlen(word);i++)
                {
                    if(word[i]==c1) word[i]=c2;
                    else tempc++;
                    if(tempc==strlen(word)) cout<<"We can't do this!\n";
                }
            }
            else if(Q=='D')
            {
                cin.get();
                cin.get(d);
                for(i=0,j=0,tempd=0;i<strlen(word);i++,j++)
                {
                    if(word[i]!=d) tempd++;
                    while(word[i]==d)
                    {
                        i++;
                    }
                    del[j]=word[i];
                    del[j+1]='\0';
                    if(tempd==strlen(word)) cout<<"We can't do this!\n";
                }
                strcpy(word,del);
            }
            else if(Q=='R')
            {
                for(i=0,j=strlen(word)-1;i<strlen(word);i++,j--)
                {
                    rev[i]=word[j];
                    rev[i+1]='\0';
                }
                strcpy(word,rev);
            }
            else if(Q=='P') cout<<word<<endl;
            else if(Q=='E') break;
        }
        if(N!=0) cout<<"----------\n";
    }
}
