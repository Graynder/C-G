#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    string LON;
    cin >> LON; cin.ignore();

    string LAT;
    cin >> LAT; cin.ignore();

    int N;
    cin >> N; cin.ignore();

    string strName;

    if(N==1)
    {
        string DEFIB;
        getline(cin, DEFIB);
        unsigned pos=0;

        pos = DEFIB.find_first_of(";");
        strName = DEFIB.substr(pos+1);

        pos = strName.find_first_of(";");
        strName = strName.substr(0,pos);
    }
    else
    {
        string strLong,strLat;

         //replace "," par "."
        LON.replace(LON.find(","),1,".");
        LAT.replace(LAT.find(","),1,".");

        //conversion de Lat/Long en double
        double LatA(0.0),LongA(0.0),previousD(100000.0);

        LongA = stod(LON);
        LatA= stod(LAT);
        cout.precision(16);

        for (int i = 0; i < N; i++)
        {
            string DEFIB;
            getline(cin, DEFIB);

            //replace "," par "."
            size_t found = DEFIB.rfind(",");

            while(found != string::npos)
            {
                DEFIB.replace(found,1,".");
                found = DEFIB.rfind(",");
            }

            unsigned pos = DEFIB.find_last_of(";");

            strLat = DEFIB.substr(pos+1);
            strLong = DEFIB.substr(0,pos);

            pos = strLong.find_last_of(";");
            strLong = strLong.substr(pos+1);

            double LongB= stod(strLong);
            double LatB= stod(strLat);

            //calcul de la distance
            double x(0.0),y(0.0),d(0.0);

            x=(LongB-LongA)*cos((LatA+LatB)/2.0);
            y = LatB-LatA;
            d=sqrt((x*x)+(y*y))*6371.0;

            if(d < previousD)
            {
                previousD= d;
                strName.clear();

                pos = DEFIB.find_first_of(";");
                strName = DEFIB.substr(pos+1);

                pos = strName.find_first_of(";");
                strName = strName.substr(0,pos);
            }
        }
    }
    cout << strName << endl;
}
