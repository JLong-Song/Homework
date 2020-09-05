#include <iostream>
#include <fstream>
using namespace std;
struct coordinate{
    double x, y, z;
};
int main(){
    int t;
    char ch;
    coordinate point[15000];
    ifstream fin("test.txt", ios::in);  /*read file*/
    while(fin >> ch){
        t = ch - '0';
        int i = 0, ans = 0;
        while(t--){
            fin >> point[i].x >> point[i].y >> point[i].z;  /*point's x, y, z*/
            point[i].x -= '0';
            point[i].y -= '0';
            point[i].z -= '0';
            i++;
        }
        int num = i;
        for(int i = 0; i < num; i++){
            ans = 0;
            for(int j = 0; j < num; j++){
                if((point[i].x > point[j].x) && (point[i].y > point[j].y) && (point[i].z > point[j].z)) /*compare*/
                    ans++;
            }
            cout << ans << endl;
            if(i != num - 1) cout << endl;
        }
    }
    fin.close();
}
