#include <iostream>

bool f(bool x, bool y, bool z) {
  bool value = (!x && !y && z) || (!x && y && !z) || (!x && y && z) 
  || (x && !y && !z) || (x && y && z); // TODO: change this line
  return value;
}
