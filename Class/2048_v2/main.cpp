/* 
 * File:   main.cpp
 * Author: Mehak Lohchan
 * Created on February 8th, 2023 5:27 PM
 * Purpose: Project 2...
 
 */

// System Libraries
#include <iostream> // Input Output Library 
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions
const int SIZE = 4; //FIX THIS 

//Function Prototypes
int board[SIZE][SIZE];
void print_board(int board[SIZE][SIZE]);
//void game_over();
//bool game_over(int board);
bool game_over();
void shift_left();
void add_duplicate_left();
void shift_right();
void add_duplicate_right();
void shift_up();
void add_duplicate_up();
void shift_down();
void add_duplicate_down();
void display_board();


//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    
    //Declare Variables
    int count = 0;
    char move;

    //Initialize Variables
    
    /* 
    2048 main function

    w - shift up
    a - shift left
    s - shift down
    d - shift right
    q - ends the game 
    :param game_board: a 4x4 2D list of integers representing a game of 2048
    :return: returns the ending game board
    */
    
    //Map/Process the inputs -> Outputs
    
    while (count < 2) {
    int i = rand() % SIZE;
    int j = rand() % SIZE;
    if (board[i][j] == 0) {
        board[i][j] = (rand() % 2 + 1) * 2;
        count++;
    }
}

    
    // Main game loop
    while (!game_over()) {
        // Display the game board
        cout<<"       Current board:\n"<<endl;
        print_board(board);

        // Get player move
        cout<<"Enter move (w = up, a = left, s = down, d = right, q = quit): ";
        cin>>move;

        // Perform move
        switch (move) {
            case 'w':
                shift_up();
                add_duplicate_up();
                break;
            case 'a':
                shift_left();
                add_duplicate_left();
                break;
            case 's':
                shift_down();
                add_duplicate_down();
                break;
            case 'd':
                shift_right();
                add_duplicate_right();
                break;
            case 'q':
                if (move == 'q'){
                    cout<<"\nThank you for playing!";
                    exit(0);
                }
//            default:
//                cout<<"Invalid move"<<endl;
//                continue;
        }

        //Add a new tile to the board
        int i = rand() % SIZE;
        int j = rand() % SIZE;
        while (board[i][j] != 0) {
            i = rand() % SIZE;
            j = rand() % SIZE;
        }
        board[i][j] = (rand() % 2 + 1) * 2;


        //Check if the player has reached 2048
        for (int i = 0; i < SIZE; i++){
            for (int j = 0; j < SIZE; j++){
                if (board[i][j] == 2048){
                    cout<<"Congratulations, you win!"<<endl;
                    return 0;
                }
            }
        }
    }

        //Game over
        cout<<"Game over!"<<endl;
    
    //Exit Program
    return 0;
}


//Function Calls

void print_board(int board[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        cout<<"+------+------+------+------+"<<endl;
        for (int j = 0; j < SIZE; j++) {
            cout << "| ";
            if (board[i][j] == 0) {
                cout<<"    ";
            } else {
                cout<<setw(4)<<board[i][j];
            }
            cout<<" ";
        }
        cout<<"|"<<endl;
    }
    cout<<"+------+------+------+------+"<<endl;
}


void display_board(){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout<<board[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void shift_left(){
    for (int i = 0; i < SIZE; i++) {
    int k = 0;
    for (int j = 1; j < SIZE; j++) {
        if (board[i][j] != 0) {
            if (board[i][k] == 0) {
                board[i][k] = board[i][j];
                board[i][j] = 0;
            } else if (board[i][k] == board[i][j]) {
                board[i][k] *= 2;
                board[i][j] = 0;
                k++;
            } else {
                k++;
                board[i][k] = board[i][j];
                if (j != k) {
                    board[i][j] = 0;
                }
                }
            }
        }
    }
}

void add_duplicate_left(){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 1; j < SIZE; j++) {
            if (board[i][j] != 0 && board[i][j] == board[i][j-1]) {
                board[i][j-1] *= 2;
                board[i][j] = 0;
            }
        }
    }
}

void shift_right() {
    for (int i = 0; i < SIZE; i++) {
    int k = SIZE - 1;
    for (int j = SIZE - 2; j >= 0; j--) {
        if (board[i][j] != 0) {
            if (board[i][k] == 0) {
                board[i][k] = board[i][j];
                board[i][j] = 0;
            } else if (board[i][k] == board[i][j]) {
                board[i][k] *= 2;
                board[i][j] = 0;
                k--;
            } else {
                k--;
                board[i][k] = board[i][j];
                if (j != k) {
                    board[i][j] = 0;
                }
                }
            }
        }
    }
}
    
