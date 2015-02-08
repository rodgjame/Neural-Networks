#ifndef NEURALLAYER_H
#define NEURALLAYER_H

#include <neuron.h>
#include <vector>

using namespace std;

class NeuralLayer
{
private:
    int _numNeurons;
    vector<Neuron> _neurons;
public:
    NeuralLayer();
    NeuralLayer(int numNeurons, int inputsPerNeuron);
};

#endif // NEURALLAYER_H
