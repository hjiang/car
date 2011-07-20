#include "car/integer.h"

#include <iostream>

namespace car {

void Integer::write_to(std::ostream& out) {
  out << value_;
}

}