void add_duplicate_right(){
    for (int i = 0; i < SIZE; i++) {
        for (int j = SIZE - 2; j >= 0; j--) {
            if (board[i][j] != 0 && board[i][j] == board[i][j+1]) {
                board[i][j+1] *= 2;
                board[i][j] = 0;
            }
        }
    }
}

void shift_up(){
    for (int j = 0; j < SIZE; j++) {
    int k = 0;
    for (int i = 1; i < SIZE; i++) {
        if (board[i][j] != 0) {
            if (board[k][j] == 0) {
                board[k][j] = board[i][j];
                board[i][j] = 0;
            } else if (board[k][j] == board[i][j]) {
                board[k][j] *= 2;
                board[i][j] = 0;
                k++;
            } else {
                k++;
                board[k][j] = board[i][j];
                if (i != k) {
                    board[i][j] = 0;
                }
                }
            }
        }
    }
}

void add_duplicate_up(){
    for (int j = 0; j < SIZE; j++) {
        for (int i = 1; i < SIZE; i++) {
            if (board[i][j] != 0 && board[i][j] == board[i-1][j]) {
                board[i-1][j] *= 2;
                board[i][j] = 0;
            }
        }
    }
}

void shift_down(){
    for (int j = 0; j < SIZE; j++) {
    int k = SIZE - 1;
    for (int i = SIZE - 2; i >= 0; i--) {
        if (board[i][j] != 0) {
            if (board[k][j] == 0) {
                board[k][j] = board[i][j];
                board[i][j] = 0;
            } else if (board[k][j] == board[i][j]) {
                board[k][j] *= 2;
                board[i][j] = 0;
                k--;
            } else {
                k--;
                board[k][j] = board[i][j];
                if (i != k) {
                    board[i][j] = 0;
                }
                }
            }
        }
    }
}

void add_duplicate_down(){
    for (int j = 0; j < SIZE; j++) {
        for (int i = SIZE - 2; i >= 0; i--) {
            if (board[i][j] != 0 && board[i][j] == board[i+1][j]) {
                board[i+1][j] *= 2;
                board[i][j] = 0;
            }
        }
    }
}

//
//bool game_over(int board[SIZE][SIZE]){
//    //Check if any move is possible
//    int temp[SIZE][SIZE];
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            if (board[i][j] == 0) {
//                // An empty cell is available
//                return false;
//            }
//            // Try moving the tile to the left
//            if (j > 0){
////                board(board, temp);
//                temp[i][j-1] += temp[i][j];
//                temp[i][j] = 0;
//                if (temp[i][j-1] != 0) {
//                    return false;
//                }
//            }
//            // Try moving the tile to the right
//            if (j < SIZE-1){
//                board(board, temp);
//                temp[i][j+1] += temp[i][j];
//                temp[i][j] = 0;
//                if (temp[i][j+1] != 0) {
//                    return false;
//                }
//            }
//            // Try moving the tile up
//            if (i > 0){
//                board(board, temp);
//                temp[i-1][j] += temp[i][j];
//                temp[i][j] = 0;
//                if (temp[i-1][j] != 0) {
//                    return false;
//                }
//            }
//            // Try moving the tile down
//            if (i < SIZE-1){
//                board(board, temp);
//                temp[i+1][j] += temp[i][j];
//                temp[i][j] = 0;
//                if (temp[i+1][j] != 0) {
//                    return false;
//                }
//            }
//        }
//    }
//    // No moves are possible
//    return true;
//   
//}


bool game_over(){
    // Check if any move is possible
    bool moves_possible = false;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == 0) {
                // An empty cell is available
                moves_possible = true;
                break;
            }
            // Try moving the tile to the left
            if (j > 0 && board[i][j-1] == board[i][j]) {
                moves_possible = true;
                break;
            }
            // Try moving the tile to the right
            if (j < SIZE-1 && board[i][j+1] == board[i][j]) {
                moves_possible = true;
                break;
            }
            // Try moving the tile up
            if (i > 0 && board[i-1][j] == board[i][j]) {
                moves_possible = true;
                break;
            }
            // Try moving the tile down
            if (i < SIZE-1 && board[i+1][j] == board[i][j]) {
                moves_possible = true;
                break;
            }
        }
        if (moves_possible) {
            break;
        }
    }
    if (!moves_possible) {
        // No moves are possible
        print_board(board);
        cout << "Game over!\n";
    }
}