#include <iostream>
#include <string>
#include <vector>
using namespace std;

void centerify_output(string str, int num_cols) {
    // oblicz lewe dopełnienie
    int left_padding = (num_cols / 2) - (str.size() / 2);
    // wstawianie dopełnienia spacjami
    for(int i = 0; i < left_padding; i++) cout << ' ';
    // wypisanie wiadomości
    cout << str;
}
int main() {
    vector<string> lines = {
            "-----------------------------------------------------",
            "|                     Welcome                       |",
            "|                     to IOPS                       |",
            "|                                                   |",
            "|                                                   |",
            "|                                                   |",
            "|                 Powered by Ecorp                  |",
            "-----------------------------------------------------",
    };

    int num_cols = 100;

    // wirtualna granica
    cout << endl;
    for(int i = 0; i < num_cols; ++i) cout << ' ';
    cout << '|' << endl;

    // wypisanie
    for(int i = 0; i < lines.size(); ++i){
        centerify_output(lines[i], num_cols);
        cout << endl;
    }

    // wirtualna granica
    cout << endl;
    for(int i = 0; i < num_cols; ++i) cout << ' ';
    cout << '|' << endl;

    return 0;
}
