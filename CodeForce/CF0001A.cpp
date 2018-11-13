#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,M,A;
    long long int sum=1;
    cin>>N>>M>>A;
    if(N%A&&N>A){
        sum*=(N/A)+1;
    }
    else sum*=(N/A)==0?1:(N/A);
    if(M%A&&M>A){
        sum*=(M/A)+1;
    }
    else sum*=(M/A)==0?1:(M/A);
    cout<<sum<<endl;
    return 0;
}