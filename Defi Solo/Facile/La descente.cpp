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
    while (1)
    {
        int SX;
        int SY;
        int Xtarget = 0;
        int Hmax = 0;

        cin >> SX >> SY; cin.ignore();

        // determine la Montagne la plus haute
        for (int i = 0; i < 8; i++)
        {
            int MH; // represents the height of one mountain, from 9 to 0. Mountain heights are provided from left to right.
            cin >> MH; cin.ignore();

            if(MH > Hmax)
            {
                Hmax = MH;
                Xtarget = i;
            }
        }


        if (SX == Xtarget)
            cout << "FIRE" << endl;
        else
            cout << "HOLD" << endl;

    }
}
