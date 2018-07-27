#include <iostream>
using namespace std;
int main(){
    string s;
    int A,B;
    while(cin >> s){
        A=0,B=0;
        for(unsigned int i=0;i<s.length();i++){
            if (i%2){
                A=A+s[i]-'0';
            }else{
                B=B+s[i]-'0';
            }
        }
        if (A>B) cout << A-B << endl;
        else cout << B-A << endl;
    }
}