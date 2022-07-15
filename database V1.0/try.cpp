#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ofstream file_wrt;
int txt()
{

    cout << "Enter the name of the student::";
    string name;
    cin >> name;
    cout << "\n In which class does " << name << " study ::";

    string cl;
    cin >> cl;

    int a;
    cout << "Input number of subjects :";
    cin >> a;
    int r[a];
    string s[a];
    int temp = a;
    for (temp >= 0; temp--;)
    {
        string str;
        cout << temp + 1 << "th subjects name.";
        cin >> str;
        s[temp] = str;
        int n;
        cout << "enter " << name << "'s " << s[temp] << " marks :";
        cin >> n;
        r[temp] = n;
    }

    temp = a;

    cout << name << " from class " << cl << " has following data :"
         << "  [";
    file_wrt << "\n"
             << name << " from class " << cl << " has following data :"
             << "  [";
    for (temp >= 0; temp--;)
    {
        cout << " ";
        file_wrt << "";
        cout << s[temp] << "=";
        file_wrt << s[temp] << "=";
        cout << r[temp];
        file_wrt << r[temp];
        if (temp != 0)
        {
            cout << " ,";
            file_wrt << " ,";
        }
        else
        {
            cout << " ]";
            file_wrt << " ]";
        };
    }

    cout << "\n Do you want to continue :: y/n ";

    char y;
    cin >> y;
    if (y == 'y')
    {
        cout << "--continue--\n";
        txt();
    }
    else
    {
        cout << "---program end---";
        file_wrt.close();
    }
    return 0;
}

int main()
{
    cout << "___start the database__ :: y/n \n";
    char y;
    cin >> y;

    if (y == 'y')
    {
        cout << "starting...";
    }
    else
    {
        return 0;
    }

    cout << "  ---------student database--------  \n";
    cout << "-----------Marks will be stored in form of an array--------- \n";

    file_wrt.open("data.txt");

    txt();
    cout << "";
}
