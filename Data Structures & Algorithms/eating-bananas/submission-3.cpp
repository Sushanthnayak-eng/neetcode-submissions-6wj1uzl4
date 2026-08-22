class Solution {
public:
    bool fn(vector<int> &piles, int h, long long limit){
           long long count = 0;
           for(int i = 0 ; i < piles.size(); i++){
                count += (piles[i] + limit - 1)/limit;
           }
           if(count <= h) return true;
           return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
      long long low = 1;
      long long high = 0;
      for(int i = 0 ; i < piles.size(); i++){
           high += piles[i];
      }
      while(low <= high){
          long long mid = low + (high - low)/2;
          if(fn(piles,h,mid)){
              high = mid - 1;
          }else{
              low = mid + 1; 
          }
      }
      return (int)low;
    }
};
