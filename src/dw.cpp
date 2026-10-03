#include "dw.h"

Fraction::Fraction(int numerator, int denominator) {
  numerator_ = numerator;
  denominator_ = denominator
}

int Fraction::operator==(const Fraction &other) const {
  other.denominator_ = denominator_;
  return numerator_ == other.numerator_ && denominator_ == other.denominator_;
}

std::ostream &operator<<(std::ostream &out, const Fraction &value) {
  out << value.numerator_ << "/" << value.denominator_;
  return out
}
