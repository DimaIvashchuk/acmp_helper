#include <bits/stdc++.h>
using namespace std;
 
int main(){
     
    string pos;
    cin>>pos;
    string alph = "ABCDEFGH12345678-";
    if(pos.length() != 5) {
        cout<<"ERROR";
        return 0;
    }
     
    for(int i = 0; i < 5; i++){
        char a = pos[i];
         
        int p = alph.find(a);
         
        if(p == string::npos)
            cout<<"ERROR";
        else
            continue;
        //cout<<a <<" ";
        return 0;
    }
         
    int x1 = (int)pos[0], x2 = (int)pos[3], y1 = pos[1] - '0', y2 = pos[4]-'0';
     
    //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<< " ";
     
    if((abs(x1 - x2) == 1 && abs(y1 - y2) == 2) || ( abs(x1-x2) == 2 && abs(y1-y2) == 1)) 
        cout<<"YES";
    else
        cout<<"NO";
         
}
