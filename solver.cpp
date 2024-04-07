#include "solver.h"
#include "parser.h"

void solver:: print_way(vector <int> way){
    int s = way.size();
    for (int i = 0; i < s; i++) cout << way[i] << " ";
    cout << endl;
};

double solver:: len(int i, int j){
    return sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
};

double solver:: way_len(vector<int> way){
    double L = 0;
    for (int i = 0; i < N - 1; i++) 
        L += len(way[i], way[i + 1]);
    L += len(way[0], way[N - 1]);
    return L;
};

solver:: solver(ifstream &file_in, int safevar): parser(file_in){
    int i;
    for (i = 0; i < N; i++) result.push_back(i);
    finlen = way_len(result);
};

solver:: solver(ifstream &file_in): solver(file_in, 0){
    double difference;
    for (int i = 0; i < N - 1; i++)
        for (int j = i + 2; j < N; j++) {
            difference = len(result[i], result[j]) + len(result[i + 1], 
            result[(j + 1) % N]) - len(result[i], result[i + 1]) - len(result[j], result[(j + 1) % N]);
            if (difference < 0) {
                reverse(result.begin() + i + 1,result.begin() + j + 1);
                finlen += difference;
                j = i + 2;
            }
        }
    print_way(result);
    cout << finlen << endl;
};