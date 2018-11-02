//
// Created by Nirajan on 2018-11-01.
//

#ifndef LAB6_DICTIONARY_HPP
#define LAB6_DICTIONARY_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <fstream>
#include <sstream>



using namespace std;

class Dictionary {
private:
    map<string, string> dict;
public:
    Dictionary() = default;
    void print();
    string find_word();
    void read_file();
    void new_word();
};


#endif //LAB6_DICTIONARY_HPP
