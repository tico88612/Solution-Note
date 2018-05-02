#include <stdio.h>
#include <iostream>
using namespace std;

const int MAX_N = 1000004;

struct Node {
    int l,r;
    long long int val;
}arr[(MAX_N+1)*4];

int n, v[MAX_N+1];

inline void input(int m) {
    for (int x=1;m>=x;x++) cin>>v[x];
}

long long int build(int index,int L, int R) {
    arr[index].l=L;
    arr[index].r=R;
    if (L==R) {
        arr[index].val = v[L];
        return v[L];
    }
    int mid = (L+R) >> 1;
    arr[index*2].val=build(index*2,L,mid);
    arr[index*2+1].val=build(index*2+1,mid+1,R);
    
    return max(arr[index*2].val,arr[index*2+1].val);
}


void modify( int index, int L, int R, int ql, int qr,long long int d) {
    if (ql > R || qr < L) return;
    if (ql==L && R==qr) {
        arr[index].val += d;
        return;
    }
    int mid = (L+R) >> 1;
    modify(index*2, L,mid,ql,qr,d);
    modify(index*2+1,mid+1,R,ql,qr,d);
    arr[index].val=max(arr[index*2].val,arr[index*2+1].val);
}

long long int query(int index,int L,int R, int ql, int qr) {
    if (ql > R || qr< L)  return -2147483647;
    if (ql<=L && R<= qr) return arr[index].val;
    int mid = (L+R) >> 1;
    return max(query(index*2,L,mid,ql,qr) , query(index*2+1,mid+1, R ,ql,qr));
}

int main () {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    int q;
    cin>>n;
    cin>>q;
    input(n);
    arr[1].val = build(1,1,n);
    // for(int i=1;i<2*n;i++)
    //  cout<<arr[i].l<<" "<<arr[i].r<<" "<<arr[i].val<<endl;
    for (int i=0;q>i;i++) {
        int choose;
        cin>>choose;
        if (choose==1) {
            int l,r;
            cin>>l>>r;
            cout<<query(1,1,n,l,r)<<'\n';
        }
        else if (choose==2) {
            int ql,val;
            cin>>ql>>val;
            modify(1,1,n,ql,ql,val);
            // for(int i=1;i<2*n;i++)
            //     cout<<arr[i].l<<" "<<arr[i].r<<" "<<arr[i].val<<endl;
        }
    }
}