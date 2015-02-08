#include "neurallayer.h"

NeuralLayer::NeuralLayer()
{
    _numNeurons = 0;
}

NeuralLayer::NeuralLayer(int numNeurons, int inputsPerNeuron)
{
    _numNeurons = numNeurons;

    for (int i = 0; i < _numNeurons; i++)
    {
        _neurons.push_back(Neuron (inputsPerNeuron));
    }
}
