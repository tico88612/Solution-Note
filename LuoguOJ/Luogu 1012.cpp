#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
// https://blog.csdn.net/qq_25827845/article/details/70304265
bool cmp(string a,string b){
    int length =(int)a.length()+b.length();
    string str1=a+b;
    string str2=b+a;
    for(int i=0;i<length;i++){
        if(str1[i]>str2[i]){
            // cout<<"She";
            return true;
        }
        else if(str1[i]<str2[i]){
            // cout<<"He";
            return false;
        }
    }
    return false;
}
int main(){
    _
    int N;
    cin>>N;
    vector<string> v(N);
    for(int i=0;i<N;i++)
        cin>>v[i];
    sort(v.begin(), v.end(), cmp);
    for(int i=0;i<N;i++)
        cout<<v[i];
    cout<<'\n';
    return 0;
}