/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Calculator{
    
    public:
    
    int Plus;
    int Minus;
    int Multipli;
    int Division;
    
    int Add(int a, int b){
        
        return a+b;
    }
    
    int Insert(int a, int b){
        
        return a-b;
    }
    
    int Multiplaction(int a, int b){
        
        return a*b;
    }
    
    int Divide(int a, int b){
        
        return a/b;
    }
    
    
};

int main()
{
    Calculator calculator;
    cout << calculator.Add(3,4) << endl;
    cout << calculator.Insert(4,6) << endl;;
    cout << calculator.Multiplaction(4,7) << endl;
    cout << calculator.Divide(1,6) << endl;


    return 0;
}
