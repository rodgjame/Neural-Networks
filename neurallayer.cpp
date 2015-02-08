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

void NeuralLayer::setNumNeurons(int numNeurons)
{
    _numNeurons = numNeurons;
}

void NeuralLayer::setNeurons(vector<Neuron> neurons)
{
    _neurons.clear();

    for (int i = 0; i < neurons.size(); i++)
    {
        _neurons.push_back(neurons[i]);
    }
}

int NeuralLayer::getNumNeurons()
{
    return _numNeurons;
}

vector<Neuron> NeuralLayer::getNeurons()
{
    return _neurons;
}
