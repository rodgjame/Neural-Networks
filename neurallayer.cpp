#include "neurallayer.h"

/**
 * @brief NeuralLayer::NeuralLayer Default constructor.
 */
NeuralLayer::NeuralLayer()
{
    _numNeurons = 0;
}

/**
 * @brief NeuralLayer::NeuralLayer Constructor that sets the number of neurons along with the number of inputs per neuron.
 * @param numNeurons Number of neurons for this neural layer.
 * @param inputsPerNeuron Number of inputs each neuron will have in this neural layer.
 */
NeuralLayer::NeuralLayer(int numNeurons, int inputsPerNeuron)
{
    _numNeurons = numNeurons;

    for (int i = 0; i < _numNeurons; i++)
    {
        _neurons.push_back(Neuron (inputsPerNeuron));
    }
}

/**
 * @brief NeuralLayer::setNumNeurons Sets the number of neurons in this neural layer.
 * @param numNeurons Number of neurons in this neural layer.
 */
void NeuralLayer::setNumNeurons(int numNeurons)
{
    _numNeurons = numNeurons;
}

/**
 * @brief NeuralLayer::setNeurons Sets the neurons to be represented in this neural layer.
 * @param neurons Vector of neurons to be placed in this neural layer.
 */
void NeuralLayer::setNeurons(vector<Neuron> neurons)
{
    _neurons.clear();

    for (int i = 0; i < neurons.size(); i++)
    {
        _neurons.push_back(neurons[i]);
    }
}

/**
 * @brief NeuralLayer::getNumNeurons Returns the number of neurons in this neural layer.
 * @return  Number of neurons in this neural layer
 */
int NeuralLayer::getNumNeurons()
{
    return _numNeurons;
}

/**
 * @brief NeuralLayer::getNeurons Returns a vector containing the neurons in this neural layer.
 * @return Neurons in this neural layer.
 */
vector<Neuron> NeuralLayer::getNeurons()
{
    return _neurons;
}
