# Mushroom Baskets

## Original Problem
https://open.kattis.com/problems/fruitbaskets

## Description
The elder Froad had the craziest business idea... Try to convince him his plan isn't that good.

## Problem Statement
The Elder Froad, the boss of the most prestigious mushroom shop, had the craziest idea. He wants to introduce a new product to the market - mushroom baskets! They will contain all possible combinations of mushrooms available to satisfy different customer needs, but at most one mushroom of each type. He doesn't want to have small mushroom baskets, so all must contain at least 200 grams worth of mushrooms.

As his assistant you have tolerated his crazy ideas before, but you can't put up with this one. You realized the company might end up with 2<sup>N</sup> - 1 different baskets, where N is the number of different types of mushrooms the company sells. You know that your boss won't understand this argument, so you are going to convince him a different way. You want to tell him the total weight of mushrooms in the baskets and tell him that he will need a lot of Gnochiis to carry all baskets from the collection.

## Input
The first line of input contains an integer N. The second line contains N integers – weights of available types of mushrooms in grams. All weights are integers between 50 and 1000.

## Constraints
- 1 ≤ N ≤ 40
- All weights are integers between 50 and 1000 grams

## Output
Output one line with one integer – the total weight of all fruit in the baskets that have at least 200 grams of fruit.