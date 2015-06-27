#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    while (getline(cin, input)) {
        string new_string = "";
        for (int i = 0; i != input.size(); ++i) {
            if (input[i] != ' ') {
                new_string.push_back(input[i]);
            } else {
                new_string += "%20";
            }
        }
        cout << new_string << endl;
    }
}
