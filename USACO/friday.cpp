/*
ID: tico8861
TASK: friday
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
bool isleap(int year){
	if((year%400==0)||(year%4==0&&year%100))
		return true;
	return false;
}

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int N;
    fin >> N;
    int now=1;
    int day[7]={0};
    int norm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int leap[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    for(int year=1900;year<1900+N;year++){
    	for(int i=0;i<12;i++){
    		int a=(now+12)%7;
    		day[a]++;
    		if(isleap(year))
    			now+=leap[i];
    		else
    			now+=norm[i];
    	}
    }
    fout<<day[6];
    for(int i=0;i<6;i++){
    	fout<<" "<<day[i];
    }
    fout<<endl;
    return 0;
}