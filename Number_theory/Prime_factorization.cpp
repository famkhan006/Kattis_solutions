// prime factorization

#include<bits/stdc++.h>

using namespace std;

map<int,int> prime_factorizer(int n)
{
    map<int,int >  factors;
    
    for(int i = 2 ; i*i <=n ; i++)
    {
        while(n%i==0) {
            factors[i]++;
            n/=i;
        }
        
        if(n>1)  factors[n]++;
    }
    return factors;
}


int main()
{
    int k;  cin>>k;
    map<int,int> m = prime_factorizer(k);
    for(auto i : m)
    {
        cout<<i.first<<"^"<<i.second<<endl;
    }
    
}
