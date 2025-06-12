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

//Alternate solution

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        return count_if(hours.begin(), hours.end(), [&](int h) {
            return h >= target;
        });
    }
};