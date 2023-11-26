class Solution {
public:
    string largestMerge(string word1, string word2) {
        int i = 0, j = 0;
        string merge = "";
        int n = word1.length() , m = word2.length();
        
        while(i < n && j < m){
            if(word1[i] < word2[j]){
                merge += word2[j];
                j++;
            }
            else if (word1[i] == word2[j]){
                if(word1.substr(i) >= word2.substr(j)){
                    merge += word1[i];
                    i++;                    
                }
                else{
                    merge += word2[j];
                    j++;
                }

            }
            else{
                merge += word1[i];
                i++;
            }
        }

        while(i < n)
        {
            merge += word1[i++];
        }

        while(j < m){
            merge += word2[j++];
        }

        return merge;
    }
};