/*
ID: tico8861
TASK: gift1
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    map<string, int> m;
    int N;
    fin>>N;
    string namesss[10000];
    for(int i=0;i<N;i++){
        string enter;
        fin>>enter;
        namesss[i]=enter;
        m[enter]=0;
    }
    for(int i=0;i<N;i++){
        string enter;
        fin>>enter;
        int W,Q;
        fin>>W>>Q;
        if(Q==0)
            continue;
        int QWE=W/Q,moo=W%Q;
        for(int j=0;j<Q;j++){
            string enter2;
            fin>>enter2;
            m[enter2]+=QWE;
        }
        m[enter]-=W-moo;
    }
    for(int i=0;i<N;i++){
        fout<<namesss[i]<<" "<<m[namesss[i]]<<endl;
    }
    return 0;
}