#include<iostream>
using namespace std;

int main()
{
    string sw;
    string jeff;
    cout << "Vardas: ";
    cin >> jeff;
    cout << endl;
    cout << "Horizontalus tarpai: ";
    int horiTarpai=1;
    cin >> horiTarpai;
    cout << endl;
    cout << "Vertikalus tarpai: ";
    int vertTarpai=1;
    cin >> vertTarpai;
    cout << endl;

    if(jeff[jeff.length()-1]=='s')
    {
        sw = "Sveikas, ";
    }
    else{
        sw = "Sveika, ";
    }

    int txtLen = sw.length() + jeff.length();

    //---------------------
    for(int i =0;i<txtLen+3+horiTarpai*2;i++)
    {
        cout << "*";
    }
    cout <<endl;
    //---------------------
    for(int v = 0;v<vertTarpai;v++)
    {
        cout << "*";
        for(int i =0;i<txtLen+1+horiTarpai*2;i++)
        {
            cout <<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //---------------------
    cout << "*";
    for(int i =0;i<horiTarpai;i++) cout << " ";
    cout<< sw << jeff << "!";
    
    for(int i =0;i<horiTarpai;i++) cout << " ";
    cout << "*";
    cout <<endl;
    //---------------------
    for(int v = 0;v<vertTarpai;v++)
    {
        cout << "*";
        for(int i =0;i<txtLen+1+horiTarpai*2;i++)
        {
            cout <<" ";
        }
        cout<<"*";
        cout<<endl;
    }
    //---------------------
    for(int i =0;i<txtLen+3+horiTarpai*2;i++)
    {
        cout << "*";
    }
    cout <<endl;
    //---------------------

    cout << endl;
    system("pause");
    return 0;
}