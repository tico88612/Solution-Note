#include <stdio.h>
#include <iostream>
using namespace std;

const int MAX_N = 1000004;

struct Node {
    long long int val, tag;
}arr[(MAX_N+1)*4];

int n, v[MAX_N+1];

inline void input(int m) {
    for (int x=1;m>=x;x++) cin>>v[x];
}

long long int build(int index,int L, int R) {
    if (L==R) {
        arr[index].val = v[L];
        return v[L];
    }
    int mid = (L+R) >> 1;
    arr[index*2].val=build(index*2,L,mid);
    arr[index*2+1].val=build(index*2+1,mid+1,R);
    
    return arr[index*2].val+arr[index*2+1].val;
}

inline void push(int index,int L,int R) {
    if (!arr[index].tag) return;
    if (L!=R) {   //check leaf
        int mid= (L+R) >> 1;
        arr[index*2].tag += arr[index].tag;
        arr[index*2+1].tag += arr[index].tag;
        arr[index*2].val += arr[index].tag * (mid - L +1);
        arr[index*2+1].val += arr[index].tag * (R - mid);
    }
    arr[index].tag = 0;
}

void modify( int index, int L, int R, int ql, int qr,long long int d) {
    if (ql > R || qr < L) return;
    if (ql<=L && R<=qr) {
        arr[index].tag += d;
        arr[index].val += d*(R-L+1);
        return;
    }
    push(index,L,R);
    int mid = (L+R) >> 1;
    modify(index*2, L,mid,ql,qr,d);
    modify(index*2+1,mid+1,R,ql,qr,d);
    arr[index].val=arr[index*2].val+arr[index*2+1].val;
}

long long int query(int index,int L,int R, int ql, int qr) {
    if (ql > R || qr< L)  return 0;
    if (ql<=L && R<= qr) return arr[index].val;
    push(index,L,R);
    int mid = (L+R) >> 1;
    return query(index*2,L,mid,ql,qr) + query(index*2+1,mid+1, R ,ql,qr);
}

int main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int q;
    cin>>n;
    input(n);
    arr[1].val = build(1,1,n);
    cin>>q;
    for (int i=0;q>i;i++) {
        int choose;
        cin>>choose;
        if (choose==1) { 
            int ql,qr,val;
            cin>>ql>>qr>>val;
            modify(1,1,n,ql,qr,val);
        }
        else if (choose==2) {
            int l,r;
            cin>>l>>r;
            cout<<query(1,1,n,l,r)<<'\n';
        }
    }
}