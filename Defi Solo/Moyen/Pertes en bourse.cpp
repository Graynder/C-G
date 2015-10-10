#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n; cin.ignore();

    string vs;
    getline(cin, vs);

    int max,min,start,res(0);
    start = stoi(vs);

    min = start;
    max = min;

    size_t pos = vs.find(" ");
    vs = vs.substr(pos+1);


    //complexité O(n) + o(1)
    char *to = strtok( &vs[0], " ");
    while (to != NULL)
    {
        int t = stoi(to);
        cerr << t << endl;

        if(t < min)
        {
            min = t;
        }

        if(t > max)
        {
            if(min-max <res )
                res = min-max;

            max = t;
            min = max;
        }
        to = strtok(NULL, " ");
    }

    /* ////// complexité O(n)*3
    for (int i = 1; i < n; i++)
    {
        int t = stoi(vs);
        cerr << t << endl;

        if(t < min)
        {
            min = t;
        }

        if(t > max)
        {
            if(min-max <res )
                res = min-max;

            max = t;
            min = max;
        }

        pos = vs.find(" ");
        vs = vs.substr(pos+1);
    }

    */

    if(start == min)
        cout << 0 << endl;
    else if (start == max)
        cout << min-max << endl;
    else
        cout << res << endl;




}
