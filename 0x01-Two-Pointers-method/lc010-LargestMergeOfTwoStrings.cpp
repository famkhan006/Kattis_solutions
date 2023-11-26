#include <string>

class Solution {
public:
    string largestMerge(string word1, string word2) {
        string merge;
        int i = 0, j = 0;
        
        while (i < word1.size() && j < word2.size()) {
            if (word1[i] > word2[j])       
                merge += word1[i++];
                
            else if (word1[i] == word2[j])  
            (word1.substr(i) >= word2.substr(j))? merge += word1[i++]
                                                : merge += word2[j++];
            else 
                merge += word2[j++];                            
        }
        
        merge += word1.substr(i);
        merge += word2.substr(j);
        
        return merge;
    }
};