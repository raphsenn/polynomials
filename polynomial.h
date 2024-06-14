


class Polynomial {

private:
    float* coefficients_;
    int size_;
    int degree_;

public:
    // Default-Constructor.
    Polynomial();

    // Copy-Constructor (for Polynomial object).
    Polynomial(Polynomial &other);
    
    // Copy-Constructor (for array of coefficients (floats)).
    Polynomial(float coefficients[]);
    
    // Copy-Constructor (for array of coefficients (integers)).
    Polynomial(int coefficients[]);

    ~Polynomial();

    // Returns the degree of the polynom.
    int degree();
    
    // Returns the max degree the of the polynom in which polynomring it was defined.
    int size();

    // Prints Polynomial.
    void print();
};
