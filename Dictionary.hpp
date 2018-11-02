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
    //Map that contains the word as the key
    //and the definition as the key value
    map<string, string> dict;
public:
    //Default constructor
    Dictionary() = default;

    //Print out all the results in the dictionary
    //In the format "word - definition"
    void print();

    //Searches the map for a matching key given user input
    //Prints the definition.
    void find_word();

    //Reads in dictionary text file
    //Populates the map
    void read_file();

    //Adds new word and definition to the map
    //If word exists, lets user know, and try again.
    void new_word();
};


#endif //LAB6_DICTIONARY_HPP
