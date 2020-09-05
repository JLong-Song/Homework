#include <iostream>
using namespace std;

int main(){
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, total;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m >> n >> o >> p;
    a *= 2;
    if(a >= 10)
        a = 1 + (a % 10);
    c *= 2;
    if(c >= 10)
        c = 1 + (c % 10);
    e *= 2;
    if(e >= 10)
        e = 1 + (e % 10);
    g *= 2;
    if(g >= 10)
        g = 1 + (g % 10);
    i *= 2;
    if(i >= 10)
        i = 1 + (i % 10);
    k *= 2;
    if(k >= 10)
        k = 1 + (k % 10);
    m *= 2;
    if(m >= 10)
        m = 1 + (m % 10);
    o *= 2;
    if(o >= 10)
        o = 1 + (o % 10);
    total = a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p;
    if(!total%10)
        cout << "Valid\n";
    else
        cout << "Invalid\n";

    return 0;
}
