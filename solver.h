#pragma once

#include "parser.h"

using namespace std;

class solver: public parser{
   protected:
    vector <int> result;
    double finlen;
   public:
    solver(ifstream &file_in, int safevar);
    solver(ifstream &file_in);
    void print_way(vector <int> way);
    double len(int i, int j);
    double way_len(vector <int> way);
};