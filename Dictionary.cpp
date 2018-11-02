//
// Created by Nirajan on 2018-11-01.
//

#include "Dictionary.hpp"


void Dictionary::print() {
    map <string, string> :: iterator itr;

    for (itr = dict.begin(); itr != dict.end(); ++itr)
    {
        cout  <<  "Word:" << itr->first << endl;
        cout << "Definition:" << itr->second << endl;
    }
    cout << endl;
}

void Dictionary::read_file() {
    string line;
    string delimiter = "-";
    ifstream fin;
    fin.open("../dictionary.txt");

    while (getline(fin, line)) {
        string key = line.substr(0, line.find(delimiter));
        string def = line.substr(line.find(delimiter) + 2);
        dict.insert(make_pair(key,def));
    }
}

void Dictionary::new_word() {
    cout << "Please Enter the new word:" << endl;
    string temp_word;
    cin >> temp_word;
    cout << "Please Enter the definition for the new world:" << endl;
    string temp_def;
    getline(cin >> ws, temp_def);
    dict.insert(make_pair(temp_word, temp_def));
}

string Dictionary::find_word() {
    cout << "Please Enter the word you would like to search:" << endl;
    string temp_word;
    cin >> temp_word;

    auto itr2 = dict.find(temp_word);
    if (itr2 != dict.end()) {
        std::cout << "Found " << itr2->first << " " << itr2->second << '\n';
    } else {
        std::cout << "Not found";
    }
}

