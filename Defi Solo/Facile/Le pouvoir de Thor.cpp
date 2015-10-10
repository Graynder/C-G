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
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    cin >> LX >> LY >> TX >> TY; cin.ignore();

    // game loop
    while (1)
    {
        int E; // The level of Thor's remaining energy, representing the number of moves he can still make.
        cin >> E; cin.ignore();

        if(TX < LX)
        {
            if(TY < LY)
            {
                cout << "SE" << endl;
                TX += 1;
                TY += 1;
            }

            if(TY == LY)
            {
                cout << "E" << endl;
                TX += 1;
            }

            if(TY > LY)
            {
                cout << "NE" << endl;
                TX += 1;
                TY -= 1;
            }
        }
        else if(TX == LX)
        {
            if(TY < LY)
            {
                cout << "S" << endl;
                TY += 1;
            }

            if(TY > LY)
            {
                cout << "N" << endl;
                TY -= 1;
            }
        }
       else
       {
           if(TY < LY)
           {
                cout << "SW" << endl;
                TX -= 1;
                TY += 1;
           }

            if(TY == LY)
            {
                cout << "W" << endl;
                TX -= 1;
            }

            if(TY > LY)
            {
                cout << "NW" << endl;
                TX -= 1;
                TY -= 1;
            }
       }
    }
}
