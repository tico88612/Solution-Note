#include <iostream>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    _
    int n;
    while(cin>>n){
        if(n==0)
            return 0;
        for(int i=0;i<n;i++) {
            for(int k=n-1;k>i;k--)
                cout<<"_";
            for(int j=0;j<=i;j++)
                cout<<"+";
            cout<<'\n';
        }
    }
    return 0;
}