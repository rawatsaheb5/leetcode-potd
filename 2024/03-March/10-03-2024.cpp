/*
    author : Neeraj Kumar Rawat
    platform : leetcode
    problem link : https://leetcode.com/problems/intersection-of-two-arrays/description/
    problem : 349 Intersection of two arrays
    difficulty: easy

*/ 

/*
    approach:
        Requirement : one map and one set

            : take all the elements of one array into the map and iterate on each element of other array
                if (i)th element if present in map then insert in map

            : then take out all element from map and insert in vector because return type is vector
*/ 


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> mp;
        set<int> s;
        for(auto x: nums1){
            mp[x]++;
        }
        for(auto x: nums2){
            if(mp.count(x)>0){
                s.insert(x);
            }
        }
        vector<int> ans;
        for(auto x: s){
            ans.push_back(x);
        }
        return ans;
        
    }
};