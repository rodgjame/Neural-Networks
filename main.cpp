#include <iostream>
#include <neuron.h>

using namespace std;

int main()
{
    cout << "Project built" << endl;
    Neuron n (13);
    vector<double> v = n.GetWeights();
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n" << endl;
    }

    return 0;
}
