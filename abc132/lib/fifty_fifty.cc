#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <unordered_map>
#include "fifty_fifty.h"

// https://atcoder.jp/contests/abc132
// ctest -V -R Test*
// ctest --test-timeout
std::string solve_fifty_fifty(std::string arg) {
    int n = arg.length();
    char chars[n+1];
    std::strcpy(chars, arg.c_str());
    std::unordered_map<char, int> mp; 

    for(int i = 0; i < n; i++) {
        std::cout << chars[i];
        mp[chars[i]] = mp[chars[i]] + 1;
    }

    for(auto i = mp.begin(); i != mp.end(); i++) {
        if(i->second != 2) {
            return std::string("No");
        }
    }
    if(mp.size() == 2) {
        return std::string("Yes");
    }
    return std::string("No");
}