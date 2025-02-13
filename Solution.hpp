#include <vector>
#include <queue>
using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            // Keep track of how many operations we've done so far (let's call it our operation 'score'! 🏅)
            int min_Operations_To_Reach_Threshold = 0;
    
            // Use a priority queue to always pick the smallest two numbers (like a priority list, but with a heap! 🏰)
            priority_queue<long, vector<long>, greater<long>> heap;
    
            // Push all numbers from the array into the heap (they’re ready for their turn in the operation circus! 🎪)
            for(const int& num: nums) heap.push((long) num);
    
            // Time to grab the first two smallest numbers from the heap! Let's call them "x" and "y" 👫
            long x = heap.top(); heap.pop();
            long y = heap.top(); heap.pop();
    
            // While our smallest number is still less than 'k', we keep going! The operation continues! 💥
            while(x < k) {
                // Count this operation as another success! 🏆
                ++min_Operations_To_Reach_Threshold;
    
                // Combine "x" and "y" with our special formula (it's like math magic! ✨)
                long value = min(x, y) * 2 + max(x, y);
                
                // Push the new "supercharged" number back into the heap to keep the operation rolling 🔄
                heap.push(value);
    
                // Grab the new smallest number "x" (the dance continues 💃)
                x = heap.top(); heap.pop();
    
                // If the heap is empty, we can't continue, so we break out 🛑
                if(heap.empty()) break;
    
                // Grab the new second smallest number "y" for the next round 🎲
                y = heap.top(); heap.pop();
            }
    
            // Return the total number of operations we had to do to reach the target! 🎯
            return min_Operations_To_Reach_Threshold;
        }
    };