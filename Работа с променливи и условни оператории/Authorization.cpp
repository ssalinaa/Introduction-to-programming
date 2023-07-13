#include <iostream>

/*

You are given a number representing age. 
If the number is more than 18 print "You are good to go". 
Otherwise print "You are underaged". Use ternary operator.

*/

int main() {

    unsigned n;
    std::cin >> n;
    std::cout << (n >= 18 ? "You are good to go\n" : "You are underaged\n");
   
    return 0;
}