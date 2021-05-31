#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <stdlib.h>
#include <string>

using namespace std;

string a;
int c;

void questioning()
{
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "How many times do you want to jumble in a single run?\n\n";
    cin >> c;

    if (c <= 0)
    {
        cout << "Invalid Value\n\n";
        questioning();
    }

    if (c > 999)
    {
        cout << "Please choose a smaller no.\n\n";
        questioning();
    }
}

int main()
{

    srand(time(0));

    cout << "\n\nString Jumbler\n\n";
    cout << "Type \"endThis\" or ^C to end the program.\n";
    cout << "Type \"changeTimes\" to change the number of times of jumbling. Max is 999.\n\n";

    questioning();

    do
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cin >> a;
        cout << endl;

        if (a == "endThis" || a == "aloo404")
        {
            return 0;
        }
        else if (a == "changeTimes")
        {
            questioning();
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
            cout << endl;
        }
    } while (1 == 1);

    return 0;
}