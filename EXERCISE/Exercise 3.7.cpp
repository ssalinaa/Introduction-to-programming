#include <iostream>
#include <string>
#include <sstream>
#include <climits>

/*
3.7. Task 3.10. [1] To write a program that, for a given numerical sequence a0, a1, ..., an−1 (1 ≤ n ≤ 100), finds the length of the longest ´u
nondecreasing sequence ai, ai+1, ..., ai+k (ai ≤ ai+1 ≤ ... ≤ ai+k).
*/


int main() {

    int n;
    std::cout << "Enter the number of elements in the sequence: ";
    std::cin >> n;

    int longestIncreasingSubsequence = 1; // Initial length of the longest subsequence is 1
    int currentSubsequence = 1; // Length of the current subsequence

    int prevElement, currentElement;

    std::cout << "Enter the elements of the sequence:" << std::endl;
    std::cin >> prevElement;

    for (int i = 1; i < n; ++i) {
        std::cin >> currentElement;

        if (currentElement >= prevElement) {
            currentSubsequence++; // Increase the current subsequence
        }
        else {

            if (currentSubsequence > longestIncreasingSubsequence) {

                longestIncreasingSubsequence = currentSubsequence; // Update the longest subsequence
            }
            currentSubsequence = 1; // Start a new subsequence
        }

        prevElement = currentElement;
    }

    if (currentSubsequence > longestIncreasingSubsequence) {

        longestIncreasingSubsequence = currentSubsequence; // Check for the last subsequence
    }

    std::cout << "The length of the longest non-decreasing subsequence is: " << longestIncreasingSubsequence << std::endl;

    return 0;
}
