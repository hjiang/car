#ifndef __CAR_READER_H__
#define __CAR_READER_H__

#include <iosfwd>

namespace car {

class Form;

class Reader {
public:
  Form* read(std::istream& in);
};

}

#endif  // __CAR_READER_H__
