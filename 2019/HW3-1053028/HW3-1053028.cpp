#include <iostream>
#include <algorithm>
using namespace std;
struct point{
    double x, y;
};
void Linear_function(point, point);
double a, b;
int main(){
    int N;
    double i, j, num;
    point p1, p3, L1, L2, temp;
    cin >> N;
    while(N--){
        cin >> L1.x >> L1.y >> L2.x >> L2.y >> p1.x >> p1.y >> p3.x >> p3.y;
        if(p1.x > p3.x) swap(p1.x, p3.x);
        if(p1.y > p3.y) swap(p1.y, p3.y);
        if(L1.x == L2.x){
            if(L1.y > L2.y) swap(L1.y, L2.y);
            for(i = L1.y, num = 0; i <= L2.y + 0.001; i += 0.001)
                if(L1.x <= p3.x + 0.001 && L1.x >= p1.x - 0.001 && i <= p3.y + 0.001 && i >= p1.y - 0.001) num++;
        }
        else{
            if(L1.x > L2.x){
                swap(L1.x, L2.x);
                swap(L1.y, L2.y);
            }
            Linear_function(L1, L2);
            for(i = L1.x, num = 0; i <= L2.x + 0.001; i += 0.001){
                j = a * i + b;
                if(i <= p3.x + 0.001 && i >= p1.x - 0.001 && j <= p3.y + 0.001 && j >= p1.y - 0.001) num++;
            }
        }
        if(num) cout << "T\n";
        else cout << "F\n";
    }
}
void Linear_function(point m, point n){
    a = (m.y - n.y) / (m.x - n.x);
    b = m.y - (a * m.x);
}
