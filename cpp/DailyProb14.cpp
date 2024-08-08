/* 2037. Minimum Number of Moves to Seat Everyone */

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n = seats.size();

        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());

        int minMoves=0;
        for(int i=0;i<n;i++){
            int diff = 0;
            diff = abs(students[i] - seats[i]);
            minMoves += diff;
        }
        return minMoves;
    }
};