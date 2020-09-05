#include<iostream>
#include<cstring>
#include<queue>
using namespace std;
struct Node{
    Node* left;
    Node* right;
    char data;
};
Node N[11];
int temp = 0;
Node *NewNode(){
    N[temp].left = NULL;
    N[temp].right = NULL;
    return &N[temp++];
};
Node* findd(char *preo, char *ino, int len){
    if(!len) return NULL;
    int k = 0;
    while(preo[0] != ino[k]) k++;
    Node *lvo = NewNode();
    lvo->data = preo[0];
    lvo->left = findd(preo + 1, ino, k);
    lvo->right = findd(preo + k + 1, ino + k + 1, len - k - 1);
    return lvo;
}
void traversal(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        cout << p->data;
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
}
int main(){
    int n;
    char preo[11], ino[11];
    cin >> n;
    while(n--){
        cin >> preo >> ino;
        cin.get();
        int longg = strlen(preo);
        Node *root = findd(preo, ino, longg);
        traversal(root);
        cout << endl;
    }
}
