#include <cassert>
#include <cmath>
#include <vector>

typedef std::vector<double> vecd_t;

vecd_t linspace(double start, double end, double delta)
{
    assert(end >= start + delta);
    
    int N = ceil((end-start)/delta);

    vecd_t data(N);
    for(int i = 0; i < data.size(); ++i){
	data[i] = start + delta*i;
    }

    return data;
}

int main()
{

    // simulate data
    double dt = 1;
    double T = 200;
    int N = ceil(T/dt);

    auto t = linspace(0,N,dt);


    return 0;
}
