#include <stdio.h>
#include <iostream>
using namespace std;

struct Node {
    long long int val, tag;
    Node *lc, *rc;
    Node(){
        tag=val=0;
        lc = rc = NULL;
    }
    void pull () {
        val = lc->val + rc->val;
    }
};

const int MAX_N = 1000004;

int n, v[MAX_N+1];

inline void input(int m) {
    for (int x=1;m>=x;x++) cin>>v[x];
}

Node* build(int L, int R) {
    Node *node = new Node();
    if (L==R) {
        node->val = v[L];
        return node;
    }
    int mid = (L+R) >> 1;
    node->lc = build(L,mid);
    node->rc = build(mid+1,R);
    node->pull();
    return node;
}

inline void push(Node* node, int L,int R) {
    if (!node->tag) return;
    if (L!=R) {   //check leaf
        int mid= (L+R) >> 1;
        node->lc->tag += node->tag;
        node->rc->tag += node->tag;
        node->lc->val += node->tag * (mid - L +1);
        node->rc->val += node->tag * (R - mid);
    }
    node->tag = 0;
}

void modify( Node* node, int L, int R, int ql, int qr,long long int d) {
    if (ql > R || qr < L) return;
    if (ql<=L && R<=qr) {
        node->tag += d;
        node->val += d*(R-L+1);
        return;
    }
    push(node,L,R);
    int mid = (L+R) >> 1;
    modify(node->lc, L,mid,ql,qr,d);
    modify(node->rc,mid+1,R,ql,qr,d);
    node->pull();
}

long long int query(Node* node, int L,int R, int ql, int qr) {
    if (ql > R || qr< L)  return 0;
    if (ql<=L && R<= qr) return node->val;
    push(node,L,R);
    int mid = (L+R) >> 1;
    return query(node->lc,L,mid,ql,qr) + query(node->rc, mid+1, R ,ql,qr);
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int q;
    cin>>n;
    input(n);
    Node* root = build(1,n);
    cin>>q;
    for (int i=0;q>i;i++) {
        int choose;
        cin>>choose;
        if (choose==1) { 
            int ql,qr,val;
            cin>>ql>>qr>>val;
            modify(root,1,n,ql,qr,val);
        }
        else if (choose==2) {
            int l,r;
            cin>>l>>r;
            cout<<query(root,1,n,l,r)<<'\n';
        }
    }
    
}