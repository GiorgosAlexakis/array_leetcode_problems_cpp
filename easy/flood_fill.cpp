// https://leetcode.com/problems/flood-fill/
// Your runtime beats 97.65 % of cpp submissions.
// Your memory usage beats 52.41 % of cpp submissions.

class Solution {
public:
    bool check_in_bounds(int sr,int sc,int m,int n){
        if(sr<m && sc<n && sr>=0 && sc>=0) return true;
        else return false;
    }
    
    int solve(vector<vector<int>>& image, int sr, int sc, int m, int n,int newColor,int color) {
        if(check_in_bounds(sr,sc,m,n) && image[sr][sc]==color && image[sr][sc]!=newColor){
            image[sr][sc] =newColor;
            int res1=solve(image,sr-1,sc,m,n,newColor,color);
            int res2=solve(image,sr+1,sc,m,n,newColor,color);
            int res3=solve(image,sr,sc+1,m,n,newColor,color);
            int res4=solve(image,sr,sc-1,m,n,newColor,color);
            int result = res1+res2+res3+res4;
            if(result==0) return 0;
            else if(result>0) return 1;
        }
        return 0;
          
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        int m=image.size();
        int n=image[0].size();
        solve(image,sr,sc,m,n,newColor,color);
        return image;
    }
};
