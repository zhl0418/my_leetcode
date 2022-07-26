#ifndef FRACTION_H
#define FRACTION_H

class fraction {
 private:
  int           _num;
  unsigned int  _den;

 public:
  fraction(int, unsigned int);
  ~fraction();

  /*
  ** Coplien's form
  */
  fraction(const fraction &);
  fraction &operator=(const fraction &);

  /*
  ** Getter
  */
  int           getNum() const;
  unsigned int  getDen() const;
};

int   commonDivisor(int, int);

#endif
