//
// Created by Nirajan on 2018-11-01.
//

#include "Dictionary.hpp"



void Dictionary::print() {

}

void Dictionary::read_file() {
    string line;
    string word;
    string def;

    ifstream fin;
    fin.open("../dictionary.txt");

    while (getline(fin, line, '-')) {
        istringstream iss(line);
        iss >> word >> def;
        cout << "Word : " << endl;
        cout << "Def:" << endl;

    }
}

void Dictionary::new_word(string word, string definition) {
    dict.insert(make_pair(word, definition));
}

string Dictionary::find_word(string) {

}

