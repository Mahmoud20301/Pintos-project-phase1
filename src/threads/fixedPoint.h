#ifndef FIXED_POINT_H
#define FIXED_POINT_H


// Fixed-point scaling factor (2^14)
#define F (1 << 14)

// Fixed-point number representation
typedef struct {
    int value;
} Fixed_P;

// Conversion functions
Fixed_P fixed_from_int(int n);
int fixed_to_int_round(Fixed_P x);
int fixed_to_int_floor(Fixed_P x);
int fixed_to_int_ceil(Fixed_P x);

// Basic arithmetic operations
Fixed_P fixed_add(Fixed_P x, Fixed_P y);
Fixed_P fixed_sub(Fixed_P x, Fixed_P y);
Fixed_P fixed_mul(Fixed_P x, Fixed_P y);
Fixed_P fixed_div(Fixed_P x, Fixed_P y);

// Mixed operations with integers
Fixed_P fixed_add_int(Fixed_P x, int n);
Fixed_P fixed_sub_int(Fixed_P x, int n);
Fixed_P fixed_mul_int(Fixed_P x, int n);
Fixed_P fixed_div_int(Fixed_P x, int n);

#endif // FIXED_POINT_H