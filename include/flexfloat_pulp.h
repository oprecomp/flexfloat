#include <cstdint>
#include <iostream>
#include "backend-types-pulp.hpp"

#ifndef INLINE
#define INLINE inline
#endif


template <uint_fast8_t exp_bits, uint_fast8_t frac_bits> class flexfloat {
protected:
    using T = typename BackendType<exp_bits,frac_bits>::FloatType;
    T v;
public:

    INLINE T getValue() const {
        return v;
    }

    // Empty constructor --> initialize to positive zero.
    INLINE flexfloat ()
    {
        v = 0.0f;
    }

    INLINE flexfloat (const flexfloat &o) {
        v = o.getValue();
    }


   INLINE flexfloat& operator = (const flexfloat &o) {
        v = o.getValue();
        return *this;
    }

    // Constructor from flexfloat types
    template <uint_fast8_t e, uint_fast8_t f> INLINE flexfloat (const flexfloat<e, f> &w) {
        v = T(w.getValue());
    }

    // Constructor from castable type
    INLINE flexfloat (const T &w)
    {
        v = w;
    }

    // Constructor from castable type
    template <typename U> INLINE flexfloat (const U &w)
    {
        v = T(w);
    }


    /*------------------------------------------------------------------------
    | OPERATOR OVERLOADS: CASTS
    *------------------------------------------------------------------------*/

    INLINE explicit operator float() const {
        return float(*(reinterpret_cast<const T *>(&(v))));
    }

    INLINE explicit operator double() const {
        return double(*(reinterpret_cast<const T *>(&(v))));
    }

    INLINE explicit operator long double() const {
        return (long double)(*(reinterpret_cast<const T *>(&(v))));
    }

    INLINE explicit operator __float128() const {
        return (__float128)(*(reinterpret_cast<const T *>(&(v))));
    }

    /*------------------------------------------------------------------------
    | OPERATOR OVERLOADS: Arithmetics
    *------------------------------------------------------------------------*/

    /* UNARY MINUS (-) */
    INLINE flexfloat operator-() const
    {
        return - v;
    }

    /* UNARY PLUS (+) */
    INLINE flexfloat operator+() const
    {
        return v;
    }

    /* ADD (+) */
    friend INLINE flexfloat operator+(const flexfloat &a, const flexfloat &b)
    {
        return a.v + b.v;
    }

     /* SUB (-) */
    friend INLINE flexfloat operator-(const flexfloat &a, const flexfloat &b)
    {
        return a.v - b.v;
    }

     /* MUL (-) */
    friend INLINE flexfloat operator*(const flexfloat &a, const flexfloat &b)
    {
        return a.v * b.v;
    }

     /* DIV (/) */
    friend INLINE flexfloat operator/(const flexfloat &a, const flexfloat &b)
    {
        return a.v / b.v;
    }

    /*------------------------------------------------------------------------
    | OPERATOR OVERLOADS: Relational operators
    *------------------------------------------------------------------------*/


    /* EQUALITY (==) */
    friend INLINE bool operator==(const flexfloat &a, const flexfloat &b) {
        return (a.v == b.v);
    }

    /* INEQUALITY (!=) */
    friend INLINE bool operator!=(const flexfloat &a, const flexfloat &b) {
        return (a.v != b.v);
    }

    /* GREATER-THAN (>) */
    friend INLINE bool operator>(const flexfloat &a, const flexfloat &b) {
        return (a.v > b.v);
    }

    /* LESS-THAN (<) */
    friend INLINE bool operator<(const flexfloat &a, const flexfloat &b) {
        return (a.v < b.v);
    }

    /* GREATER-THAN-OR-EQUAL-TO (>=) */
    friend INLINE bool operator>=(const flexfloat &a, const flexfloat &b) {
        return (a.v >= b.v);
    }

    /* LESS-THAN-OR-EQUAL-TO (<=) */
    friend INLINE bool operator<=(const flexfloat &a, const flexfloat &b) {
        return (a.v <= b.v);
    }

    /*------------------------------------------------------------------------
    | OPERATOR OVERLOADS: Compound assignment operators (no bitwise ops)
    *------------------------------------------------------------------------*/
    INLINE flexfloat &operator+=(const flexfloat &b) {
        return *this = *this + b;
    }

    INLINE flexfloat &operator-=(const flexfloat &b) {
        return *this = *this - b;
    }

    INLINE flexfloat &operator*=(const flexfloat &b) {
        return *this = *this * b;
    }

    INLINE flexfloat &operator/=(const flexfloat &b) {
        return *this = *this / b;
    }

    /*------------------------------------------------------------------------
    | OPERATOR OVERLOADS: IO streams operators
    *------------------------------------------------------------------------*/
    friend std::ostream& operator<<(std::ostream& os, const flexfloat& obj)
    {
        os << float(obj.v);
        return os;
    }

};
