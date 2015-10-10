#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int N;
    cin >> N; cin.ignore();

    multiset<int> tab;
    multiset<int>::const_iterator it;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a; cin.ignore();
        tab.insert(a);
    }

    it = tab.begin();
    int puissance(1000);
    int previous = *it;it++;

    for( ; it!=tab.end() ;it++ )
    {
        if( *it-previous < puissance  )
            puissance = *it-previous;

        previous = *it;
    }
    cout << puissance << endl;
}
