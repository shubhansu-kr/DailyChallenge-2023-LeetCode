// https://leetcode.com/problems/restore-ip-addresses/

#include <bits/stdc++.h>
using namespace std ;

class Solution {

public:
    bool isValidIP(string &ip){
        vector<string> sub;
        string temp = "";
        for(auto &it: ip){
            if (it == '.'){
                if (temp == "") return false;
                sub.emplace_back(temp);
                temp = "";
                continue;
            }
            temp += it;
        }
        if (temp == "") return false;
        sub.emplace_back(temp);
        if (sub.size() != 4) return false;
        for(auto &it: sub){
            // check for each subdom. 
            if (it.size() > 4) return false;

            // range 0 to 255
            int i = stoi(it);
            if (i < 0 || i > 255) return false;

            // check for leading zeroes. 
            if (i > 0 && it[0] == '0') return false;
            if (i == 0  && it.size() != 1) return false;
        }
        return true;
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        string sub;
        solve(ans, s, sub);
        return ans;
    }

    void solve(vector<string> &ans, string &s, string sub, int count = 0, int i = 0) {
        if(count == 4 || i >= s.size()) {
            // cout << sub << endl;
            if (isValidIP(sub)) ans.emplace_back(sub);
            return;
        }

        sub.push_back(s[i]);

        // Put Dot 
        sub.push_back('.');
        solve(ans, s, sub, count+1, i+1);
        sub.pop_back();

        // Don't Put Dot
        solve(ans, s, sub, count, i+1);
    }
};
class Solution0 {
    // Runtime error: Stoi cannot convert any string having more than 10 digits.
public:
    bool isValidIP(string &ip){
        vector<string> sub;
        string temp = "";
        for(auto &it: ip){
            if (it == '.'){
                if (temp == "") return false;
                sub.emplace_back(temp);
                temp = "";
                continue;
            }
            temp += it;
        }
        if (temp == "") return false;
        sub.emplace_back(temp);
        if (sub.size() != 4) return false;
        for(auto &it: sub){
            // check for each subdom. 

            // range 0 to 255
            int i = stoi(it);
            if (i < 0 || i > 255) return false;

            // check for leading zeroes. 
            if (i > 0 && it[0] == '0') return false;
            if (i == 0  && it.size() != 1) return false;
        }
        return true;
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        string sub;
        solve(ans, s, sub);
        return ans;
    }

    void solve(vector<string> &ans, string &s, string sub, int count = 0, int i = 0) {
        if(count == 4 || i >= s.size()) {
            // cout << sub << endl;
            if (isValidIP(sub)) ans.emplace_back(sub);
            return;
        }

        sub.push_back(s[i]);

        // Put Dot 
        sub.push_back('.');
        solve(ans, s, sub, count+1, i+1);
        sub.pop_back();

        // Don't Put Dot
        solve(ans, s, sub, count, i+1);
    }
};

class Solution0 {
    // WA
public:
    bool isValidIP(string &ip){
        vector<string> sub;
        string temp = "";
        for(auto &it: ip){
            if (it == '.'){
                if (temp == "") return false;
                sub.emplace_back(temp);
                temp = "";
                continue;
            }
            temp += it;
        }
        if (temp == "") return false;
        sub.emplace_back(temp);
        if (sub.size() != 4) return false;
        for(auto &it: sub){
            // check for each subdom. 

            // range 0 to 255
            int i = stoi(it);
            if (i < 0 || i > 255) return false;

            // check for leading zeroes. 
            if (i > 0 && it[0] == '0') return false;
            if (i == 0  && it.size() != 1) return false;
        }
        return true;
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        string sub;
        solve(ans, s, sub);
        return ans;
    }

    void solve(vector<string> &ans, string &s, string &sub, int count = 0, int i = 0) {
        if(count == 4 || i >= s.size()) {
            // cout << sub << endl;
            if (isValidIP(sub)) ans.emplace_back(sub);
            return;
        }

        sub.push_back(s[i]);

        // Put Dot 
        sub.push_back('.');
        solve(ans, s, sub, count+1, i+1);
        sub.pop_back();

        // Don't Put Dot
        solve(ans, s, sub, count, i+1);
    }
};

int main () {
    Solution Obj1; 

    // string s1 = "123.32.41.341", s2 = "12.34.234", s3 = "12.34.234.0.";
    // cout << Obj1.isValidIP(s1) << endl;
    // cout << Obj1.isValidIP(s2) << endl;
    // cout << Obj1.isValidIP(s3) << endl;

    string s = "25525511135";
    vector<string> ans = Obj1.restoreIpAddresses(s);

    for(auto &it: ans){
        cout << it << endl;
    }

    return 0;
}