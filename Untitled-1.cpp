#include <iostream>
#include <string>
using namespace std;

void logMsg(const string& msg, int level) {
    const string tag[] = {"", "INFO", "WARN", "ERROR"};
    cout << "[" << tag[level] << "] " << msg << endl;
}

double interest(double principal, double years, double rate = 7.5) {
    return principal * rate * years / 100;
}

int main() {
    double principal, years;

    cout << "Give principal amount: ";
    cin >> principal;

    cout << "Give number of years: ";
    cin >> years;

    cout << "Interest: " << interest(principal, years) << endl;

    return 0;
}
