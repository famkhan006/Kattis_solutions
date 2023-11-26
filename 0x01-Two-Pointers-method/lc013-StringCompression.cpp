class Solution {
public:
    int compress(vector<char>& chars) {
        int start = 0, end = 0;
        while(end < chars.size())
        {
            chars[start++] = chars[end++];
            int cnt = 1;
            while(end < chars.size() &&
                chars[end] == chars[end-1] ){
                       end++;
                       cnt++;
                   }
            if(cnt > 1){
                string num = to_string(cnt);
                for(char j : num){
                    chars[start++] = j;
                }
            }
        }
        return start;
    }
};