class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int size = flowerbed.size();
        int count = 0;
        
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                bool left_empty = (i == 0) || (flowerbed[i - 1] == 0);
                bool right_empty = (i == size - 1) || (flowerbed[i + 1] == 0);
    
                if (left_empty && right_empty) {
                    flowerbed[i] = 1;
                    count++;
                    if (count >= n) return true;
                    i++; 
                }
            }
        }
        return count >= n;
        }
    };