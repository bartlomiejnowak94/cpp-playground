#include <unordered_map>
#include<iostream>
#include<string>
using namespace std; 
class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char,int> my_dict {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int res = 0;
        for (int i=0; i<s.size(); i++){
            res += my_dict[s[i]];
            if (i > 0){
                if (((s[i] == 'V') || (s[i] == 'X')) && (s[i-1] == 'I')){
                    res -= 2;
                }
                else if (((s[i] == 'L') || (s[i] == 'C')) && (s[i-1] == 'X')){
                    res -= 20;
                }
                else if (((s[i] == 'D') || (s[i] == 'M')) && (s[i-1] == 'C')){
                    res -= 200;
                }
            }
        }
        return res;
    }
};
        