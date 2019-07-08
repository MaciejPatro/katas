#include "hungarian_notation_class.hpp"

namespace testing {

int SomeClass::m_function_faking_hungarian_notation()
{
  m_possibly_not_safe++;
  m_possibly_in_api++;
  return ++m_replaceable;
}

}

void some_function()
{
  SomeClass s;
  s.m_replaceable = 4; // shouldn't be replaced
}
