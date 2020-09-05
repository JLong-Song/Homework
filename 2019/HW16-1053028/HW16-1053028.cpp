#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int t, n, x[12];
int i, j, k;
vector<int> v;
map<vector<int>, bool> sol;
void solution(int k, int m, int sum, vector<int> v){
    if(sum == t){
        if(sol[v]) return;
        sol[v] = true;
        cout << v[0];
        for(int i = 1; i < k; i++)
            cout << "+" << v[i];

        cout << endl;
        return;
    }
    if(sum > t || m == n) return;
    for(int i = m; i < n; i++){
        v.push_back(x[i]);
        solution(k + 1, i + 1, sum + x[i], v);
        v.pop_back();
    }
}
int main(){
    while(cin >> t >> n){
        if(!t && !n) break;
        for(i = 0; i < n; i++)
            cin >> x[i];

        sol.clear();
        cout << "Sum of " << t <<":\n";
        solution(0, 0, 0, v);
        if(!sol.size()) cout << "NONE\n";
    }
}
