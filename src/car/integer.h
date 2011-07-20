#ifndef __CAR_INTEGER_H__
#define __CAR_INTEGER_H__

#include <iosfwd>

#include "car/form.h"

namespace car {

class Integer : public Form {
public:
  explicit Integer(int value) : value_(value) {}
  virtual void write_to(std::ostream& out);
private:
  int value_;
};

}

#endif  // __CAR_INTEGER_H__
