#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int X;
    cin >> X;

    vector<string> strings;

    for (int i = 0; i < X; i++) {
        string input;
        cin >> input;
        strings.push_back(input);
    }

    for (const string& str : strings) {
        int countR = 0, countG = 0;

        for (char ch : str) {
            if (ch == 'R')
                countR++;
            else if (ch == 'G')
                countG++;
        }

        if (countR == countG)
            cout << "yes" << endl;
        else if (countR == 1 && countG == 0)
            cout << "yes" << endl;
        else if (countR == 0 && countG == 1)
            cout << "yes" << endl;
        else if (countR - countG == 1)
            cout << "yes" << endl;
        else if (countG - countR == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
