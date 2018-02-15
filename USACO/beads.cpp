/*
ID: tico8861
TASK: beads
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int s;
    fin>>s;
    string enter;
    fin>>enter;
    enter+=enter;
    int b_left[10000]={0},b_right[10000]={0},r_left[10000]={0},r_right[10000]={0};
    //printf("???\n");
    for(unsigned int i=1;i<enter.size();i++){
        if(enter[i-1]=='b'||enter[i-1]=='w')
            b_left[i]=b_left[i-1]+1;
        else
            b_left[i]=0;
        if(enter[i-1]=='r'||enter[i-1]=='w')
            r_left[i]=r_left[i-1]+1;
        else
            r_left[i]=0;

    }
    for(int i=enter.size()-2;i>=0;i--){
        if(enter[i]=='b'||enter[i]=='w')
            b_right[i]=b_right[i+1]+1;
        else
            b_right[i]=0;
        if(enter[i]=='r'||enter[i]=='w')
            r_right[i]=r_right[i+1]+1;
        else
            r_right[i]=0;
    }
    int max_ans=0;
    for(int i=0;i<s*2;i++){

        max_ans=max(max_ans,max(r_left[i],b_left[i])+max(r_right[i],b_right[i]));
    }
    max_ans=(max_ans>s)?s:max_ans;
    fout<<max_ans<<endl;
    return 0;
}