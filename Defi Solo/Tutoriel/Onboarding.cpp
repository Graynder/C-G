/* ancien code pour ancien test

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The code below will read all the game information for you.
 * On each game turn, information will be available on the standard input, you will be sent:
 * -> the total number of visible enemies
 * -> for each enemy, its name and distance from you
 * The system will wait for you to write an enemy name on the standard output.
 * Once you have designated a target:
 * -> the cannon will shoot
 * -> the enemies will move
 * -> new info will be available for you to read on the standard input.
 **/

/*int main()
{
    struct Droid {
        string name;
        int distance;
    };

    Droid hotDroid;
    // game loop
    while (1)
    {
        hotDroid.name = "";
        hotDroid.distance = 0;

        int count; // The number of current enemy ships within range
        cin >> count; cin.ignore();

        for (int i = 0; i < count; i++)
        {

            string enemy; // The name of this enemy
            int dist; // The distance to your cannon of this enemy
            cin >> enemy >> dist; cin.ignore();

            if ( dist < hotDroid.distance || hotDroid.distance == 0)
            {
                   hotDroid.name = enemy;
                   hotDroid.distance = dist;
            }

        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cout << hotDroid.name << endl; // The name of the most threatening enemy (HotDroid is just one example)

    }
}*/


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

    // game loop
    while (1) {
        string enemy1;
        cin >> enemy1; cin.ignore();
        int dist1;
        cin >> dist1; cin.ignore();
        string enemy2;
        cin >> enemy2; cin.ignore();
        int dist2;
        cin >> dist2; cin.ignore();

        if (dist1 < dist2)
            cout << enemy1;
        else
            cout << enemy2;

        cout << endl;
    }
}
