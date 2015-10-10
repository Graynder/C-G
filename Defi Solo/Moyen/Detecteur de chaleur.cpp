#include <iostream>
#include <string>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();

    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();

    int xMin(-1),
        xMax(W),
        yMin(-1),
        yMax(H);

    // game loop
    while (1)
    {
        string BOMB_DIR; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> BOMB_DIR; cin.ignore();

        if(BOMB_DIR =="U")
        {
            yMax=Y0;

            Y0 -= (yMax-yMin)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="UR")
        {
            yMax=Y0;
            xMin=X0;

            X0 += (xMax-X0)/2;
            Y0 -= (yMax-yMin)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="R")
        {
            xMin=X0;

            X0 += (xMax-X0)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="DR")
        {
            yMin=Y0;
            xMin=X0;

            X0 += (xMax-X0)/2;
            Y0 += (yMax-Y0)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="D")
        {
            yMin=Y0;

            Y0 += (yMax-Y0)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="DL")
        {
            yMin=Y0;
            xMax=X0;

            X0 -= (xMax-xMin)/2;
            Y0 += (yMax-Y0)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="L")
        {
            xMax=X0;

            X0 -= (xMax-xMin)/2;

            cout << X0 << " " << Y0 << endl;
        }
        else if(BOMB_DIR =="UL")
        {
            yMax=Y0;
            xMax=X0;

            X0 -= (xMax-xMin)/2 ;
            Y0 -= (yMax-yMin)/2 ;

            cout << X0 << " " << Y0 << endl;
        }
    }
}
