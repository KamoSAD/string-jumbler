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

    cout << "\tHow many times do you want to jumble in a single run?\n\n";
    cin >> c;

    if (c <= 0)
    {
        cout << "\tInvalid Value\n\n";
        questioning();
    }

    if (c > 999999)
    {
        cout << "\tPlease choose a smaller no.\n\n";
        questioning();
    }

    cout << "\n\tOk. Now enter the value to be jumbled.\n\n";
}

int main()
{

    srand(time(0));

    cout << "\n\n\tString Jumbler\n\n";
    cout << "\tType \"endThis\" or ^C to end the program.\n";
    cout << "\tType \"changeTimes\" to change the number of times of jumbling. Max is 999.\n\n";

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

                cout << "\t" << jumbledWord << "\t" << i << endl;
            }
            cout << "\t" << endl;
        }
    } while (1 == 1);

    return 0;
}