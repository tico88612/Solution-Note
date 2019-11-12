/*
    Author: Jerry Yang C.H. (tico88612)
    Date: 2019/11/12
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
typedef pair<double,double> pdd;
#define SQ(i) ((i)*(i))
#define MEM(a, b) memset(a, (b), sizeof(a))
#define SZ(i) int(i.size())
#define FOR(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define REP1(i,j) FOR(i, 1, j+1, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define ALL(_a) _a.begin(),_a.end()
#define MP make_pair
#define PB push_back
#define EB emplace_back
#define X first
#define Y second
#ifdef tmd
#define debug(...) do{\
    fprintf(stderr,"%s - %d (%s) = ",__PRETTY_FUNCTION__,__LINE__,#__VA_ARGS__);\
    _do(__VA_ARGS__);\
}while(0)
template<typename T>void _do(T &&_x){cerr<<_x<<endl;}
template<typename T,typename ...S> void _do(T &&_x,S &&..._t){cerr<<_x<<" ,";_do(_t...);}
template<typename _a,typename _b> ostream& operator << (ostream &_s,const pair<_a,_b> &_p){return _s<<"("<<_p.X<<","<<_p.Y<<")";}
template<typename It> ostream& _OUTC(ostream &_s,It _ita,It _itb)
{
    _s<<"{";
    for(It _it=_ita;_it!=_itb;_it++)
    {
        _s<<(_it==_ita?"":",")<<*_it;
    }
    _s<<"}";
    return _s;
}
template<typename _a> ostream &operator << (ostream &_s,vector<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a> ostream &operator << (ostream &_s,set<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a> ostream &operator << (ostream &_s,deque<_a> &_c){return _OUTC(_s,ALL(_c));}
template<typename _a,typename _b> ostream &operator << (ostream &_s,map<_a,_b> &_c){return _OUTC(_s,ALL(_c));}
template<typename _t> void pary(_t _a,_t _b){_OUTC(cerr,_a,_b);cerr<<endl;}
#define IOS()
#else
#define debug(...)
#define pary(...)
#define endl '\n'
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0)
#endif

const ll MOD = 10000019;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const int iNF = 0x3f3f3f3f;
// const ll MAXN = 

vector<ll> enter;
ll N;

void merge(vector<ll> &arr, int l, int mid, int r){
    vector<ll> left(mid - l);
    vector<ll> right(r - mid);
    for(int i = l; i < mid; i++){
        left[i - l] = arr[i];
    }
    for(int i = mid; i < r; i++){
        right[i - mid] = arr[i];
    }
    int i = 0, j = 0, now = 0;

    while(i < SZ(left) && j < SZ(right)){
        if(left[i] > right[j]){
            arr[now + l] = right[j];
            j++;
            now++;
        }
        else{
            arr[now + l] = left[i];
            now++;
            i++;
        }
    }
    while(i < SZ(left)){
        arr[now + l] = left[i];
        i++;
        now++;
    }
    while(j < SZ(right)){
        arr[now + l] = right[j];
        j++;
        now++;
    }
}

ll merge_sort(int l, int r){
    if(l + 1 >= r)
        return 0;
    int mid = (r - l) / 2 + l;
    ll left = merge_sort(l, mid);
    ll right = merge_sort(mid, r);

    int L = l, R = mid;
    ll cnt = 0, now = 0, countt = 0;
    for(L = l; L < mid; L++){
        while(R < r && enter[L] > enter[R]){
            now = (now + enter[R]) % MOD;
            R++; 
            countt++;
        }
        cnt = ((cnt + (((enter[L]) % MOD) * ((countt) % MOD)) % MOD) % MOD + now) % MOD;
    }

    merge(enter, l, mid, r);
    // cout << l << " " << mid << " " << r << " " << cnt << '\n';

    return (((left % MOD) + (right % MOD)) % MOD + cnt) % MOD;
}

/********** Good Luck :) **********/
int main()
{
    IOS();
    cin >> N;
    enter.resize(N);
    REP(i, N){
        cin >> enter[i];
    }
    cout << merge_sort(0, N) << '\n';
    // REP(i, N){
    //     cout << enter[i] << " \n"[i == N - 1];
    // }
    return 0;
}
