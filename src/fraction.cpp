#include "fraction.h"

fraction::fraction(int num, unsigned int den = 1): _num(num), _den(den) {
}

fraction::~fraction() {}


fraction::fraction(const fraction &other) {
  if (this != &other) {
    _num = other.getNum();
    _den = other.getDen();
  }
}

fraction &fraction::operator=(const fraction &other) {
  if (this != &other) {
    _num = other.getNum();
    _den = other.getDen();
  }

  return (*this);
}

int     fraction::getNum() const {
  return (_num);
}

unsigned int    fraction::getDen() const {
  return (_den);
}

/**
 * \brief   Return common divisor between two integers
 * \param   2 integers
 * \return  integer, the common divisor
 */
int     commonDivisor(int a, int b) {
  if (!b) return (a);

  return commonDivisor(b, (a % b));
}
