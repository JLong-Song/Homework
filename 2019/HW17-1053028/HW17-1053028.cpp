#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    int n, f, num;
    while(cin >> n){
        stack<int> s;
        queue<int> q;
        priority_queue<int> p;
        int stack_bool = 1, queue_bool = 1, priority_queue_bool = 1;
        while(n--){
            cin >> f >> num;
            if(f == 1){
                s.push(num);
                q.push(num);
                p.push(num);
            }
            else{
                if(s.empty() || s.top() != num) stack_bool = 0;
                if(q.empty() || q.front() != num) queue_bool = 0;
                if(p.empty() || p.top() != num) priority_queue_bool = 0;
                if(!s.empty()) s.pop();
                if(!q.empty()) q.pop();
                if(!p.empty()) p.pop();
            }
        }
        if(stack_bool + queue_bool + priority_queue_bool > 1) cout << "not sure\n";
        else if (stack_bool) cout << "stack\n";
        else if (queue_bool) cout << "queue\n";
        else if (priority_queue_bool) cout << "priority queue\n";
        else cout << "impossible\n";
    }
}
