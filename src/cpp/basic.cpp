#include <iostream>
#include <fstream>
using namespace std;

void fileOutput() {
    ofstream file;
    file.open("text");

    file << "OUTPUT!";

    file.close();
}

void fileInput() {
    ifstream file;
    file.open("text");

    string text;
    file >> text;
    cout << text << endl;

    file.close();
}

int main() {fileOutput(); fileInput();}