/*
Bitcoin, SHA-256
Ethereum - 

Based off of https://lhartikk.github.io/jekyll/update/2017/07/14/chapter1.html
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
        string data;
        string prevHash;
        string hash;
    public:
    Block(int, int, string, string, string);

};

#endif