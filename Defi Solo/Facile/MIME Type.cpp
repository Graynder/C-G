#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N; cin.ignore();

    int Q; // Number Q of file names to be analyzed.
    cin >> Q; cin.ignore();

    //init du conteneur map et de son iterator
    map<string,string> typeMIME;
    map<string,string>::iterator itMap;

    for (int i = 0; i < N; i++)
    {
        string EXT; // file extension
        string MT; // MIME type.
        cin >> EXT >> MT; cin.ignore();
        transform(EXT.begin(),EXT.end(),EXT.begin(),(int (*)(int))tolower );
        typeMIME[EXT] = MT;
    }

    for (int i = 0; i < Q; i++)
    {
        string FNAME; // One file name per line.
        getline(cin, FNAME);

        size_t pos = FNAME.find_last_of(".");

        if(pos != string::npos)
        {
            string ext = FNAME.substr(pos+1);

            transform(ext.begin(),ext.end(),ext.begin(),(int (*)(int))tolower );

            //cout << ext << endl;


            itMap = typeMIME.find(ext);

            if (itMap != typeMIME.end())
            {
                cout << itMap->second <<endl;
            }
            else
            {
                cout << "UNKNOWN" << endl; // For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
            }
        }
        else
            {
                cout << "UNKNOWN" << endl;
            }

    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


}
