// Copyright 2021 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "bst.h"
#include <stdlib.h>
BST<std::string> makeTree(const char* filename) {
  BST<std::string> Tree;
  std::ifstream fin(filename);
  std::string str = "";
  while (!fin.eof()) {
    char a = fin.get();
    if (a >= 'A' && a <= 'Z') {
      str += tolower(a);
    } else if (a >= 'a' && a <= 'z') {
      str += a;
    } else {
      binTree.add(str);
      str = "";
    }
  }
  return Tree;
}
