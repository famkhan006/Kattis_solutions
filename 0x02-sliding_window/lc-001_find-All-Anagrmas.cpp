// leetcode link - https://leetcode.com/problems/find-all-anagrams-in-a-string/description/?source=submission-ac
// author - fahmi

#define foR(i,k,n) for (int i = k; i < n ; i++)
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char,int> m;
        int n = s.size();
        
        vector < int > ans;
        for (auto i : p){
            m[i]++;
        }
        
        int i = 0, j = 0;

        int cnt = p.size();

        foR(j,0,n){
                if (m.find(s[j]) != m.end() && m[s[j]]){
                    m[s[j]]--,cnt--;
                    if (cnt == 0) ans.push_back(i);
                }
                else {
                    while (i < j){
                        if (m.find(s[i]) != m.end()){
                            cnt++, m[s[i]]++;
                        }
                        i++;

                        if (m.find(s[j]) != m.end() && m[s[j]]){
                            j--;
                            break;
                        }
                       
                    }
                        if (m.find(s[i])==m.end()) i = j + 1;
            
             
            }
                
        }
            return ans;
    }
};
