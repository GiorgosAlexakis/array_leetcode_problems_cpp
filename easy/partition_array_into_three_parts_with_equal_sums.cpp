// https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/
// Your runtime beats 14.30 % of cpp submissions.
// Your memory usage beats 61.33 % of cpp submissions.

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
    int sum = 0;
    for(auto it = arr.begin();it<arr.end();it++) sum+=*it;   
    if(sum%3!=0) return false;
    int third_of_sum = sum/3;
    int i =0,j=arr.size()-1;
    int left_sum=arr[i],right_sum=arr[j];
    while(i<j-1){
        if(left_sum==third_of_sum && right_sum==third_of_sum) return true;
        if(left_sum!=third_of_sum) left_sum+=arr[++i];
        if(right_sum!=third_of_sum) right_sum+=arr[--j];
    }
    return false;
    }
};
