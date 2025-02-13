from typing import List
from sortedcontainers import SortedList

class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        # Starting the operation count at 0 (because we haven't done any magic yet!) 🧙‍♂️✨
        min_Operations_To_Reach_Threshold = 0
        
        # Using SortedList to always keep the smallest numbers in order (think of it like a priority queue but fancier 💅)
        heap = SortedList(nums)

        # Grab the first two smallest numbers to start the fun! 🎉
        x, y = heap.pop(0), heap.pop(0)

        # We keep going until we reach the goal of 'k'! 🚀
        while x < k:
            # Add 1 to the operation count because we’re about to combine some numbers! 🤝
            min_Operations_To_Reach_Threshold += 1
            
            # Perform the magic operation: min(x, y) * 2 + max(x, y) (just like an alchemist's recipe!) 🧪
            value = min(x, y) * 2 + max(x, y)
            
            # Add the newly created "superpower" back into the list 💥
            heap.add(value)
            
            # Time for the next two smallest numbers to step up and join the party! 🎊
            x = heap.pop(0)

            # If the heap is empty, break out of the loop! We're done here 👋
            if not heap: break
            
            # Grab the next number to combine with 'x' (it's like a dance partner shuffle 💃🕺)
            y = heap.pop(0)

        # Return the total number of operations we did to reach the goal 🎯
        return min_Operations_To_Reach_Threshold