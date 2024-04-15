#include "matrix.h"

Matrix::Matrix(size_t rowSize, size_t columnSize): rowSize_(rowSize), columnSize_(columnSize){
    data_ = new int64_t* [rowSize];
    for (size_t i = 0; i < rowSize; ++i){
        data_[i] = new int64_t [columnSize];
        for (size_t j = 0; j < columnSize; ++j){
            data_[i][j] = rand()%1000;
        }
    }
}

int64_t Matrix::RowSumData(){
    int64_t dataSum_ = 0;
    for (size_t i = 0; i < rowSize_; ++i){
        for (size_t j = 0; j < columnSize_; ++j){
            dataSum_ += data_[i][j];
        }
    }
    return dataSum_;
}

int64_t Matrix::ColumnSumData(){
    int64_t dataSum_ = 0;
    for (size_t i = 0; i < columnSize_; ++i){
        for (size_t j = 0; j < rowSize_; ++j){
            dataSum_ += data_[j][i];
        }
    }
    return dataSum_;
}

Matrix::~Matrix(){
    for (size_t i = 0; i < rowSize_; ++i){
        delete[] data_[i];
    }
    delete[] data_;
}

