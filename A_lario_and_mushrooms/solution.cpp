#include <bits/stdc++.h>

using namespace std;

int main() {
    int weight; cin >> weight;

    if (weight <= 999)
        cout << "Mini Mushroom" << '\n';
    else if (weight <= 1499)
        cout << "Regular Mushroom" << '\n';
    else if (weight <= 1899)
        cout << "Super Mushroom" << '\n';
    else 
        cout << "Mega Mushroom" << '\n';

    return 0;
}