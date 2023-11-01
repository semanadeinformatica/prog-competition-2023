# Editorial Mushroom Weights

## Unbridged problem statement

Given the weights of each type of mushroom that is available (each type weighs between 50 and 1000 grams), find out the sum of the weights of all mushroom baskets you can put together that have at least 200 grams worth of mushrooms. Note that a mushroom basket can’t have more than one mushroom of each type (there are, therefore, 2^N - 1 possible baskets)

## Solution

Trying to calculate all possible baskets with at least 200 grams will give you a Time Limit Exceeded verdict, as there are, in the worst case, 40 different types of mushroom which gives you 2^40 - 1 possible different baskets.

Note that the union of the set of all baskets with more than 200 grams and the set of all basket with at most 200 grams is the set of all the possible baskets we can put together. The answer to the problem is calculating the sum of the weights of all baskets we can put together without any weight restriction and subtract the sum of weights of all baskets with at most 200 grams. Since every mushroom weighs at least 50 grams, the baskets that have at most 200 grams will have at most 4 mushrooms in total. Therefore exploring all these baskets is way quicker than exploring all of the baskets with over 200 grams.

To calculate the sum of weights of all possible baskets, we just have to calculate the sum 2^(N-1) * (w1 + w2 + w3 + … wN) where wi is the weight of the i-th type of mushroom and N the number of different types of mushrooms. This works because each type of mushroom is present in half of the possible baskets.

To calculate the sum of weights of all baskets with at most 200 grams we can use a backtracking algorithm where for each type of mushroom we explore a branch where we don’t put the mushroom in the basket and another one where we put it. Branches where the basket has over 200 grams are pruned.