#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// 參考來源：https://www.luogu.org/discuss/show/75812
int main()
{
    int N,sum=0;
    cin>>N;
    vector<int> enter(N);
    for(int i=0;i<N;i++){
        cin>>enter[i];
        sum+=enter[i];
    }
    int avg=sum/N,timee=0;
    for(int i=0;i<N-1;i++){
        if(enter[i]!=avg){
            enter[i+1]+=enter[i]-avg;
            timee++;
        }
    }
    cout<<timee<<'\n';
    return 0;
}