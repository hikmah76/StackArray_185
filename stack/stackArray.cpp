#include <iostream>
#include <string>

using namespace std;

class stackArray {
private:
	int stack_array[5];
	int top;

private:
	//construktor
	stackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) { // step 1
			cout << "number of data exceeds limit" << endl;
			return 0;
		}

		top++;
		stack_array[top] = element; // step 3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
		}
		cout << "\nThe popped element is: " << stack_array[top] << endl;
		top--;
	}

	// method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};
