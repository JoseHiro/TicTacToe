
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int column = 3;

void show(char tictac[][column], int rowNumber)
{
    cout << "TicTacToe Game Start!!" << endl;

    for ( int r = 0; r < rowNumber; r++)
    {
        cout << "\t" << "------------------" << endl;
        cout << "\t" ;

        for ( int c = 0; c < column; c++)
        {
            cout << left;
            cout << setw(3) << "|" << setw(3) << tictac[r][c];

        }

        cout <<"|" << endl;
    }

    cout << "\t" << "-------------------" << endl;
}

int jugde(char tictac[][column], int row)  //checking if the player has won
{
    int x;

    if (tictac[0][0] == tictac[0][1] && tictac[0][1] == tictac[0][2]) // judge
    {
        if (tictac[0][0] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[0][0] == tictac[1][1] && tictac[1][1] == tictac[2][2])
    {
        if (tictac[0][0] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[0][0] == tictac[1][0] && tictac[1][0] == tictac[2][0])
    {
        if (tictac[0][0] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[0][1] == tictac[1][1] && tictac[1][1] == tictac[2][1])
    {
        if (tictac[0][1] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[0][2] == tictac[1][2] && tictac[1][2] == tictac[2][2])
    {
        if (tictac[0][2] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[0][2] == tictac[1][1] && tictac[1][1] == tictac[2][0])
    {
        if (tictac[0][2] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[1][0] == tictac[1][1] && tictac[1][1] == tictac[1][2])
    {
        if (tictac[1][0] == 'O' || 'X')
        {
        x = 1;
        }
    }else if(tictac[2][0] == tictac[2][1] && tictac[2][1] == tictac[2][2])
    {
        if (tictac[2][0] == 'O' || 'X')
        {
        x = 1;
        }
    }else{
        x = 2;
    }
    return x;
}

int main()
{
    int row = 3, rowN, columnN;
    string name1, name2, currentPlayer;
    char tictac[3][column]= {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    };


    show(tictac,row); // show the game table


    cout << endl << "Enter the first player's name: ";
    cin >> name1;

    cout << "Enter the second player's name: ";
    cin >> name2;


    int turn = 1;


    for ( int a = 0; a < 3; a++ )
    {
        for ( int b = 0; b < 3; b++ )
        {


            if (turn == 1) // taking turns  if 'X' turn
            {
                cout << name1 << ", enter row number (0, 1, 2) :";
                cin >> rowN;

                if(rowN > 2 || rowN < 0)
                {
                    cout << "Reenter the number from (0, 1, 2) :" << endl;
                    cin >> rowN;
                }

                cout << name1 << ", enter column number (0, 1, 2) :";
                cin >> columnN;

                if(columnN > 2 || columnN < 0)
                {
                    cout << "Reenter the number from (0, 1, 2) :" << endl;
                    cin >> columnN;
                }


                if (tictac[rowN][columnN] == 'X' || tictac[rowN][columnN] == 'O')
                {
                    cout << "You cannot select that sapce" << endl;
                    cout << "Try reselecting the number" << endl;

                    cout << name1 << ", enter row number (0, 1, 2) :";
                    cin >> rowN;

                    if(rowN > 2 || rowN < 0)
                    {
                        cout << "Reenter the number from (0, 1, 2) :" << endl;
                        cin >> rowN;
                    }

                    cout << name1 << ", enter column number (0, 1, 2) :";
                    cin >> columnN;

                    if(columnN > 2 || columnN < 0)
                    {
                        cout << "Reenter the number from (0, 1, 2) :" << endl;
                        cin >> columnN;
                    }

                }

                tictac[rowN][columnN] = 'X';

                turn = 2;
                currentPlayer = name1;

            }else{              //taking turns  if 'X' turn
                cout << name2 << ", enter row number (0, 1, 2) :";
                cin >> rowN;

                if(rowN > 2 || rowN < 0)
                {
                    cout << "Reenter the number from (0, 1, 2) :" << endl;
                    cin >> rowN;
                }

                cout << name2 << ", enter column number (0, 1, 2) :";
                cin >> columnN;

                if(columnN > 2 || columnN < 0)
                {
                    cout << "Reenter the number from (0, 1, 2) :" << endl;
                    cin >> columnN;
                }

                if (tictac[rowN][columnN] == 'X' || tictac[rowN][columnN] == 'O')
                {
                    cout << "You cannot select that sapce" << endl;
                    cout << "Try reselecting the number" << endl;

                    cout << name1 << ", enter row number (0, 1, 2) :";
                    cin >> rowN;

                    if(rowN > 2 || rowN < 0)
                    {
                        cout << "Reenter the number from (0, 1, 2) :" << endl;
                        cin >> rowN;
                    }

                    cout << name1 << ", enter column number (0, 1, 2) :";
                    cin >> columnN;

                    if(columnN > 2 || columnN < 0)
                    {
                        cout << "Reenter the number from (0, 1, 2) :" << endl;
                        cin >> columnN;
                    }

                }

                tictac[rowN][columnN] = 'O';
                turn = 1;
                currentPlayer = name2;
            }

            for ( int r = 0; r < row; r++ )
            {
                cout << "\t" << "------------------" << endl;
                cout << "\t" ;

                for ( int c = 0; c < column; c++ )
                {
                    cout << left;
                    cout << setw(3) << "|" << setw(3) << tictac[r][c];

                }
                cout << "|" << endl;

            }

            cout << "\t" << "------------------" << endl;

            int x = jugde(tictac,row);
            if (x == 1)
            {
                cout << currentPlayer << ", you win the game" << endl;
                break;
            }



        }


    }

    if( jugde(tictac,row) != 1)
    {
        cout << "It was a draw" << endl;
    }


    //show(tictac, rowN, columnN);

    return 0;

}
