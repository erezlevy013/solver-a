#include "solver.hpp"
#include <iostream>
#include <stdexcept>
#include <complex>

using  namespace std;
using namespace solver;


    

    
    double solver::solve(RealVariable x)
    {
        
        return 0;
    }
    double solver::solve(double n)
    {
        
        return 0;
    }


   
    RealVariable& solver::operator * (double n, RealVariable &other)
    {   
        return other;
    }
     RealVariable& RealVariable::operator * (RealVariable &other)
    {   
        return *this;
        
    }
     RealVariable& RealVariable::operator * (double n)
    {   
        return *this;
        
    }

   
     RealVariable& RealVariable::operator == (RealVariable &other)
     {
        return *this;
     }

    RealVariable& RealVariable::operator == (double n)
    {   
        return *this; 
    }
    


    RealVariable& solver::operator - ( double n, RealVariable &other)
    {
        return other;
    }
    RealVariable& RealVariable::operator - (RealVariable &other)
    {   
        return *this; 
    }
    RealVariable& RealVariable::operator - (double n)
    {   
        return *this;  
    }



   
    RealVariable& RealVariable::operator ^ (double n)
    {   
        return *this; 
    }


    RealVariable& RealVariable::operator + (RealVariable &other)
    {
        return *this;
    }
    RealVariable& RealVariable::operator + (double n)
    {
        return *this;
    }
    RealVariable& solver::operator + (double n, RealVariable &other)
    {
        return other;
    }


    RealVariable& RealVariable::operator / (RealVariable &other)
    {
        return *this;
    }
    RealVariable& RealVariable::operator / (double n)
    {
        return *this;
    }
    RealVariable& solver::operator / (double n, RealVariable &other)
    {
        return other;
    }





    double solver::solve(ComplexVariable x)
    {
        return 0;
    }
    complex<double>& solver::solve(complex<double> &x)
    {
        return x;
    }


    ComplexVariable& ComplexVariable::operator * (ComplexVariable &other)
    {
        return *this;
    }
    ComplexVariable& ComplexVariable::operator * (double n)
    {
        return *this;
    }
    ComplexVariable& solver::operator * (double n, ComplexVariable &other)
    {
        return other;
    }



    ComplexVariable& ComplexVariable::operator - (ComplexVariable &other)
    {
        return *this;
    }
    ComplexVariable& ComplexVariable::operator - (double n)
    {
        return *this;
    }
    ComplexVariable& solver::operator - (double n, ComplexVariable &other)
    {
        return other;
    }



    ComplexVariable& ComplexVariable::operator == (ComplexVariable &other)
    {
        return *this;
    }
    ComplexVariable& ComplexVariable::operator == (double n)
    {
        return *this;
    }



    ComplexVariable& ComplexVariable::operator ^ (double n)
    {
        return *this;
    }



    ComplexVariable& ComplexVariable::operator + (ComplexVariable &other)
    {
        return *this;
    }
    ComplexVariable& ComplexVariable::operator + (double n)
    {
        return *this;
    }
    ComplexVariable& solver::operator + (double n ,ComplexVariable &other)
    {
        return other;
    }
    ComplexVariable& solver::operator+(ComplexVariable& other ,complex<double> other2)
    {
      return other;
    }
    ComplexVariable& solver::operator + (std::complex<double> &other) 
    {
        ComplexVariable *c;
       
        return *c;
    }



    ComplexVariable& ComplexVariable::operator / (ComplexVariable &other)
    {
        return *this;
    }
    ComplexVariable& ComplexVariable::operator / (double n)
    {
        return *this;
    }

   






/*
    int main()
    {
        
        RealVariable x,y;
        ComplexVariable c;
        c+5i;
       2*x-4;

        solve(2*x-4 == 10);
    
        std::cout<<2<<endl;
        y.operator*(x);
        y.operator*(2);
        return 0;
    };*/
   
