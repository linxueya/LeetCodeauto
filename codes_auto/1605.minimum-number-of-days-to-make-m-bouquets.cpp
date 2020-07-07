#
# @lc app=leetcode.cn id=1605 lang=cpp
#
# [1605] minimum-number-of-days-to-make-m-bouquets
#
class Solution {
    public:
    int minDays(vector<int> b, int m, int k) {
        int inf = (int)1e9 + 1;
        int ans = inf;
        int n = b.size();
        
        int l = 0;
        int r = inf;
        while(l < r){
            int mid = (l + r) / 2;
            if(check(b, m, k, mid)){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        return l == inf ? -1 : l;
    }
    
    bool check(vector<int> b, int m, int k, int t){
        int cnt = 0;
        int total = 0;
        for(int i = 0; i < b.size(); i++){
            if(b[i] > t){
                cnt = 0;
                continue;
            }
            cnt++;
            if(cnt == k){
                total++;
                cnt = 0;
            }
        }
        return total >= m;
    }
};
# @lc code=end