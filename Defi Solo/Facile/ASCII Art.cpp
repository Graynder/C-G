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
    int L;
    cin >> L; cin.ignore();

    int H;
    cin >> H; cin.ignore();

    string T;
    getline(cin, T);

    for (int j = 0; j < H; j++)
    {
        string ROW;
        getline(cin, ROW);

        for (int i = 0; i < T.size(); i++)
        {
            char c = T[i];
            int Lettre = 26;

            if (c >= 'a' && c <= 'z')
                Lettre = c - 'a';

            if (c >= 'A' && c <= 'Z')
                Lettre = c - 'A';

            for (int k = 0; k < L; k++)
                cout << ROW[(Lettre * L) + k];
        }
        cout << endl;
    }
}
