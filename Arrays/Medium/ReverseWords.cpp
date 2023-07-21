#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// Function to reverse the order of words in a string
void reverseWords(string& message) {
    vector<string> tokens;
    istringstream ss(message); // Create an input string stream

    string token;
    while (ss >> token) {
        tokens.push_back(token); // Extract each token (word) and add it to the vector
    }

    // Reverse the order of words
    message.clear();
    for (auto it = tokens.rbegin(); it != tokens.rend(); ++it) {
        message += *it;
        if (it + 1 != tokens.rend()) {
            message += " ";
        }
    }
}

int main() {
    string str = "one words and more";
    reverseWords(str);
    cout << str << endl; // Output: "more and words one"
    return 0;
}
