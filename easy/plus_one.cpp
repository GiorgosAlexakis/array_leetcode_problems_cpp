// https://leetcode.com/problems/plus-one/
// Your runtime beats 100.00 % of cpp submissions. 

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int j = digits.size()-1;
    int rem = 1;
    while(rem!=0 && j>=0){
        digits[j] +=rem;
        if(digits[j]>=10) 
        {
            if(digits[j]!=10) rem = digits[j]-10;
            else rem = 1;
            digits[j] = 0;
        }
        else rem = 0;
        j--;
    }

    if(rem!=0) digits.insert(digits.begin(), rem);
    return digits;
    }
};
