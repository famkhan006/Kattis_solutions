class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        ranges::sort(players);
        ranges::sort(trainers);

        int i = 0, j = 0, cnt = 0;
        while(i < players.size() && j < trainers.size()){
            if(players[i] > trainers[j]) j++;
            else{
                i++;
                j++;
                cnt++;
            }

        }
        return cnt;
    }
};
