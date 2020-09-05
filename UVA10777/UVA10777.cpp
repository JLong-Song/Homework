#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int t, n, temp = 0;
    double x, p;
    cin >> t;
    while(t--){
        cin >> n;
        double P = 1, Ex = 0;
        for(int i = 0; i < n; i++){
            cin >> x >> p;
            if(x > 0) Ex += x * p;
            else{
                Ex += -1 * x * p;
                P -= p;
            }
        }
        cout << "Case " << ++temp << ": ";
        if(fabs(P) < 1e-8) cout << "God! Save me\n";
        else cout << fixed << setprecision(2) << Ex / P << endl;
    }
}
