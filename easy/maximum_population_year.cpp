// https://leetcode.com/problems/maximum-population-year/
// Your runtime beats 83.84 % of cpp submissions.
// Your memory usage beats 62.96 % of cpp submissions.

class Solution {
public:
 
    int maximumPopulation(vector<vector<int>>& logs) {
    int size = logs.size();
    int max_sum = 0;
    int result_index = 0;
    sort(logs.begin(), logs.end());
   
    for(int i = 0;i<size;i++){
        int sum = 0;
        for(int j = 0;j<size;j++){
            if(logs[j][0] <= logs[i][0] && logs[j][1]>logs[i][0]) {
                sum++;
                if(sum>max_sum){ 
                max_sum = sum;
                result_index = j;
                }
            }
        }
    }
    return logs[result_index][0];
}
};
