
/*
    author : Neeraj Kumar Rawat
    platform : leetcode
    problem link : https://leetcode.com/problems/custom-sort-string/
    problem : 791 Custom Sort String
    difficulty: medium

*/ 




#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string customSortString(string order, string s) {
        
       
        sort(s.begin(), s.end(), [&]( char a, char b)-> bool{
            return order.find(a)<order.find(b);
        });
        return s;
    }
};