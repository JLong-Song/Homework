#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
struct point{
    int x;
    int y;
};
point ans_1, ans_2;
double the_shortest(double shortest, point a, point b){
    double n = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
    if(n < shortest){
        shortest = n;
        ans_1 = a;
        ans_2 = b;
    }
    return shortest;
}
int main(){
    point p[100];
    stringstream ss;
    fstream fin;
    fin.open("node.txt");
    int i = 0;
    while(1){
        string s;
        char c;
        getline(fin, s);
        ss.clear();
        ss << s;
        ss >> p[i].x;
        ss >> c;
        ss >> p[i].y;
        if(ss.fail())break;
        i++;
    }
    double shortest = 100.0;
    for(int j = 0; j < i; j++){
        for(int m = j + 1; m < i; m++){
            shortest = the_shortest(shortest, p[j], p[m]);
        }
    }
    cout << ans_1.x << "," << ans_1.y << endl;
    cout << ans_2.x << "," << ans_2.y << endl;
    cout << fixed << setprecision(1) << shortest << endl;
}
