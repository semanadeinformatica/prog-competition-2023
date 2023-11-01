# Editorial Squashing Mega Doombas

## Unbridged problem statement

Consider the height of N contiguous mountains. The goal is to determine the bridge that can be built so that its distance to the ground is the greatest. To build a bridge you have to use 2 non-contiguous mountains as the bridge’s ends and every mountain in between them must be shorter. The height of the bridge will be the difference between the height of the shorter mountain that is used as a bridge’s end (the left or right end) and the height of the shortest mountain between the ones used as the bridge’s ends. If there is no way to build a bridge the solution should be zero.

## Solution

Observation: there are two types of bridges to be considered. The ones where the mountain used as the left end is lower or as tall as the right one and the ones where the mountain used as the right end is lower or as tall as the left one.

We can use a greedy paradigm to solve this problem. From left to right repeat these steps until you have visited all bridges:

1. Pick the first mountain as the left end of the bridge;
2. Continue visiting the next mountains until you reach one that is higher or as tall as the one picked in step 1.. That will be the mountain chosen to be the right end of the brdige. Store the height of the lowest mountain that has been visited between the left and right end;
3. If the right end mountain is immediately after the left end, ignore this result. If not, then record the difference between the left end mountain and the shortest mountain between the two ends. If the result is higher than your current answer, keep this result as the new answer. This works because any bridge that can be built between the two ends that were chosen will be lower than the one that was built;
4. Choose the right end mountain as the new left end mountain for the next bridge.

After processing the mountains from left to right, repeat the procedure by processing the mountains from right to left.

This algorithm guarantees a correct answer in O(N) time