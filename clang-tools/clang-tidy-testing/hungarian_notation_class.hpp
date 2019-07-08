#pragma once

namespace testing {

class SomeClass
{
public:
  SomeClass() : m_possibly_in_api(1), m_possibly_not_safe(2), m_replaceable(3), might_not_replace(0) {}
  int m_possibly_in_api;

protected:
  int m_possibly_not_safe;

private:
  int              m_replaceable;
  int              m_function_faking_hungarian_notation();
  static const int m_static_with_wrong_notation;
  int              might_not_replace;
};

} // namespace testing

class SomeClass
{
public:
  int m_replaceable; // not really
};
