/*https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1*/

unordered_map<int,int> mp;
        int l=0,r=0,maxlen=0;
        while(r<N){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0){
                    mp.erase(fruits[l]);
                }
                l++;
            }
            if(mp.size()<=2){
                maxlen=max(maxlen,r-l+1);
            }
            r++;
        }
        return maxlen;