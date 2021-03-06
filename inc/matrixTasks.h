//
// Created by ostap on 17.05.19.
//

#ifndef PLANN_MATRIX_TASKS_H
#define PLANN_MATRIX_TASKS_H

#include <mutex>
#include "parallelMatrix.h"

void map_task(const std::function<float(float)> &f, const Matrix *source,  Matrix *result, int start, int end);

void
combine_task(const std::function<float(float, float)> &f, const Matrix *source1, const Matrix *source2, Matrix *result,
             int start, int end);

void map_indexed_task(const std::function<float(float, int, int)> &f, const Matrix *source, Matrix *result, int start,
                      int end);

void transpose_task(const Matrix *source, Matrix *result, int start, int end);

void reduce_row_task(std::function<float(float, float)> f, const Matrix *source, Matrix *result, float initial_value,
                     int start, int end);

void add_column_task(Matrix *source, const Matrix *rhs, int start, int end);

void sum_task(const Matrix *source, std::mutex &mutex, float &result, int start, int end);

void multiply_task(const Matrix *source1, const Matrix *source2, Matrix *result, int start, int end);
#endif //PLANN_MATRIX_TASKS_H
