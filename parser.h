#pragma once

#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <vector>
#include <math.h>
#include <iostream>

using namespace std;

class parser{
   protected:
    int N;
    vector <double> x, y;
   public:
    parser(ifstream &file_in);
};