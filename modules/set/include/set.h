// Copyright 2018 Levitsky Ilya
#ifndef MODULES_SET_INCLUDE_SET_H_
#define MODULES_SET_INCLUDE_SET_H_

#include <iostream>
#include <vector>
#include "include/bitfield.h"

class set{
    int MaxPow;
    bitfield BF;

 public:
    explicit set(int mp = 10);
    set(set&);

    void Insert(int k);
    void Insert(const std::vector<int>& vec);

    int Get(int k);
    int GetN(int k);
    std::vector<int> GetElements();

    set operator+(const set&);
    set operator*(const set&);
    set operator~();
    set& operator=(const set&);
};
#endif  // MODULES_SET_INCLUDE_SET_H_
