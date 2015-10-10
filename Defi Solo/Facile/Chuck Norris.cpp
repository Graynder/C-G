#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

void charToBin(vector<int>&, const unsigned char&);
void octToCK(const vector<int>&);

int main()
{
    string msg;
    vector<int> octet;

    getline(cin, msg);

    for(int i=0; i < msg.size(); i++)
    {
        unsigned char c = msg[i];

        charToBin(octet,c);
    }

    octToCK(octet);
    cout << endl;
}


void octToCK(const vector<int>& oc)
{
    int i(0);
    int prev = oc[0];

    if(oc[0]==0)
    {
        cout<<"00 ";
    }
    else
    {
        cout<<"0 ";
    }

    do{

        if(prev == oc[i])
        {
           cout << "0";
           prev = oc[i];
        }
        else
        {

            if(oc[i]==0)
            {
                cout<<" 00 0";
                prev = 0;
            }
            else
            {
                cout<<" 0 0";
                prev = 1;
            }
        }

        i++;
        //cout <<i <<"\n  ";

    }while(i < oc.size());
}

void charToBin(vector<int>& occ,const unsigned char& caract)
{

    for(int ad = 0;ad<7;ad++)
            occ.push_back(0);

    int now(occ.size()-1);

    int oc [7];

    int temp =  caract;

    while(temp != 0)
    {

        for(int i=6; i>=0; i--)
        {
            if( (temp - pow(2,i)) >= 0)
            {
                oc[6-i] = 1;
                temp -= pow(2,i);
            }
            else
            {
                oc[6-i] = 0;
            }
        }
    }

    for(int i = 0; i < 7; i++)
    {
        occ[now-i]=oc[6-i];
    }
}
