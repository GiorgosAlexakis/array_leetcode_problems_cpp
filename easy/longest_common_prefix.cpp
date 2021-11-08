// https://leetcode.com/problems/longest-common-prefix/
// Your runtime beats 100.00 % of cpp submissions.
// Your memory usage beats 19.92 % of cpp submissions.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs){
    
    int i = 0, j = 1;
    int n_words = strs.size();
    string common = "";
    char char_check;
    int stop_flag = 0;
    if(strs.size()==1) {return strs[0];}
    vector<int> sizes(strs.size());
    for(int k=0;k<n_words;k++){ sizes[k] = strs[k].size();}
    while (true) {
        j = 1;
        if(!strs[0].empty()) char_check = strs[0][i];
        else break;
        while (j < n_words && sizes[j] != i && strs[j][i]==char_check) {
            j++;
            //if (strs[j].empty()){stop_flag=1;break;}
        }
        if (j == n_words) { common = common + char_check; }
        else break; 
        i++;
    }
    return common;
}

};
