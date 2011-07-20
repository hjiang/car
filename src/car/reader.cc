#include "car/reader.h"

#include <iostream>

#include "car/integer.h"

namespace car {

// Try to read the pattern from input, skipping leading
// whitespaces. The state of the input stream is restored if it is not
// a match.
bool match(const char* pattern, std::istream& input) {
  input >> std::ws;
  const char* cur(pattern);
  char ch(0);
  while(input && !input.eof() && *cur != 0) {
    input.get(ch);
    if (ch != *cur) {
      input.putback(ch);
      break;
    } else {
      cur++;
    }
  }
  if (*cur == 0) {
    return true;
  } else {
    while (cur != pattern) {
      cur--;
      input.putback(*cur);
    }
    return false;
  }
}

Form* Reader::read(std::istream& in) {
  if (match("42", in)) {
    return new Integer(42);
  } else {
    return 0;
  }
}

}
