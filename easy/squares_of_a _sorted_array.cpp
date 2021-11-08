// https://leetcode.com/problems/squares-of-a-sorted-array/
// Your runtime beats 98.35 % of cpp submissions.
// Your memory usage beats 26.84 % of cpp submissions.

class Solution {
public:
    void squared(vector<int>& nums) {
    for(auto i = nums.begin();i<nums.end();i++){
        *i = pow(*i,2);
    }
      
    }
    vector<int> sortedSquares(vector<int>& nums) {
    int i = 0;
    int size = nums.size();
    if(nums.empty()) return nums;
    while(i<size-1 && nums[i]<0) i++;
    if(i==0) {
        squared(nums);
        return nums;
    }
    if(i==size){
        reverse(nums.begin(),nums.end());
        squared(nums);
        return nums;
    }
    int j=i;
    i=i-1;
    vector<int> result;
    while(i>=0 && j<size) {
        if(abs(nums[i])<nums[j]) result.push_back(nums[i--]);
        else result.push_back(nums[j++]);
    }
    while(i>=0) result.push_back(nums[i--]);
    while(j<size) result.push_back(nums[j++]);
    squared(result);
    return result;
}
};
