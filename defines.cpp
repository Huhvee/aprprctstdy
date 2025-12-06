#define func1(x) 2 * pow(x, 2) - 5 * x - 3
#define func2(x) pow(-x, 2) - 2 * x + 6
#define round_acc(x,y) std::ceil(x*(1/y))*y

const double accuracy = 1.0e-6;