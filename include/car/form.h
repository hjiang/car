#ifndef __CAR_FORM_H__
#define __CAR_FORM_H__

#include <iosfwd>

namespace car {

class Form {
public:
  virtual void write_to(std::ostream& out) = 0;
};

}
#endif  // __CAR_FORM_H__
