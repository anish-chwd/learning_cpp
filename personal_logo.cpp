#include <iostream>
#include <cstdlib>

using namespace std;

void printlogo() {

    system("chcp 65001");
    system("cls");


    cout << "   ▓▓▓▓▓     ▓     ▓   ▓▓▓▓▓   ▓▓▓▓    ▓   ▓\n";
    cout << "  ▓     ▓    ▓ ▓   ▓     ▓    ▓        ▓   ▓\n";
    cout << "  ▓▓▓▓▓▓▓    ▓  ▓  ▓     ▓     ▓▓▓     ▓▓▓▓▓\n";
    cout << "  ▓     ▓    ▓   ▓ ▓     ▓        ▓    ▓   ▓\n";
    cout << "  ▓     ▓    ▓     ▓   ▓▓▓▓▓   ▓▓▓▓    ▓   ▓\n";
}

int main() {
    printlogo();
}