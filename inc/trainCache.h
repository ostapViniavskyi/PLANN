//
// Created by iatsuk on 05.04.2019.
//

#ifndef PLANN_TRAINCASHE_H
#define PLANN_TRAINCASHE_H

#include "matrix.h"

class TrainCache {
public:

    Matrix w;
    Matrix dw;
    Matrix z;
    Matrix dz;
    Matrix at;
    Matrix wt;

    void TrainCache(int previous_units_number, int current_units_number, int batch_size);
};

#endif //PLANN_TRAINCASHE_H