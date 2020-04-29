#include <iostream>
#include <complex>

using namespace std;

namespace solver
{
    

    struct RealVariable
    {
        
        double number;
        RealVariable()
        {
            number=0;
        }

        RealVariable& operator * (RealVariable &other);
        RealVariable& operator * (double n);
       
        RealVariable& operator - (RealVariable &other);
        RealVariable& operator - (double n);
        
    
        RealVariable& operator ^ (double n);

        
        RealVariable& operator + (RealVariable &other);
        RealVariable& operator + (double n);

        RealVariable& operator / (RealVariable &other);
        RealVariable& operator / (double n);

        RealVariable& operator == (RealVariable &other);
        RealVariable& operator == (double n);
      
    };


    double solve(RealVariable x);
    double solve(double n);

   
    RealVariable& operator * ( double n, RealVariable &other);

    //RealVariable& operator - (RealVariable &other, double n);
    RealVariable& operator - (double n, RealVariable &other);

    RealVariable& operator + (double n, RealVariable &other);

    RealVariable& operator / (double n, RealVariable &other);




    struct ComplexVariable
    {
        double real;
        double im;
        ComplexVariable()
        {
            real = 0;
            im = 0;
        }


        ComplexVariable& operator * (ComplexVariable &other);
        ComplexVariable& operator * (double n);

        ComplexVariable& operator - (ComplexVariable &other);
        ComplexVariable& operator - (double n);

        ComplexVariable& operator == (ComplexVariable &other);
        ComplexVariable& operator == (double n);

        ComplexVariable& operator ^ (double n);

        ComplexVariable& operator + (ComplexVariable &other);
        ComplexVariable& operator + (double n);

        ComplexVariable& operator / (ComplexVariable &other);
        ComplexVariable& operator / (double n);


    };
    double solve(ComplexVariable c);
    complex<double>& solve(complex<double> &c);

    ComplexVariable& operator * (double n, ComplexVariable &other);

    ComplexVariable& operator - (double n, ComplexVariable &other);

    ComplexVariable& operator + (double n ,ComplexVariable &other);
    ComplexVariable& operator + (ComplexVariable& other ,complex<double> other2);
    ComplexVariable& operator + (complex<double> &other);
    
    
   

};