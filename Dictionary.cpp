//
// Created by Nirajan on 2018-11-01.
//

#include "Dictionary.hpp"


void Dictionary::print() {
    map<string, string>::iterator itr;

    for (itr = dict.begin(); itr != dict.end(); ++itr) {
        cout << itr->first << " - " << itr->second << endl;
    }
    cout << endl;
}

void Dictionary::read_file() {
    string line;
    string delimiter = "-";
    ifstream fin;
    fin.open("../dictionary.txt");

    while (getline(fin, line)) {
        string key = line.substr(0, line.find(delimiter) - 1);
        string def = line.substr(line.find(delimiter) + 2);
        dict.insert(make_pair(key, def));
    }
}

void Dictionary::new_word() {
    bool found = false;
    string temp_word;
    map<string, string>::iterator itr;
    do {
        if(found) {
            cout << "Word already exists" << endl;
            found = false;
        }
        cout << "Please Enter the new word:" << endl;
        cin >> temp_word;
        for (itr = dict.begin(); itr != dict.end(); ++itr) {
            string s = itr->first;
            if (s == temp_word) {
                found = true;
            }
        }
    } while (found);

    if (!found) {
        cout << "Please Enter the definition for the new world:" << endl;
        string temp_def;
        getline(cin >> ws, temp_def);
        dict.insert(make_pair(temp_word, temp_def));
    }


}

void Dictionary::find_word() {
    cout << "Please Enter the word you would like to search:" << endl;
    string temp_word;
    cin >> temp_word;
    map<string, string>::iterator itr;
    bool found = false;
    for (itr = dict.begin(); itr != dict.end(); ++itr) {
        string s = itr->first;
        if (s == temp_word) {
            found = true;
            cout << "Definition:" << itr->second << endl;
        }
    }
    if (!found) {
        cout << "That word does not exist" << endl;
    }
}

