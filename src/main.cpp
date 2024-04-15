#include "matrix.h"

#include <iostream>

int main(){
    size_t rowSize = 1000;
    size_t columnSize = 1000;

    Matrix matrix(rowSize, columnSize);
    
    int64_t b = matrix.RowSumData();

    return 0;
}
