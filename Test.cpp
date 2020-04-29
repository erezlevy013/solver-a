#include <iostream>
#include <complex>
#include "doctest.h"
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("test RealVariable")
{
    RealVariable x;
    CHECK(solve((x^2) == 16));
    CHECK(solve(2*x-4 == 10));
    CHECK(solve(x*2+5 == 16));
    CHECK(solve((x^2)+(x^2) == 16 + 16));
    CHECK(solve(x*x-8/x == 12));
    CHECK(solve( 2*x + 4.0 == 20 + 6.0*x/2 - x));
    CHECK(solve(x-x+x == x));
    CHECK(solve((x^2)-(x^2) == 0));
    CHECK(solve((x^2)+2*x+1 == 1));
    CHECK(solve((x^2) -x -12 == 0));
}


TEST_CASE("test RealVariable")
{
    RealVariable x;
    CHECK(solve(x+15 == -8));
    CHECK(solve(1+x == -2-2*x));
    CHECK(solve(2*x+7-5*x-12 == -8*x+3));
    CHECK(solve(-3-x == -8*x+3));
    CHECK(solve(19*x == 0));
    CHECK(solve(3*x == 1));
    CHECK(solve(x+x == 5));
    CHECK(solve(3*x-3*-7 == 8*x));
    CHECK(solve((1/3)*x+(1/4)*x == 1));
    CHECK(solve((1/2)*x+(1/2)*x == x));
    CHECK(solve((x/3) == (3/x)));
    CHECK(solve((x^2)/4+(2/x) == 0));
}
TEST_CASE("test RealVariable")
{
    RealVariable x;
    CHECK(solve(x+5+5) == 10);
    CHECK(solve(7*2+7*2 -x == 0));
    CHECK(solve(3*x == 9));
    CHECK(solve(7*x == 28));
    CHECK(solve(2*x == -10));
    CHECK(solve(10*x == -60));
    CHECK(solve(-4*x == -36));
    CHECK(solve(x+4*x == 6+4));
    CHECK(solve(3*x-x == 10));
    CHECK(solve(5*x+x == 45-3));
    
}

TEST_CASE("test RealVariable")
{
    RealVariable x;
    CHECK(solve(8*x+4*x-2*x == 37-7+10));
    CHECK(solve(-2*x+7*x-5*x == 24-7));
    CHECK(solve(-1*x+6 == 3*x-2));
    CHECK(solve(10*x+8 == 4*x+44));
    CHECK(solve(-17*x+18 == x+44));
    CHECK(solve(-115*x+44-1*x+21 == -4+13*x+8-9*x+1));
    CHECK(solve(-13*x+16*x+x == -4-8+44));
    CHECK(solve(-2*x+7*x-5*x == 24-7));
    CHECK(solve((x^2)+2*x+2 == -1*x*x-2*x-2));
    CHECK(solve(x*x*x == x*(x^2)));
    
}
TEST_CASE("throw RealVariable")
{
    RealVariable x;
    CHECK(solve(2 * x +x/9 == 100));
    CHECK_THROWS(solve((x^3) ));
    CHECK_THROWS(solve((x^2) == -1));
    CHECK_THROWS(solve((x^2)*0 == 1));
    CHECK_THROWS(solve(2/x == 0));
    CHECK_THROWS(solve((x == 2 == 5)));
    CHECK_THROWS(solve(x/x == 2));
    CHECK_THROWS(solve((x^2)/(x^2) == -1));
    CHECK_THROWS(solve((x^3)+(x^4)+(x^5)));
    CHECK_THROWS(solve(2 * x  == 1));
    CHECK_THROWS(solve(x*x*x == ((x^3))));
}




TEST_CASE("test complexVariable")
{
    ComplexVariable x,y;
    CHECK(solve(x == x));
    CHECK(solve(x == y));
    CHECK(solve(y+5i  == x+y));
    CHECK(solve( 3i-3i == -2i+2i));
    CHECK(solve( y+5i == x+3i));
    CHECK(solve(x-x+x == y));
    CHECK(solve((x^2)-(y^2) == 0));
    CHECK(solve((x^2)*x+2i+1 == 1));
    CHECK(solve( y-x+12i == 0));
}


TEST_CASE("test complexVariable")
{
    ComplexVariable x,y,z;
    CHECK(solve(x/z == -8));
    CHECK(solve(1+x == -2-2*x == y+z+x));
    CHECK(solve(2+z*x+7*x+5i-12 == -8*x+3));
    CHECK(solve(x/y) == solve(y/x));
    CHECK(solve(19*(z^2)/x == 0));
    CHECK(solve(3*x == x+1i));
    CHECK(solve(x+x == 5*5/2));
    CHECK(solve(y*3*x-3*-7+1i == 8*z*x));
    CHECK(solve((1/3)*x+5i+x == 1));
    CHECK(solve((1/2)*x+(1/2)*x +66i == x +66i));
    CHECK(solve((x/3) == y/3));
    CHECK(solve((x^2)/4+(x/2) == 0));
}
TEST_CASE("test complexVariable")
{
    ComplexVariable x,y,z;
    CHECK(solve(y+y+y == x/5));
    CHECK(solve(4-x == 0));
    CHECK(solve(x+5i+x+5i == x/10+5i));
    CHECK(solve(12*x == z+99i));
    CHECK(solve(2+z+7i == -10));
    CHECK(solve(10*x+4i == -60));
    CHECK(solve(-4*x+3i == z+5i));
    CHECK(solve(z*y/x == x+5i));
    CHECK(solve(3*x-x == 10*x+9i));
    CHECK(solve(5*x+x+6i == 45-3*z+1i));
    CHECK(solve(2 * x + 9i == 1));
    
}


TEST_CASE("throw ComplexVariable")
{
    ComplexVariable x,z;
    CHECK_THROWS(solve((x^3)));
    CHECK_THROWS(solve((x^4) == -1));
    CHECK_THROWS(solve((x^2)*0 == 1));
    CHECK_THROWS(solve(x+2i == 0));
    CHECK_THROWS(solve((x == z == 2 == 5)));
    CHECK_THROWS(solve(x/x + z/z == 1));
    CHECK_THROWS(solve((x^2)/(x^2) == -1));
    CHECK_THROWS(solve((x^3)+(z^4)+(x^5)));
    CHECK_THROWS(solve(8+x/(8-8)  == 1));
    CHECK_THROWS(solve(z*z*z == ((x^3))));
    CHECK_THROWS(solve((x+5i)/(x+5i) == 0));
    CHECK_THROWS(solve(x/x +1i == 2));
    CHECK_THROWS(solve((z^2)/(x^2) == -1));
    CHECK_THROWS(solve((z^5)));
    CHECK_THROWS(solve(x == ((x^3))));
}
