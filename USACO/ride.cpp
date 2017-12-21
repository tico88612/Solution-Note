/*
ID: tico8861
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string enter,enter2;
    fin >> enter >> enter2;
    long long int a=1,b=1;
    for(unsigned int i=0;i<enter.length();i++){
    	a*=(enter[i]-'A'+1);
    }
    for(unsigned int i=0;i<enter2.length();i++){
    	b*=(enter2[i]-'A'+1);
    }
    a%=47;
    b%=47;
    if(a==b)
    	fout<<"GO"<<endl;
    else
    	fout<<"STAY"<<endl;
    return 0;
}