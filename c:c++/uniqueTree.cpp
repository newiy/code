/*
 Given n, how many structurally unique BST's (binary search trees) that store values 1...n?
 
 For example,
 Given n = 3, there are a total of 5 unique BST's.
 
 1         3     3      2      1
 \       /     /      / \      \
 3     2     1      1   3      2
 /     /       \                 \
 2     1         2                 3
 */

class Solution {
public:
    int numTrees(int n) {
        if(n == 0 || n == 1)
            return n;
        vector<int> ways;
        ways.push_back(1);
        ways.push_back(1);
        for(int i = 2; i <=n; i++){
            ways.push_back(0);
            for(int j = 0; j < i; j++){
                ways[i] += ways[j] * ways[i - j - 1];
            }
        }
        return ways[n];
    }
};