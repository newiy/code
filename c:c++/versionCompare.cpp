class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        while(i < version1.size() || j < version2.size()){
            int result1 = 0, result2 = 0;
            while(i < version1.size() && version1[i] != '.'){
                result1 = result1 * 10 + version1[i] - '0';
                i++;
            }
            i++;
            while(j < version2.size() && version2[j] != '.'){
                result2 = result2 * 10 + version2[j] - '0';
                j++;
            }
            j++;
            if(result1 > result2) return 1;
            if(result2 > result1) return -1;
        }
        return 0;
    }
};