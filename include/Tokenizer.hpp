/**
 * @file Tokenizer.hpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#ifndef Tokenizer_hpp
#define Tokenizer_hpp

#include "../src/Patterns.cpp"
#include <regex>
#include <vector>
using namespace std;

class Tokenizer{
  Patterns patterns;
  int tk_size;
  float* _data;
  public:
    Tokenizer(){}
    vector<float> numbers(string);
    vector<string> arithmetic(string);
};

#endif