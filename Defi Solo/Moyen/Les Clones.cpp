#include <iostream>
#include <string>
#include <map>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

 /*struct t_Elevator{
     int elevatorFloor = -1;
     int elevatorPos = -1;
 };*/


int main()
{
    int nbFloors; // number of floors
    int width; // width of the area
    int nbRounds; // maximum number of rounds
    int exitFloor; // floor on which the exit is found
    int exitPos; // position of the exit on its floor
    int nbTotalClones; // number of generated clones
    int nbAdditionalElevators; // ignore (always zero)
    int nbElevators; // number of elevators

    cin >> nbFloors >> width >> nbRounds >> exitFloor >> exitPos >> nbTotalClones >> nbAdditionalElevators >> nbElevators; cin.ignore();

    map <int,int> elevatorTab;

    //t_Elevator elevatorTab[nbElevators];

    //cerr << nbElevators << " : ";

    for (int i = 0; i < nbElevators; i++)
    {
        int elevatorFloor(0),elevatorPos(0);

        //cerr  << i << endl ;
        //cin >> elevatorTab[i].elevatorFloor >> elevatorTab[i].elevatorPos; cin.ignore();
        cin >> elevatorFloor >> elevatorPos; cin.ignore();

        elevatorTab[elevatorFloor] = elevatorPos;

        //cerr << " elevator floor : "<< elevatorFloor << "  elevator pos "<< elevatorPos << endl<< endl;
    }

    // game loop
    while (1)
    {
        int cloneFloor; // floor of the leading clone
        int clonePos; // position of the leading clone on its floor

        string direction; // direction of the leading clone: LEFT or RIGHT

        cin >> cloneFloor >> clonePos >> direction; cin.ignore();

        //if(cloneFloor == -1 && clonePos == -1 && direction == "NONE")
            //cout << "WAIT" << endl;

        //si clone est a l'etage de sortie
        if(cloneFloor == exitFloor)
        {
            if(clonePos > exitPos && direction == "RIGHT" )
                cout << "BLOCK" << endl;

            else if(clonePos < exitPos && direction == "LEFT" )
                cout << "BLOCK" << endl;

            else
                cout << "WAIT" << endl;

        }
        else
        {
            cerr << clonePos << " " << elevatorTab[cloneFloor] << " " << direction << endl << endl;

            if(clonePos > elevatorTab[cloneFloor] && direction == "RIGHT" )
                cout << "BLOCK" << endl;

            else if(clonePos < elevatorTab[cloneFloor] && direction == "LEFT" )
                cout << "BLOCK" << endl;

            else
                cout << "WAIT" << endl;
        }

    }
}
