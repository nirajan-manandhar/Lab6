#include <iostream>

#include "Dictionary.hpp"


//Displays a menu that will prompt for user input then trigger function calls
void menu() {
    bool run = true;
    Dictionary d{};
    d.read_file();

    while(run) {
        cout << "Choose an option." << endl;
        cout << "1 - Print dictionary" << endl;
        cout << "2 - Find word definition" << endl;
        cout << "3 - Enter new word and definition" << endl;
        cout << "4 - Exit" << endl;

        int choice;
        cin >> choice;
        string temp_word;

        switch (choice) {
            case 1:
                d.print();
                break;
            case 2:
                d.find_word();
                break;
            case 3:
                d.new_word();
                break;
            case 4:
                run = false;
                break;
            default:
                cout << "Your choices are 1, 2, 3 or 4" << endl;
                cout << "Try Again!" << endl;
                menu();
                break;
        }
    }

}

//Main
int main() {
    menu();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}