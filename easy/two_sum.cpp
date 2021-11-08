// https://leetcode.com/problems/two-sum/
// Your runtime beats 79.41 % of cpp submissions.
// Your memory usage beats 61.30 % of cpp submissions.
class Solution {
public:
    static vector<int> twoSum(vector<int>& nums, int target) {
    auto vector_size = nums.size();
    int i=0,j= vector_size-1;
    int check;
    vector<int> V(vector_size);
    iota(V.begin(),V.end(),0); 
    sort( V.begin(),V.end(), [&](int i,int j){return nums[i]<nums[j];} ); 
    
    while(i<j) {
      check = nums[V[i]]+nums[V[j]];
      if(check>target) j--;
      else if(check<target) i++;
      else break;
    }
    vector<int> result{V[j],V[i]};
    return result;
    }
};
