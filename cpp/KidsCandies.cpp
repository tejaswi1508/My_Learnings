//KidsCandies
class Solution {
    public:
        int maximum(vector<int>& candies){
            int maxi = candies[0];
            int n = candies.size();
            for(int i=1;i<n;i++){
                if(candies[i]>maxi) maxi = candies[i];
            }
            return maxi;
        }
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            int n = candies.size();
            vector<bool> result;
            int maxi = maximum(candies);
            for(int i=0;i<n;i++){
                if(candies[i]+extraCandies >= maxi) result.push_back(true);
                else result.push_back(false);
            }
            return result;
        }
    };