#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {
    string paragraph;
    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);

    istringstream iss(paragraph);
    map<string, int> wordCount;
    string word;

    while (iss >> word) {
        wordCount[word]++;
    }

    cout << "\nWord Frequencies:\n";
    for (auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
