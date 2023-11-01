# Editorial Doombas Colliding

## Unbridged problem statement

There are N creatures on top of a platform that is L blocks long. Each creature starts in a certain block (without sharing its block with another creature) facing either left or right. They all start walking simultaneously, with a speed of 1 block per second, and they only change direction when they collide with another creature, flipping their direction immediately. They fall off the platform if they reach either of its ends. Find out how much time it takes for the platform to be empty of creatures.

## Solution

Trying to keep track of all the collisions that occur is too difficult and slow. To solve this problem there is only one observation that has to be made: instead of thinking that each creature flips directions when they collide, pretend that they pass by each other without flipping its directions as it can be seen with this example:

--1--2-- —> ---12--- —> ---21--- -> --2--1--

If we pretend that they pass by each other, the last creature to fall off the platform will be the one that is the farthest to the platform he is facing, that is, the creature that is facing right that is the farthest to the right end or the creature that is facing left that is the farthest to the left end. To get the solution you only have to calculate the greatest distance from a creature to the end of the platform he is facing in O(N) time.