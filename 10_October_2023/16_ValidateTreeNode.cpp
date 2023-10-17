// https://leetcode.com/problems/validate-binary-tree-nodes/?envType=daily-question&envId=2023-10-17

#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    bool validateBinaryTreeNodes(int n, std::vector<int>& leftChild, std::vector<int>& rightChild) {
        std::deque<int> queue; 
        std::unordered_set<int> visited; 
        int root = findRoot(n, leftChild, rightChild); 
        if (root == -1) return false; 

        queue.push_back(root); 
        while (!queue.empty()) {
            int node = queue.front(); 
            queue.pop_front();
            if (node == -1) continue;

            if (!visited.insert(node).second) return false; 

            int left = leftChild[node];
            int right = rightChild[node];

            queue.push_back(left); 
            queue.push_back(right); 
        }

        return visited.size() == n; 
    }

private:
    int findRoot(int n, std::vector<int>& left, std::vector<int>& right) {
        std::unordered_set<int> set;
        for (int i = 0; i < n; i++) set.insert(i); 
        for (int node : left) set.erase(node); 
        for (int node : right) set.erase(node); 

        return set.size() == 1 ? *set.begin() : -1; 
    }
};

int main () {
    
    return 0;
}