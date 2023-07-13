#include <iostream>

/*
Gosho and Pesho are neighbours, but after a conflict they are at war.
Write a program to simulate this war. 
Gosho attacks on every even turn of the game while
Pesho attacks on every odd turn.
You will receive how much damage these attacks do from the console.
After every turn print "{turn player} reduced {other player} to {health of attacked player} health."
Both players start with 100 Health points.
On every third turn Pesho and Gosho restore 10 Health Points. 
Health points are restored after the attack is made.
When one of the player’s health is below or equal to zero you should stop
any other further operations and print who the winner is and in which turn he won.

Example:
Input	
30
40	

Output
Pesho reduced Gosho to 70 health.
Gosho reduced Pesho to 60 health.
Pesho reduced Gosho to 40 health.
Gosho reduced Pesho to 30 health.
Pesho reduced Gosho to 20 health.
Gosho won in the 6th turn.
*/


int main() {

    int a, b;
    std::cin >> a >> b;
    int p_health = 100;
    int g_health = 100;
    int turn = 1;

    while (p_health > 0 && g_health > 0)
    {
        if (turn % 2) {

            g_health -= a;
            if (g_health <= 0) {

                std::cout << "Pesho won in the " << turn << "th turn\n";
            }
            else {

                std::cout << "Pesho reduced Gosho to " << g_health << " health.\n";
            }
        }
        else {
            p_health -= b;
            if (p_health <= 0) {

                std::cout << "Gosho won in the " << turn << "th turn\n";
            }
            else {

                std::cout << "Gosho reduced Pesho to " << p_health << " health.\n";
            }
        }

        if (turn % 3 == 0 && p_health > 0 && g_health > 0) {

            p_health += 10;
            g_health += 10;
        }
        turn++;
    }

    return 0;
}