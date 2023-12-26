class Solution {
public:
    int maxProfit(vector<int>& p) {
        int L = 0, m = 0;
        for(int R=0;R<p.size();R++){
            if(p[R]>p[L]) m = max(m, p[R] - p[L]);
            else L = R;
        }
        return m;
    }
};