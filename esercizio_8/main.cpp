#include <iostream>
#include "Matrix.h"
#include <exception>


int main() {

    Matrix <int> A(3,4,1);
    try{
        A.setElement(2,1,4);
    }
    catch (std::out_of_range &msg) {
        std::cout<<msg.what();
    }
    std::cout<<A.getElement(2,1);


    return 0;
}
