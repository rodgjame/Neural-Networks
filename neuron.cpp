#include "neuron.h"

/**
 * @brief Neuron::Neuron Default constructor.
 */
Neuron::Neuron()
{
    _numInputs = 0;
    srand(time(NULL));
}

/**
 * @brief Neuron::Neuron Constructor that will set the number of inputs a neuron has on creation.
 * @param numInputs Number of inputs for this neuron.
 */
Neuron::Neuron(int numInputs)
{
    _numInputs = numInputs;
    srand(time(NULL));
    for (int i = 0; i < numInputs; i++)
    {
        _weights.push_back(GenerateRandomNumber());
    }
}

/**
 * @brief Neuron::SetNumberOfInputs Sets the number of inputs a neuron has.
 * @param numInputs Number of inputs for this neuron.
 */
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

/**
 * @brief Neuron::GetNumberOfInputs Returns the number of inputs coming into this neuron
 * @return Number of inputs.
 */
int Neuron::GetNumberOfInputs()
{
    return _numInputs;
}

/**
 * @brief Neuron::GetWeights Returns the weights of the neron's inputs.
 * @return Vector containing the weights of the neron's inputs.
 */
vector<double> Neuron::GetWeights()
{
    return _weights;
}

/**
 * @brief Neuron::GenerateRandomNumber Returns a random number between -0.5 to 0.5 for weight initialization
 * @return random number between -0.5 to 0.5
 */
double Neuron::GenerateRandomNumber()
{
    double randomDouble = (double)rand() / RAND_MAX;
    return RAND_LOWERB + randomDouble * (RAND_UPPERB - RAND_LOWERB);
