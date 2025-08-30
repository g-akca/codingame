#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);

        for (int j = 0; j < t.length(); j++) {
            if (isalpha(t[j])) {
                char c = toupper(t[j]);
                cout << row.substr((c - 'A') * l, l);
            }
            else {
                cout << row.substr(26 * l, l);
            }
        }
        cout << endl;
    }
}