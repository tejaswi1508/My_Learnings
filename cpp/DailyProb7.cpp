/* 2011. Final Value of Variable After Performing Operations */
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;
        for(string str : operations){
            if(str == "++X" || str == "X++"){
                X = X + 1;
            }
            else if(str == "--X" || str == "X--"){
                X = X - 1;
            }
        }
        return X;
    }
};