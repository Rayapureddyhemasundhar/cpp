#include <iostream>
#include <string.h>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        int total = 0;
        for (int i = 0; i < s.size(); i++)
        {
            // If current value is less than next value → subtract it
            if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]])
            {
                total -= mp[s[i]];
            }
            else
            {
                total += mp[s[i]];
            }
        }
        return total;
    }
};
