#include <iostream>
#include <string>

using namespace std;

int findFirstOccurrence(const string& text, const string& pattern){
   int textlength = text.length();
   int patternlenth = pattern.length();
   int ptlength = textlength - patternlenth;
   //special case of an empty pattern
    if (patternlenth == 0) {
        return 0; // An empty pattern is found at the start of any string
    }

    // Outer loop iterates through the text string
    for (int i = 0; i <= ptlength; ++i) {
        int j; //'j' is the index for the pattern string

        // Inner loop compares the pattern with the current substring of the text
        for (j = 0; j < patternlenth; ++j) {
            if (text[i + j] != pattern[j]) {
                break; // Mismatch found, so we break the inner loop
            }
        }

        // If the inner loop completed without a mismatch, it means a match was found
        if (j == patternlenth) {
            return i; // Return the starting index of the match
        }
    }

    return -1; // No match found after checking all possible starting positions

    }

int main(){
    string text;
    string pattern;
    cout<<"Enter the Text String: ";
    getline(cin,text);
    cout<<"Enter the Substring pattern: ";
   getline(cin,pattern);
    
    int result = findFirstOccurrence(text, pattern);

    if (result != -1) {
        cout << "The pattern was found at index: " << result << endl;
    } else if(result==0){
        cout<<"Empty Pattern";
    }
    else {
        cout << "Pattern not present" << endl;
    }


    return 0;
}