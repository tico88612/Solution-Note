//
//  DCP-308.cpp
//  
//
//  Created by 楊承昊 on 2017/4/25.
//
//

#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        char qwe[123]={0};
        int ww;
        for(int i=0;i<3;i++)
            cin>>qwe;
        int qwwww;
        cin>>qwwww;
        if(qwe[1]=='o')
        {
            qwwww+=650;
            cout<<"Shuva naya barsha "<<qwwww;
        }
        if(qwe[1]=='a')
        {
            qwwww-=650;
            cout<<"Shuvo nobo borsho "<<qwwww;
        }
        cout<<endl;
    }
    return 0;
}
