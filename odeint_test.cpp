#include <iostream>

#include <boost/numeric/odeint/stepper/runge_kutta_dopri5.hpp>

using namespace std;
using namespace boost::numeric::odeint;

/* The type of container used to hold the state vector */
typedef std::vector< double > state_type;

/* The rhs of x' = f(x) */
void fx_env( const state_type &x , state_type &dx ,  double t )
{
    double w = 10;

    dx[0] = -w*exp(-0.6)*x[0]; // + w*v;

}


int main(int argc, char **argv)
{
    const double dt = 0.01;
    runge_kutta_dopri5<state_type> stepper;
    state_type x(1);
    x[0] = 1.0;
    
    double t = 0.0;
    cout << x[0] << endl;
    for ( size_t i(0); i <= 200; ++i){
	stepper.do_step(fx_env, x , t, dt );
	t += dt;
	cout << x[0] << endl;
    }

    return 0;
}
   
