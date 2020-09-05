#include<iostream>
#include<algorithm>
using namespace std;
struct point{
    double x;
    double y;
};
double getm(double, double, double, double);
int checkx(double, double, double, double, double, double, double);
int checky(double, double, double, double, double, double, double);
int main(){
    point p1, p3;
    int N, q;
    double x1, y1, x2, y2, m, k;
    cin >> N;
    while(N--){
        cin >> x1 >> y1 >> x2 >> y2 >> p1.x >> p1.y >> p3.x >> p3.y;
        m = getm(x1, y1, x2, y2);
        k = y1 - m * x1;         //y=m*x+k
        if(p1.x > p3.x) swap(p1.x, p3.x);
        if(p1.y > p3.y) swap(p1.y, p3.y);
        if(x1 <= p3.x && x1 >= p1.x && y1 <= p3.y && y1 >= p1.y && x2 <= p3.x && x2 >= p1.x && y2 <= p3.y && y2 >= p1.y) cout << "T\n";
        else if(x1 == x2){
            if(x1 <= p3.x && x1 >= p1.x) cout << "T\n";
            else cout << "F\n";
        }else{
            if(x1 > x2) swap(x1, x2);
            if(y1 > y2) swap(y1, y2);
            q = checkx(p1.x, p1.y, p3.y, y1, y2, m, k) + checkx(p3.x, p1.y, p3.y, y1, y2, m, k) + checky(p1.x, p3.x, p1.y, x1, x2, m, k) + checky(p1.x, p3.x, p3.y, x1, x2, m, k);
            if(!q) cout << "F\n";
            else cout << "T\n";
        }
    }
}
double getm(double x1, double y1, double x2, double y2){
    return (y1 - y2) / (x1 - x2);
}
int checkx(double x, double y1, double y2, double y3, double y4, double m, double k){
    if(m * x + k <= y2 && m * x + k >= y1){
        if(m * x + k <= y4 && m * x + k >= y3) return 1;
    }
    else return 0;
}
int checky(double x1, double x2, double y, double x3, double x4, double m, double k){
    double i, j = 0;
    for(i = x1; i <= x2; i += 0.00001)    {
        if(!y - m * i - k){
            if(i <= x4 && i >= x3) j++;
        }
    }
    if(j) return 1;
    else return 0;
}
