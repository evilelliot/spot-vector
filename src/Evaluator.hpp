#ifndef Evaluator_hpp
#define Evaluator_hpp

#include <regex>
#include <string>
using namespace std;

class Evaluator{
  string _exp;
  public:
  Evaluator(string type, string exp);
  void vector_2D(string x, string y);
  void vector_3D(string x, string y, string z);
  void sum_v2D(string x, string y, string x1, string y1);
  void sumb_v2D(string x, string y, string x1, string y1);
  void sumbr_v2D(string x, string y, string x1, string y1, string x2, string y2);
};
#endif