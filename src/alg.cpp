// Copyright 2022 NNTU-CS
#include <valarray>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return  true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t count = 1, num = 2;
    while (count < n) {
        num += 1;
        if (checkPrime(num)) {
            count += 1;
        }
    }
    return num;
}

uint64_t nextPrime(uint64_t value) {
    while (checkPrime(value+1)) {
        value += 1;
    }
    return  value;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t summ = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        if (checkPrime(i)) {
            summ = summ + i;
        }
    }
    return summ;
}
