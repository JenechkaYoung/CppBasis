//
// Created by erupt on 26.12.2020.
//

#include "Test.h"
#include <iostream>

template<typename T>
Test<T>::Test() {
    std::cout << "Hello\n";
}

template class Test<int>;