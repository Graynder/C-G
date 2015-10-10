#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // number of columns.
    int H; // number of rows.
    cin >> W >> H; cin.ignore();

    int carte [H][W];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            int val;
            cin >> val;cin.ignore();
            carte [i][j]=val;
        }
    }

    int EX; // the coordinate along the X axis of the exit (not useful for this first mission, but must be read).
    cin >> EX; cin.ignore();

    // game loop
    while (1)
    {
        int XI;
        int YI;
        string POS;
        cin >> XI >> YI >> POS; cin.ignore();

        if( carte[YI][XI] == 1 || carte[YI][XI] == 3 || carte[YI][XI] == 7 || carte[YI][XI] == 8 || carte[YI][XI] == 9 || carte[YI][XI] == 12 || carte[YI][XI] == 13)
        {
            cout << XI << " " << YI+1 << endl;
        }
        else if( carte[YI][XI] == 2 || carte[YI][XI] == 6 )
        {
            if(POS == "RIGHT")
                cout << XI-1 << " " << YI << endl;
            else /*if(POS == "LEFT")*/
                cout << XI+1 << " " << YI << endl;
        }
        else if(carte[YI][XI] == 4  )
        {
            if(POS == "TOP")
                cout << XI-1 << " " << YI << endl;
            else
                cout << XI << " " << YI+1 << endl;
        }
        else if(carte[YI][XI] == 5)
        {
            if(POS == "TOP")
                cout << XI+1 << " " << YI << endl;
            else
                cout << XI << " " << YI+1 << endl;
        }
        else if(carte[YI][XI] == 10)
        {
            cout << XI-1 << " " << YI << endl;
        }
        else if(carte[YI][XI] == 11)
        {
            cout << XI+1 << " " << YI << endl;
        }

    }
}
