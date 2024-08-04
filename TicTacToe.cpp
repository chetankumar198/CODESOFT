#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(char player) {
    
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }

    
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }

    
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

int main() {
    char player = 'X';
    int move;

    while (true) {
        printBoard();
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;

        
        if (move < 1 || move > 9) {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        
        int row = (move - 1) / 3;
        int col = (move - 1) % 3;

        
        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;

            
            if (checkWin(player)) {
                printBoard();
                cout << "Player " << player << " wins!" << endl;
                break;
            }

            
            player = (player == 'X') ? 'O' : 'X';
        } else {
            cout << "Space already occupied. Try again." << endl;
        }
    }

    return 0;
}

