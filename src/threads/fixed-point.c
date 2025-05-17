#include "fixed-point.h"
#include <stdio.h>
#include "stdint.h"

Fixed_P fixed_from_int(int n) {
    Fixed_P result;
    result.value = n * F;
    return result;
}


int fixed_to_int_round(Fixed_P x) {
    return x.value >= 0 ? (x.value + F / 2) / F : (x.value - F / 2) / F;
}

int fixed_to_int_floor(Fixed_P x) {
    return x.value / F;
}

int fixed_to_int_ceil(Fixed_P x) {
    return (x.value + F - 1) / F;
}

Fixed_P fixed_add(Fixed_P x, Fixed_P y) {
    Fixed_P result;
    result.value = x.value + y.value;
    return result;
}

Fixed_P fixed_sub(Fixed_P x, Fixed_P y) {
    Fixed_P result;
    result.value = x.value - y.value;
    return result;
}

Fixed_P fixed_mul(Fixed_P x, Fixed_P y) {
    Fixed_P result;
    result.value = ((int64_t)x.value) * y.value / F;
    return result;
}

Fixed_P fixed_div(Fixed_P x, Fixed_P y) {
    Fixed_P result;
    result.value = ((int64_t)x.value) * F / y.value;
    return result;
}

Fixed_P fixed_add_int(Fixed_P x, int n) {
    Fixed_P result;
    result.value = x.value + n * F;
    return result;
}

Fixed_P fixed_sub_int(Fixed_P x, int n) {
    Fixed_P result;
    result.value = x.value - n * F;
    return result;
}

Fixed_P fixed_mul_int(Fixed_P x, int n) {
    Fixed_P result;
    result.value = x.value * n;
    return result;
}

Fixed_P fixed_div_int(Fixed_P x, int n) {
    Fixed_P result;
    result.value = x.value / n;
    return result;
}