typedef struct Complex
{
    int rp, ip;
} Complex;

void ReadComplex(Complex* cmp);
void PrintComplex(Complex cmp);
Complex* AddComplex(Complex c1, Complex c2);
Complex* SubComplex(Complex c1, Complex c2);
Complex* MulComplex(Complex c1, Complex c2);