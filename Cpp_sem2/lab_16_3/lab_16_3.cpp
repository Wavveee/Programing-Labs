#include<iostream>
#include <fstream>

using namespace std;

const string SCORE_F_PATH = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_16_3\\lab-16-3.txt";

void play_game(string path);
void show_player_scores(string path);

int main() {

    play_game(SCORE_F_PATH);
    show_player_scores(SCORE_F_PATH);

    return 0;
}

void play_game(string path) {

    cout << "Let's start the game!!" << endl;
    ofstream file(path);

    while (true) {

        cout << "Enter the name of the player (or 'q' to quit): ";
        string player;
        int score;
        cin >> player;

        if (player == "q") break;

        cout << "Enter the score of " << player << ": ";
        cin >> score;

        file << player << " " << score << endl;
    }

    file.close();
};
void show_player_scores(string path) {
    ifstream file(path);

    cout << "----------------------" << endl;
    cout << "SCORES" << endl;
    cout << "----------------------" << endl;

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
};