#include "neuron.h"

Neuron::Neuron()
{
    _numInputs = 0;
    srand(time(NULL));
}

Neuron::Neuron(int numInputs)
{
    _numInputs = numInputs;
    srand(time(NULL));
    for (int i = 0; i < numInputs; i++)
    {
        _weights.push_back(GenerateRandomNumber());
    }
}

void Neuron::SetNumberOfInputs(int numInputs)
{
    _numInputs = numInputs;
}

void Neuron::SetWeights(vector<double> weights)
{
    _weights.clear();

    for (int i = 0; i < weights.size(); i++)
    {
        _weights.push_back(weights[i]);
    }
}

int Neuron::GetNumberOfInputs()
{
    return _numInputs;
}

vector<double> Neuron::GetWeights()
{
    return _weights;
}

double Neuron::GenerateRandomNumber()
{
    double randomDouble = (double)rand() / RAND_MAX;
    return RAND_LOWERB + randomDouble * (RAND_UPPERB - RAND_LOWERB);
}
