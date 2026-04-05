class Solution {
    public:
        int maxArea(vector<int>& heights) {
                int maximum = 0 ;
                        int h = 0;
                             for(int i = 0 ; i < heights.size() ; i++){
                                     for(int j = heights.size() - 1; j > i; j--){
                                                 if(heights[i] >= heights[j]){
                                                                 h = heights[j];
                                                                             }else{
                                                                                             h = heights[i];
                                                                                                         }
                                                                                                                     maximum = max(maximum,(j-i)*h);
                                                                                                                             }
                                                                                                                                  }
                                                                                                                                        return maximum;     
                                                                                                                                            }
                                                                                                                                            };

