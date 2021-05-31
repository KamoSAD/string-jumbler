#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <stdlib.h>
#include <string>

using namespace std;

string a;
bool b = false;
int c;

int main()
{

    srand(time(0));

    cout << "\n\nString Jumbler\n\n";
    cout << "Type \"endThis\" to end the program.\n";
    cout << "Type \"changeTimes\" to change the number of times of jumbling. Max is 999.\n\n";

    cout << "How many times do you want to jumble in a single run?\n\n";
    cin >> c;

    for (int i = -2147483648; i < 2147483647; i++)
    {

        if (c == 0)
        {
            cout << "Invalid Value\n\n";
            cout << "How many times do you want to jumble in a single run?\n\n";
            cin >> c;
        }
        else if (c > 999)
        {
            cout << "Please choose a smaller no.\n\n";
            cout << "How many times do you want to jumble in a single run?\n\n";
            cin >> c;
        }

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cin >> a;
        cout << "\n";

        if (a == "endThis" || a == "aloo404")
        {
            return 0;
        }
        else if (a == "changeTimes")
        {
            cout << "How many times do you want to jumble in a single run?\n\n";
            cin >> c;
        }

        else
        {
            for (int i = 0; i < c; i++)
            {
                string jumbledWord = a;
                int length = jumbledWord.size();
                for (int i = 0; i < length; i++)
                {
                    int i1 = (rand() % length);
                    int i2 = (rand() % length);
                    char temp = jumbledWord[i1];
                    jumbledWord[i1] = jumbledWord[i2];
                    jumbledWord[i2] = temp;
                }

                cout << jumbledWord << endl;
            }
        }
    }

    return 0;
}