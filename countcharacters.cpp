/*SET6 P9*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ifstream inFile("article.txt");

    if (!inFile) {
        cerr << "Error: Could not open article.txt" << endl;
        return 1;
    }

    int charCount = 0;
    int wordCount = 0;
    int lineCount = 0;
    string line;

    while (getline(inFile, line)) {
        lineCount++;
        charCount += line.length(); 
        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    inFile.close();

    cout << "Characters: " << charCount << endl;
    cout << "Words: " << wordCount << endl;
    cout << "Lines: " << lineCount << endl;

    return 0;
}