# Doombas Colliding

# Original Problem
https://codeforces.com/problemset/gymProblem/102966/G

## Description
Doombas are simple (and pretty dumb) creatures. Care to find out how much time they take to fall off a platform?

## Problem Statement
Doombas are simple, brown and dumb creatures with the following behaviour:

- Initially, they point in one direction, (left: 0, right: 1).
- They move in the direction they are currently facing, as long as there are no obstacles. 
- If two doombas collide, they will flip their direction immediately. 
- When a doomba reaches one end of the platform, it falls.

Stomping them gets boring quickly... ask Lario, he has been doing it for years now! That's why sometimes, when he finds a platform with only doombas on it (after checking no one is watching him), he won't spend energy stomping those doombas. Instead, he'll just watch them fall off the platform by themselves.

Lario wants your help to figure out how many seconds he has to wait for a platform that is L blocks long (extending from the coordinate 0 to L) and has D Doombas on it, to be completely empty (with no Doombas on it). 

For this problem purposes, consider the size of a doomba to be a single point. No two doombas will share the same initial x coordinate. All doombas will advance with a speed of 1 block per second.

## Input
The first line of the input contains two integers L, the length of the platform in blocks, and D, the number of doombas on the platform.
Each of the following D lines contains two integers p<sub>i</sub>, the position of the doomba on the platform, and d<sub>i</sub>, the initial direction of the doomba (0 corresponds to left and 1 corresponds to right)

## Constraints
- 2 ≤ L ≤ 10<sup>16</sup>
- 1 ≤ D ≤ 10<sup>4</sup>
- 0 < p<sub>i</sub> < L
- d<sub>i</sub> ∈ {0, 1}

## Output
The time in seconds that must pass for the platform to be empty