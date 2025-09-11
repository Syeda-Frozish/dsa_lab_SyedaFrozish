#include <iostream>
#include <string>

using namespace std;

// Function to find the first occurrence of a pattern in a text using the naive algorithm
int findFirstOccurrence(const string& text, const string& pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();
    
    // Handle the special case of an empty pattern
    if (patternLength == 0) {
        return 0; // An empty pattern is found at the start of any string
    }

    // Outer loop iterates through the text string
    for (int i = 0; i <= textLength - patternLength; ++i) {
        int j; // 'j' is the index for the pattern string

        // Inner loop compares the pattern with the current substring of the text
        for (j = 0; j < patternLength; ++j) {
            if (text[i + j] != pattern[j]) {
                break; // Mismatch found, so we break the inner loop
            }
        }

        // If the inner loop completed without a mismatch,means a match was found
        if (j == patternLength) {
            return i; // Return the starting index of the match
        }
    }

    return -1; // No match found after checking all possible starting positions
}

int main() {
    
    string text;
    string pattern;

    cout << "Enter the text string: ";
    getline(cin, text);

    cout << "Enter the pattern string: ";
    getline(cin, pattern);
    
    // Handle empty pattern as a separate case for output
    if (pattern.empty()) {
        cout << "Empty Pattern" << endl;
    } else {
        int result = findFirstOccurrence(text, pattern);

        if (result != -1) {
            cout << "The pattern was found at index: " << result << endl;
        } else {
            cout << "Pattern not present" << endl;
        }
    }

    return 0;
}
