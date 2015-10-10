#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Don't let the machines win. You are humanity's last hope...
 **/
int main()
{
    int width; // the number of cells on the X axis
    cin >> width; cin.ignore();

    int height; // the number of cells on the Y axis
    cin >> height; cin.ignore();

    //cerr << height << " " << width << endl << endl;



    string tabLine[height];

    for (int i = 0; i < height; i++)
    {
        string line; // width characters, each either 0 or .
        getline(cin, line);

        tabLine[i] = line;

        cerr << line  << endl ;
    }

    cerr << endl << endl;
    for (int i = 0; i < height-1; i++)
    {
        for (int j = 0; j < width-1; j++)
        {
            if(tabLine[i][j] == '0')
            {
                int x1 = j, y1 = i,
                    x2 = -1, y2 = -1,
                    x3 = -1, y3 = -1;

                int k = j+1;
                int l = i+1;

                while(k < width && x2 == -1)
                {
                    if(tabLine[i][k] == '0')
                    {
                        x2 = k;
                        y2 = i;
                        k = width;
                    }
                    else
                        k++;
                }

                while(l < height && x3 == -1)
                {
                    if(tabLine[l][j] == '0')
                    {
                        x3 = j;
                        y3 = l;
                        l = height;
                    }
                    else
                        l++;
                }

                cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;
            }
        }
    }

    for (int i = 0; i < height-1; i++)
    {
        if(tabLine[i][width-1] == '0')
        {
            int x1 = width-1, y1 = i,
                x2 = -1, y2 = -1,
                x3 = -1, y3 = -1;

            int l = i+1;

            while(l < height && x3 == -1 )
            {
                if(tabLine[l][x1] == '0')
                {
                    x3 = x1;
                    y3 = l;
                    l = height;
                }
                else
                    l++;
            }

            cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;
        }
    }

    for (int i = 0; i < width; i++)
    {
        if(tabLine[height-1][i] == '0')
        {
            int x1 = i, y1 = height-1,
                x2 = -1, y2 = -1,
                x3 = -1, y3 = -1;

            int k = i+1;

            while(k < width && x2 == -1 )
            {
                if(tabLine[y1][k] == '0')
                {
                    x2 = k;
                    y2 = y1;
                    k = width;
                }
                else
                    k++;
            }

            cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;
        }
    }
}
