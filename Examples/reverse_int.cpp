#include<iostream>
#include<string>
using namespace std; 
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string rev = s;
        reverse(rev.begin(), rev.end());
        return rev == s;
    }
};