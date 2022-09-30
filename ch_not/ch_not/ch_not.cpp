#include <iostream>
using namespace std;

int Board[8][8];

class Pawn() {

};

class Rook() {

};

class Knight() {

};

class Bishop() {

};

class Queen() {

};

class King() {

};

string Move_Build(string M, char P) {
    string o;
    o = M[0];

    if (((M[1] < 97) && (M[1] > 104)) && (M[1] != 120))
    return o;
}

int main() {
    char i;
    int j = 9;
    int n = 0;
    string Move, Res;
    while (true) {
        cin >> Move;
        if (Move == "E") break;
        if (Move[0] == 'N') Res = Move_Build(Move, 'N');
        else {
            if (Move[0] == 'B') Res = Move_Build(Move, 'B');
            else {
                if (Move[0] == 'R') Res = Move_Build(Move, 'R');
                else {
                    if (Move[0] == 'Q') Res = Move_Build(Move, 'Q');
                    else {
                        if (Move[0] == 'K') Res = Move_Build(Move, 'K');
                        else {
                            n = Move[0] - 96;
                            i = Move[1];
                            j = Move[2];
                            if (((n < 1) || (n > 8)) || ((j < 1) || (j > 8))) cout << "This is not a chess move!";
                            else {

                            }
                        }
                    }
                }
            }
        }
        //cout << n << " " << j << endl;
    }
}