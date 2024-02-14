#include <iostream>


namespace std {

class MathOperations {
	public:
	    double divide(double dividend, double divisor) {
	        if (divisor == 0) {
	            throw invalid_argument("Divisor cannot be zero.");
	        }
	        return dividend / divisor;
	    }
	};

}

int main() {
    try {
        MathOperations mathOps;
        double result = mathOps.divide(10, 0);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
