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
    void setNumNeurons(int numNeurons);
    void setNeurons(vector<Neuron> neurons);
    int getNumNeurons();
    vector<Neuron> getNeurons();
};

#endif // NEURALLAYER_H
