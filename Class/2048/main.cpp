#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int SIZE = 4;



//
//void print_board(int board[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << board[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}

void print_board(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "+------+------+------+------+" << endl;
        for (int j = 0; j < SIZE; j++) {
            cout << "| ";
            if (board[i][j] == 0) {
                cout << "    ";
            } else {
                cout << setw(4) << board[i][j];
            }
            cout << " ";
        }
        cout << "|" << endl;
    }
    cout << "+------+------+------+------+" << endl;
}

bool move_left(int board[SIZE][SIZE]) {
    bool moved = false;
    for (int i = 0; i < SIZE; i++) {
        int last_merged = -1;
        for (int j = 1; j < SIZE; j++) {
            if (board[i][j] == 0) {
                continue;
            }
            int k = j - 1;
            while (k > last_merged && board[i][k] == 0) {
                k--;
            }
            if (k >= 0 && board[i][k] == board[i][j]) {
                board[i][k] *= 2;
                board[i][j] = 0;
                last_merged = k;
                moved = true;
            } else {
                int tmp = board[i][j];
                board[i][j] = 0;
                board[i][k + 1] = tmp;
                if (k + 1 != j) {
                    moved = true;
                }
            }
        }
    }
    return moved;
}

void rotate_board(int board[SIZE][SIZE]) {
    int tmp[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tmp[i][j] = board[SIZE - j - 1][i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = tmp[i][j];
        }
    }
}

int main() {
    int board[SIZE][SIZE] = {0};
    srand(time(NULL));
    for (int i = 0; i < 2; i++) {
        int x = rand() % SIZE;
        int y = rand() % SIZE;
        if (board[x][y] == 0) {
            board[x][y] = (rand() % 2 + 1) * 2;
        } else {
            i--;
        }
    }
    while (true) {
        print_board(board);
        char ch = getchar();
        if (ch == 'q') {
            break;
        } else if (ch == 'a') {
            if (move_left(board)) {
                int x = rand() % SIZE;
                int y = rand() % SIZE;
                while (board[x][y] != 0) {
                    x = rand() % SIZE;
                    y = rand() % SIZE;
                }
                board[x][y] = (rand() % 2 + 1) * 2;
                if (move_left(board)) {
                    rotate_board(board);
                    rotate_board(board);
                    rotate_board(board);
                }
            }
        } else if (ch == 'd') {
            rotate_board(board);
            rotate_board(board);
            if (move_left(board)) {
                int x = rand() % SIZE;
                int y = rand() % SIZE;
                while (board[x][y] != 0){
                    x = rand() % SIZE;
                    y = rand() % SIZE;
            }
            board[x][y] = (rand() % 2 + 1) * 2;
            rotate_board(board);
            rotate_board(board);
            }
            } else if (ch == 'w') {
            rotate_board(board);
            if (move_left(board)) {
            int x = rand() % SIZE;
            int y = rand() % SIZE;
            while (board[x][y] != 0) {
            x = rand() % SIZE;
            y = rand() % SIZE;
            }
            board[x][y] = (rand() % 2 + 1) * 2;
            rotate_board(board);
            rotate_board(board);
            rotate_board(board);
            }
            } else if (ch == 's') {
            rotate_board(board);
            rotate_board(board);
            rotate_board(board);
            if (move_left(board)) {
            int x = rand() % SIZE;
            int y = rand() % SIZE;
            while (board[x][y] != 0) {
            x = rand() % SIZE;
            y = rand() % SIZE;
            }
            board[x][y] = (rand() % 2 + 1) * 2;
            }
            rotate_board(board);
            }
            }
        return 0;
        }