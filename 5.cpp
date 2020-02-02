#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
int main()
{
    long long N;
    std::cin>>N;
    std::vector<long long int> ch, nch;
     
    for(int i = 0; i < N; i ++){
        long long int a; 
        std::cin>>a;
        if(a % 2 == 0) ch.push_back(a);
        else nch.push_back(a);
    }
     
    for(int  i = 0; i < nch.size(); i++){
        if(i == nch.size()-1 )
            std::cout<<nch[i] <<std::endl;
        else
            std::cout<<nch[i]<<" ";
    }
     
    for(int  i = 0; i < ch.size(); i++){
        if(i == ch.size()-1 )
            std::cout<<ch[i]<<std::endl;
        else
            std::cout<<ch[i]<<" ";
    }       
     
    ch.size() >= nch.size() ? std::cout<<"YES" : std::cout<<"NO";
     
}
