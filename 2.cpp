#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

char firstNonRepeatingChar(const string& str) {
    unordered_map<char, int> count;

    for (char ch : str) {
        count[ch]++;
    }

    for (char ch : str) {
        if (count[ch] == 1) {
            return ch;
        }
    }

    return -1;
}

int main() {
    string input = "swiss";
    char result = firstNonRepeatingChar(input);

    if (result != -1)
        cout << "Output: '" << result << "'" << endl;
    else
        cout << "Output: -1" << endl;

    return 0;
}
