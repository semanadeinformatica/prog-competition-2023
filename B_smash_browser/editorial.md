# Editorial Smash Browser

## Unbridged problem statement

You are given the hero’s and monster’s health HH and MH, amount of damage the hero and the monster deals with each attack HD and MD, and the amount of coins the hero has C (between 0 and 2*10^5). Starting with the hero, the hero and the monster attack each other, one at a time, until one of them loses, that is, its health reaches 0. Before the fight, the hero can spend each of its coins to buy a potion that increases either H units of health or D units of damage. Determine if the hero wins the battle against the monster, after the upgrades he gets from spending his coins.

## Solution

Without upgrades, the number of times the hero has to attack to defeat the monster is equal to ⌈MH/HD⌉ and the number of times the monster has to attack to defeat the hero is equal to ⌈HH/MD⌉. So, if the first number is higher or equal to the second one, the hero wins the fight. Since the number of coins isn’t high, we can iterate over the number of coins that will be used in health upgrades, use the rest of them in damage upgrades, and determine if the hero wins with the previous formulas, in each of the ways the hero can spend the coins. If one of them works, the hero wins.