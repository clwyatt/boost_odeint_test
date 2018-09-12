RT-DEM: Real-Time Dynamic Expectation Maximization
===================================================

Install
--------

Dependencies:

* boost 1.60.0 (odeint)


Notes
-------

On unix I find it easiest to manage dependencies using gnu stow.
Let `~/local` be your local stow managed directory with packages in `~/local/stow`.
Build boost using `./boostrap.sh --prefix=~/local/stow/boost-1.60.0 --with-libraries=filesystem`
followed by `./b2 install`

Then `cd ~/local/stow; stow boost-1.60.0`

Before running cmake set BOOST_ROOT to ~/local
