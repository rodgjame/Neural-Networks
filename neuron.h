#ifndef NEURON_H
#define NEURON_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

class Neuron
{
private:
    int _numInputs;
    vector<double> _weights;
    double GenerateRandomNumber();
    const double RAND_UPPERB = 0.5;
    const double RAND_LOWERB = -0.5;
public:
    Neuron();
    Neuron(int numInputs);
    void SetNumberOfInputs(int numInputs);
    void SetWeights(vector<double> weights);
    int GetNumberOfInputs();
    vector<double> GetWeights();
};

#endif // NEURON_H
