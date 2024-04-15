#include <vector>
#include <cstddef>
#include <cstdint>
#include <random>


class Matrix{
    public:
        Matrix(size_t rowSize, size_t columnSize);
        int64_t RowSumData();
        int64_t ColumnSumData();
        ~Matrix();
    private:
        int64_t** data_;
        size_t rowSize_;
        size_t columnSize_;
};
