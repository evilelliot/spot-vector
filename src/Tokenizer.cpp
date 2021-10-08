/**
 * @file Tokenizer.cpp
 *
 * @author Alberto Ocaranza
 * Contact: alt.ocaranza@gmail.com
 *
 */
#include "../include/Tokenizer.hpp"
#include <regex>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


vector<float> Tokenizer::numbers(string _data){
  vector<float> data;
  
  const regex test(patterns.ANY_NUMBER);
  smatch matches;

  while(regex_search(_data, matches, test)){
    data.push_back(stof(matches.str(0)));
    _data = matches.suffix();

  }

  return data;
}
vector<string> Tokenizer::arithmetic(string _data){
  vector<string> data;
  
  const regex test(patterns.ARITHMETIC_OPERATORS);
  smatch matches;

  while(regex_search(_data, matches, test)){
    data.push_back(matches.str(0));
    _data = matches.suffix();
  }

  return data;
}
