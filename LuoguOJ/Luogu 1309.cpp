// luogu-judger-enable-o2
#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
struct Item {
    int idd;
    long long int w,score;
};
bool cmp(Item a,Item b){
    if(a.score==b.score)
        return a.idd<b.idd;
    return a.score>b.score;
}
int main(){
    _
    int N,R,Q;
    cin>>N>>R>>Q;
    vector<Item> v(2*N);
    for(int i=0;i<2*N;i++){
        v[i].idd=i+1;
        cin>>v[i].score;
    }
    for(int i=0;i<2*N;i++)
        cin>>v[i].w;
    for(int i=0;i<R;i++){
        sort(v.begin(), v.end(), cmp);
        for(int i=0;i<2*N;i+=2){
            // cout<<v[i].score<<" "<<v[i+1].score<<'\n';
            if(v[i].w>v[i+1].w)
                v[i].score++;
            else if(v[i].w<v[i+1].w)
                v[i+1].score++;
        }
    }
    // for(int i=0;i<2*N;i+=2){
    // 	cout<<v[i].score<<" "<<v[i+1].score<<'\n';
    // 	cout<<v[i].idd<<'\n';
    // }
    sort(v.begin(), v.end(), cmp);
    cout<<v[Q-1].idd<<'\n';
    return 0;
}