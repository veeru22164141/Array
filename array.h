#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>
#include <vector>

// Your code goes here
class Array {

    public:
        Array()=default;
        ~Array()=default;
        int maxIndexDiff(std::vector<int> arr);
};

#endif // ARRAY_H