/*
Bitcoin, SHA-256
Ethereum - 
*/

#ifndef BLOCK_HPP
#define BLOCK_HPP

#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::string;

class Block {
    private:
        int index;
        int timestamp;
        int data;
        string prevHash;
        string hash;
    public:
    Block(int, int, int, string, string);

};

#endif