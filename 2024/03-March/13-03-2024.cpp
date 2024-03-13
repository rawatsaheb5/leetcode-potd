
/*
    author : Neeraj Kumar Rawat
    platform : leetcode
    problem link : https://leetcode.com/problems/find-the-pivot-integer/description/
    problem : 2485 Find the Pivot Integer
    difficulty: easy

*/ 




#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        
        vector<int> presum(n+1);
        for(int i=1; i<=n; i++){
            presum[i] = i+presum[i-1];
        }
        
        int cur = 0;

        for(int i=1; i<=n; i++){
            cur+=i;
            int rem = presum[n]-cur+i;
            if(cur == rem){
                return i;
            }
        }
        return -1;
    }
};