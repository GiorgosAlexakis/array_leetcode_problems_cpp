// https://leetcode.com/problems/find-the-highest-altitude/
// Your runtime beats 100.00 % of cpp submissions.
// Your memory usage beats 74.66 % of cpp submissions.

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int sum = 0,max= 0;
    for(int x : gain) {
        sum+=x;
        if(sum>max){
            max = sum;
        }
    }
    return max;
    }
};
