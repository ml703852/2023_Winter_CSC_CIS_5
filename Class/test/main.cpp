#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // initialize random seed
srand(static_cast<unsigned int>(time(0)));

    // game state variables
    int player_total = 0;
    int dealer_total = 0;
    bool player_turn = true;
    bool dealer_turn = false;
    bool player_busted = false;
    bool dealer_busted = false;

    for (bool play_again = true; play_again == true;) {
        // give player and dealer two cards at the start of each round
        player_total = rand() % 11 + 1;
        cout << "Your first card value is: " << player_total << endl;
        player_total += rand() % 11 + 1;
        cout << "Your second card value is: " << player_total << endl;

        dealer_total = rand() % 11 + 1;
        cout << "Dealer's first card value is: " << dealer_total << endl;
        dealer_total += rand() % 11 + 1;
        cout << "Dealer's second card value is: " << dealer_total << endl;

        // player's turn
        while (player_turn) {
            int card = rand() % 11 + 1;
            player_total += card;
            cout << "Your card value is: " << card << endl;
            cout << "Your total is: " << player_total << endl;
            if (player_total > 21) {
                player_busted = true;
                cout << "You busted!" << endl;
                break;
            }
            char hit_or_stay;
            cout << "Do you want to hit or stay? (h/s)" << endl;
            cin >> hit_or_stay;
            if (hit_or_stay == 's') {
                player_turn = false;
                dealer_turn = true;
            }
        }

        // dealer's turn
        while (dealer_turn) {
            int card = rand() % 11 + 1;
            dealer_total += card;
            cout << "Dealer's card value is: " << card << endl;
            cout << "Dealer's total is: " << dealer_total << endl;
            if (dealer_total > 21) {
                dealer_busted = true;
                cout << "Dealer busted!" << endl;
                break;
            }
            if (dealer_total >= 17) {
                dealer_turn = false;
            }
        }

        // determine winner
        if (player_busted) {
            cout << "Dealer wins!" << endl;
        } else if (dealer_busted) {
            cout << "You win!" << endl;
        } else {
            if (player_total > dealer_total) {
                cout << "You win!" << endl;
            } else if (dealer_total > player_total) {
                cout << "Dealer wins!" << endl;
               } else {
                cout << "It's a tie!" << endl;
            }
        }

        // ask player if they want to play again
        cout << "Do you want to play again? (y/n)" << endl;
        char play_again_response;
        cin >> play_again_response;
        if (play_again_response == 'n') {
            play_again = false;
        } else {
            // reset game state variables for next round
            player_total = 0;
            dealer_total = 0;
            player_turn = true;
            dealer_turn = false;
            player_busted = false;
            dealer_busted = false;
        }
    }

    return 0;
}