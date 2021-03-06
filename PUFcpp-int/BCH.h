//
// Created by Ade Setyawan on 10/25/17.
//

#ifndef BCH_BCH_H
#define BCH_BCH_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include "string.h"

class BCH {
private:
//    int m = 9;
//    uint16_t n = 511;
//    int k = 31;
//    int t = 109;
//    int d = 219;

//    int8_t m = 4;
//    int8_t n = 15;
//    int8_t k = 5;
//    int8_t t = 3;
//    int8_t d = 7;

    int m = 6;
    uint16_t n = 63;
    int k = 7;
    int t = 15;
    int d = 31;

    int *p;
    int *alpha_to;
    int *index_of;
    int *g;
    int row = 66;

public:
    BCH();

    void initialize();

    void
    initialize_p();

    void
    generate_gf();

    void
    gen_poly();

    void
    encode_bch(int *input, int *result);

    void
    decode_bch(int *input, int *result);

    int get_row();

    int get_key_length();

    int get_n();

    int get_m();

    int get_t();

    void clean();
};

#endif //BCH_BCH_H
