#include<iostream>
using namespace std;

int main()
{
    string sw = "Sveikas, ";
    string jeff;
    cout << "Vardas: ";
    cin >> jeff;
    cout << endl;
    int txtLen = sw.length() + jeff.length();

    string eilutes[5];

    //---------------------
    for(int i =0;i<txtLen+5;i++)
    {
        eilutes[0] +="*";
    }
    //---------------------
    eilutes[1] +="*";
    for(int i =0;i<txtLen+3;i++)
    {
        eilutes[1] +=" ";
    }
    eilutes[1] +="*";
    //---------------------
    eilutes[2] = "* " + sw + jeff + "! *";
    //---------------------
    eilutes[3] += "*";
    for(int i =0;i<txtLen+3;i++)
    {
        eilutes[3] += " ";
    }
    eilutes[3] += "*";
    //---------------------
    for(int i =0;i<txtLen+5;i++)
    {
        eilutes[4] += "*";
    }
    //---------------------

    for(int i=0;i<5;i++)
    {
        cout <<endl;
        cout <<eilutes[i];
    }
    cout << endl;
    system("pause");
    return 0;
}