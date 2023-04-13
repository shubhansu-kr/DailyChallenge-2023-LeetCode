// https://leetcode.com/problems/validate-stack-sequences/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> stack;
        int index = 0;
        for (int &it : pushed)
        {
            stack.push(it);
            while (!stack.empty() && stack.top() == popped[index])
            {
                stack.pop();
                index++;
            }
        }
        return stack.size() == 0;
    }
};

int main()
{

    return 0;
}