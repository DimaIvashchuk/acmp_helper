#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
#include <string>
using namespace std;
 
string max(string a, string b){
     
    if(a.length() > b.length()) return a;
     
    if(a.length() < b.length()) return b;
     
    for(int i = 0; i < a.length(); i++){
         
        if(a[i] > b[i]) return a;
         
        if(b[i] > a[i]) return b;
         
    }
     
    return a;
     
}

int main(){

    string a, b, c;
    cin>>a>>b>>c;
    cout<<max(a, max(b, c));
     
}
