#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    int current_x = initial_tx;
    int current_y = initial_ty;

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        if (light_x > current_x) {
            if (light_y > current_y) {
                cout << "SE" << endl;
                current_x++;
                current_y++;
            }
            else if (light_y < current_y) {
                cout << "NE" << endl;
                current_x++;
                current_y--;
            }
            else {
                cout << "E" << endl;
                current_x++;
            }
        }
        else if (light_x < current_x) {
            if (light_y > current_y) {
                cout << "SW" << endl;
                current_x--;
                current_y++;
            }
            else if (light_y < current_y) {
                cout << "NW" << endl;
                current_x--;
                current_y--;
            }
            else {
                cout << "W" << endl;
                current_x--;
            }
        }
        else {
            if (light_y > current_y) {
                cout << "S" << endl;
                current_y++;
            }
            else if (light_y < current_y) {
                cout << "N" << endl;
                current_y--;
            }
        }
    }
}