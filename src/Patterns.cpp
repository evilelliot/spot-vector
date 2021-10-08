/**
 * @file Patterns.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include <regex>
#include <string>
using namespace std;

struct Patterns{
  const string ANY_NUMBER = "[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)";
  const string ARITHMETIC_OPERATORS = "[+-]?(\\+{1}|\\-{1}|\\/{1}|\\*{1})";
};