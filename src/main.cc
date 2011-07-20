#include <iostream>
#include <memory>
#include <string>

#include "car/form.h"
#include "car/reader.h"

using std::istream;
using std::ostream;
using std::unique_ptr;
using std::string;


// Try to read the pattern from input, skipping leading
// whitespaces. The state of the input stream is restored if it is not
// a match.
int repl(istream& in, ostream& out) {
  car::Reader reader;
  while (!in.eof() && in.good()) {
    out << "car> ";
    const unique_ptr<car::Form> form(reader.read(in));
    if (form) {
      form->write_to(out);
      out << std::endl;
    }
  }
  return 0;
}

int main(int argc, char* argv[]) {
  return repl(std::cin, std::cout);
}
