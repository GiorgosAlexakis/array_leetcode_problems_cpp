// https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Your runtime beats 43.20 % of cpp submissions.
// Your memory usage beats 36.91 % of cpp submissions.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int left=0,right=1;
        while (right<nums.size()){
          if(nums[left]==nums[right]) right++; 
          else {left++;nums[left] = nums[right];}
        }
        return left+1;
}
};
