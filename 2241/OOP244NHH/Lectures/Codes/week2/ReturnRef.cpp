#include<iostream>

using namespace std;

double global_var = 0.17;

// It will be double& getTax() {}
double& getTax() {
	return global_var;
}

int main_returnref() {
	cout << "BEFORE " << global_var << endl;
	getTax() = 0.21;
	cout << "AFTER " << global_var << endl;
	return 0;

}