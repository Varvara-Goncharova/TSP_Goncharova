#include "solver.h"

int main() {
    ifstream file_in;
    file_in.open("tsp_100_4");
    solver Solv(file_in);
    return 0;
}