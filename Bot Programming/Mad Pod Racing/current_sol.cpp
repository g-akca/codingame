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
    bool boost = true;
    int max_checkpoint_dist = 0;
    int checkpoint = 0;

    // game loop
    while (1) {
        int x;
        int y;
        int next_checkpoint_x; // x position of the next check point
        int next_checkpoint_y; // y position of the next check point
        int next_checkpoint_dist; // distance to the next checkpoint
        int next_checkpoint_angle; // angle between your pod orientation and the direction of the next checkpoint
        cin >> x >> y >> next_checkpoint_x >> next_checkpoint_y >> next_checkpoint_dist >> next_checkpoint_angle; cin.ignore();
        int opponent_x;
        int opponent_y;
        cin >> opponent_x >> opponent_y; cin.ignore();

        max_checkpoint_dist = max(max_checkpoint_dist, next_checkpoint_dist);
        cout << next_checkpoint_x << " " << next_checkpoint_y << " ";
        if (next_checkpoint_angle > 90 || next_checkpoint_angle < -90) {
            cout << 0 << endl;
        }
        else {
            if (boost && checkpoint >= 3 && next_checkpoint_dist == max_checkpoint_dist) {
                cout << "BOOST" << endl;
                boost = false;
            }
            else {
                cout << 100 << endl;
            }
        }
        checkpoint++;
    }
}