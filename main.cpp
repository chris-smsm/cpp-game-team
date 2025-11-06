#include <iostream>
#include "guess_number.h"
#include "windows.h"

using namespace std;


int main(){
    SetConsoleOutputCP(65001);

    int choice;

    cout << "выберите игру: 1 -- казино 2 -- угадай число" << endl;
    cin >> choice;

    switch(choice){
        case 1: {

            break;
        }
        case 2: {
            guessNumber();
            break;
        }
        case 3: {

            break;
        }
        default: {

        }
    }

    return 0;
}