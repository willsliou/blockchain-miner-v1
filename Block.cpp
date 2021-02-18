#include "Block.hpp"

Block::Block(
    int i, int t, int d, string p, string h) {
    this->index = i;
    this->timestamp = t;
    this->data = d;
    this->prevHash = p;
    this->hash = h;
}