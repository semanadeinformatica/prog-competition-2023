# Smash Browser

## Original Problem
https://codeforces.com/problemset/problem/1633/C

## Description

Lario is about to face his most terrible enemy: Browser! Help Lario choose his loadout to defeat Browser and save the princess!

## Problem Statement

Lario has a certain amount of health, MH, an amount of damage he deals with each attack, MD. Furthermore, he has C coins to pay the magic wizard. One coin can either buy a health potion, which increases Lario's health by H, or a damage potion, which increases Lario's damage by D.
Browser also has a certain amount of health, BH, and an amount of damage he deals with each attack, BD. Lario and Browser take turns attacking each other, starting with Lario. If Lario's health reaches 0 or below, he loses. If Browser's health reaches 0 or below, Lario wins.
Can you tell Lario if he can build a loadout that will allow him to defeat Browser?

## Input

The first line of input contains an integer T, the number of test cases.
The first line of each test case contains two integers LH and LD, the initial health and damage of Lario.
The second line of each test case contains two integers BH and BD, the initial health and damage of Browser.
The third line of each test case contains three integers C, H, and D, the number of coins Lario has, the amount of health a health potion gives, and the amount of damage a damage potion gives.

## Constraints

- 1 ≤ LH, BH ≤ 10<sup>15</sup>
- 1 ≤ LD, BD ≤ 10<sup>9</sup>
- 0 ≤ C ≤ 10<sup>5</sup>
- 1 ≤ H, D ≤ 10<sup>9</sup>

## Output
You must output a single line for each test case. If Lario can defeat Browser, output "Lario wins!". Otherwise, output "Lario loses!".
