/**
 * @file Evaluator.hpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#ifndef Evaluator_hpp
#define Evaluator_hpp

#include <string>
#include <vector>
using namespace std;

class Evaluator{
  string _exp;
  public:
  Evaluator(string type, string exp);
  Evaluator(){}
  void vector_2D(vector<float>);
  void vector_3D(vector<float>);
  void sum_v2D(vector<float>);
  void sumb_v2D(vector<float>);
  void sumbr_v2D(vector<float>);
  void sumbl_v2D(vector<float>);
  void res_v2D(vector<float>);
  void resb_v2D(vector<float>);
  void resbr_v2D(vector<float>);
  void resbl_v2D(vector<float>);
  void sum_v3D(vector<float>);
  void sumb_v3D(vector<float>);
  void sumbl_v3D(vector<float>);
  void esc_2D_s(vector<float>);
  void module_v2D(vector<float>);
  void point_product(vector<float>, vector<float>);
  void cross_product(vector<float>, vector<float>);
};

#endif