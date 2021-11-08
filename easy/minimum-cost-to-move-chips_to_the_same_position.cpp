// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/submissions/
// Your runtime beats 51.03 % of cpp submissions.

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int sum_even = 0;
        int size = position.size();
        for(int i = 0;i<size;i++) {
            if(position[i]%2==0) sum_even++;
        }
        int sum_odd = size - sum_even;
        if(sum_even>sum_odd) return sum_odd;
        else return sum_even;
        //alternatively just use min(sum_odd,sum_even) to get faster submission
    }
};
