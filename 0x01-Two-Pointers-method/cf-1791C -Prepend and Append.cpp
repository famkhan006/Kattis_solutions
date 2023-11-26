#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n;
    string s;
    cin>>n>>s;
    int ans = n;
    for (int i = 0, j = n-1; i !=j ; i++ ,j--)
    {
       if((s[i] == '1' && s[j] == '0') || (s[i] == '0' && s[j] == '1')){
            ans -=2;
            
       }
       else 
            return ans;
        if (ans == 0) break;
       
    }
    
    return ans;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}
