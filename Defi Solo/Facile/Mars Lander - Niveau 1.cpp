#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

 struct zone{
        int debut;
        int fin;
        int altitude;
    };

int main()
{
    int N; // the number of points used to draw the surface of Mars.
    cin >> N; cin.ignore();

    zone Zone;

    for (int i = 0; i < N; i++)
    {
        int LAND_X, x_ant; // X coordinate of a surface point. (0 to 6999)
        int LAND_Y, y_ant; // Y coordinate of a surface point. By linking all the points together in a sequential fashion, you form the surface of Mars.
        cin >> LAND_X >> LAND_Y; cin.ignore();

        if(LAND_Y == y_ant)
        {
            Zone.debut = x_ant;
            Zone.fin = LAND_X;
            Zone.altitude = LAND_Y;
        }
        else
            x_ant = LAND_X;
    }

    // game loop
    while (1)
    {
        int X;
        int Y;
        int HS; // the horizontal speed (in m/s), can be negative.
        int VS; // the vertical speed (in m/s), can be negative.
        int F; // the quantity of remaining fuel in liters.
        int R; // the rotation angle in degrees (-90 to 90).
        int P; // the thrust power (0 to 4).

        cin >> X >> Y >> HS >> VS >> F >> R >> P; cin.ignore();

        if(Y > 1950)
        {
            if (VS < -40)
                cout << "0 2" << endl;
            else
                cout << "0 1" << endl;
        }
        else if(Y < 1950)
        {
            if (VS < -39)
                cout << "0 4" << endl;
            else
                cout << "0 0" << endl;
        }
    }
}
