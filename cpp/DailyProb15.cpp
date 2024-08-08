/* 2798. Number of Employees Who Met the Target */

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int n = hours.size();
        int cnt = 0;
        for(int i : hours){
            if(i>=target) cnt++;
        }
        return cnt;
    }
};