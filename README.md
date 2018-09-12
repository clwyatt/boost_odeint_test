Test of the ODE integrator in boost
====================================

Install
--------

Dependencies:

* [boost 1.68.0](https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.gz) (odeint)

Notes
-------

On unix I find it easiest to manage dependencies using gnu stow.
Let `~/local` be your local stow managed directory with packages in `~/local/stow`.
Build boost using 
`./bootstrap.sh --with-libraries=filesystem`
followed by `./b2 stage` and `./b2 install --prefix=~/local/stow/boost_1_68_0`

Then `cd ~/local/stow; stow boost-1.68.0`

Before running cmake set BOOST_ROOT to ~/local
