#include <bits/stdc++.h>

bool isPalindrome(string s, int start, int end)
{
    while (start <= end)
    {
        if (s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}

void func(int index, string &s, vector<string> &temp, vector<vector<string>> &res)
{
    if (index == s.size())
    {
        res.push_back(temp);
        return;
    }
    for (int i = index; i < s.size(); i++)
    {
        if (isPalindrome(s, index, i))
        {
            temp.push_back(s.substr(index, i - index + 1));
            func(i + 1, s, temp, res);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string &s)
{
    vector<vector<string>> res;
    vector<string> temp;
    func(0, s, temp, res);
    return res;
}