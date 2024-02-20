#include <iostream>
#include <cstdlib>
using namespace std;

char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char token = 'x';
bool tie = false;
string n1;
string n2;

void clrscr()
{
    system("cls||clear");
}

void func1()
{
    cout << "   |   |   \n";
    cout << " " << space[0][0] << " | " << space[0][1] << " | " << space[0][2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << space[1][0] << " | " << space[1][1] << " | " << space[1][2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << space[2][0] << " | " << space[2][1] << " | " << space[2][2] << " \n";
    cout << "   |   |   \n";
}

void func2()
{
    int digit;
    if (token == 'x')
    {
        cout << n1 << "  please enter ";
        cin >> digit;
    }
    if (token == 'o')
    {
        cout << n2 << "  please enter ";
        cin >> digit;
    }
    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    else if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    else if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    else if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    else if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    else if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    else if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    else if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    else if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else
    {
        cout << "invalid!!!" << endl;
        return;
    }

    if (space[row][column] != 'x' && space[row][column] != 'o')
    {
        if (token == 'x')
            space[row][column] = 'x';
        else
            space[row][column] = 'o';

        if (token == 'x')
            token = 'o';
        else
            token = 'x';
    }
    else
    {
        cout << "That is not a empty space!" << endl;
        func2();
    }
}

bool func3()
{
    for (int i = 0; i < 3; i++)
    {
        if ((space[i][0] == space[i][1] && space[i][0] == space[i][2]) || (space[0][i] == space[1][i] && space[0][i] == space[2][i]))
        {
            return true;
        }
    }
    if ((space[0][0] == space[1][1] && space[1][1] == space[2][2]) || (space[0][2] == space[1][1] && space[1][1] == space[2][0]))
    {
        return true;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'x' && space[i][j] != 'o')
            {
                return false;
            }
        }
    }
    tie = true;
    return false;
}

int main()
{
    cout << " Enter the name of 1st player \n";
    getline(cin, n1);
    cout << " Enter the name of 2nd player \n";
    getline(cin, n2);
    cout << n1 << " is player 1 so he\n he will play first \n";
    cout << n2 << " is player 2 so he\n he will play second \n";

    while (!func3())
    {
        func1();
        func2();
        clrscr();
        func3();
    }
    if (token == 'x' && tie == false)
    {
        cout << n2 << " wins" << endl;
    }
    else if (token == 'o' && tie == false)
    {
        cout << n1 << " wins" << endl;
    }
    else
    {
        cout << " its a draw !" << endl;
    }
    return 0;
}
