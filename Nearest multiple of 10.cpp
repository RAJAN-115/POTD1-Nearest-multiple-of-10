#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string roundToNearest(string str) {
        int n = str.length(); // Find the length of the string (number of digits).

        // If the last digit is less than or equal to '5', round down (change last digit to '0').
        if (str[n-1] <= '5') {
            str[n-1] = '0';  // Set last digit to '0'.
            return str;  // Return the updated string (number).
        }

        // If the last digit is greater than '5', we need to round up.
        str[n-1] = '0';  // Set last digit to '0' first, we'll handle the carry next.
        int i = n - 2;   // Start checking from the second last digit.

        // Now, we check if the previous digits need to handle a carry (if the digit is '9').
        while (i >= 0 && str[i] == '9') {  
            str[i] = '0';  // Change '9' to '0' because rounding up makes it '0'.
            i--;  // Move to the left (to the next digit).
        }

        // If all digits were '9' (e.g., 999 -> 1000), we need to add '1' at the front.
        if (i < 0) {
            str = '1' + str;  // Add '1' to the beginning of the string.
        } 
        else {
            str[i]++;  // If current digit isn't '9', just increase it by 1.
        }

        return str;  // Return the final rounded number.
    }
};

int main() {
    int t;  // Variable for number of test cases.
    cout << "Enter number of test cases: ";
    cin >> t;  // Read the number of test cases.

    Solution solution;  // Create an instance of the Solution class.
    
    while (t--) {  // Loop through each test case.
        string str;
        cout << "Enter a positive integer as a string: ";  // Prompt user for input.
        cin >> str;  // Read the input string.

        // Correct method call here
        cout << "Rounded number: " << solution.roundToNearest(str) << endl;  // Display the result.
    }

    return 0;  // Indicate that the program ended successfully.
}
