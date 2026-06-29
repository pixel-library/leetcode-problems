class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int lp=0, rp = height.size()-1;

        while(lp < rp) {

            int wt = rp-lp;
            int ht = min(height[lp], height[rp]);
            int currWater = wt * ht;

            maxWater = max(maxWater, currWater);

            height[lp] < height[rp]? lp++ : rp--;
            
        }

        return maxWater;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna