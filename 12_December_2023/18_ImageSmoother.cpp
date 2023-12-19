// https://leetcode.com/problems/image-smoother/?envType=daily-question&envId=2023-12-19

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    public:
    std::vector<std::vector<int>> imageSmoother(std::vector<std::vector<int>>& img) {
        int m = img.size();
        int n = img[0].size();
        std::vector<std::vector<int>> res(m, std::vector<int>(n, 0));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                res[i][j] = smoothen(img, i, j);
            }
        }

        return res;
    }

private:
    int smoothen(const std::vector<std::vector<int>>& img, int x, int y) {
        int m = img.size();
        int n = img[0].size();
        int sum = 0;
        int count = 0;

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int nx = x + i;
                int ny = y + j;
                if (nx >= 0 && nx < m && ny >= 0 && ny < n) {
                    sum += img[nx][ny];
                    ++count;
                }
            }
        }

        return sum / count;
    }
};

class Solution {
    // WA
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m = img.size(), n = img[0].size();  
        vector<vector<int>> checkSum(m+1, vector<int>(n+1, 0));

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j) {
                checkSum[i+1][j+1] = img[i][j] + checkSum[i][j+1];
            }
        } 

        vector<vector<int>> ans(m, vector<int>(n));
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                pair<int, int> top = {max(1, i), max(1, j)}, bottom = {min(m, i+2), min(n, j+2)};

                // sum = cS(bottom) - cs(up) - cs(lt) + cs(top)
                int sum = checkSum[bottom.first][bottom.second] - checkSum[bottom.first][top.second-1] - checkSum[top.first-1][bottom.second] + checkSum[top.first-1][top.second-1];
                
                // count = 1 + top 3 + bottom 3 + left 1 + right 1;
                int count = 1;
                if (i > 0) {
                    if (j > 0) count++;
                    if (j < n-1) count++;
                    count++; 
                }
                if (j > 0) count++;
                if (j < n-1) count++;
                if (i < m-1) {
                    if (j > 0) count++;
                    if (j < n-1) count++;
                    count++;
                }

                ans[i][j] = floor(float(float(sum)/float(count)));
            }
        }

        return ans;
    }
};

int main () {
    
    return 0;
}