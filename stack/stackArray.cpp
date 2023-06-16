#include <iostream>
#include <string>

using namespace std;

class stackArray {
private:
	int stack_array[5];
	int top;

public:
	// constructor
	stackArray() {
		top = -1;
	}

	void push() {
		int element;
		cout << "\nEnter an Element: ";
		cin >> element;
		if (top == 4) {
			cout << "Number of data exceeds limit" << endl;
			return;
		}

		top++;
		stack_array[top] = element;
		cout << endl;
		cout << element << " ditambahkan (pushed)" << endl;
	}

	void pop() {
		if (empty()) {
			cout << "\nStack is empty. Cannot pop." << endl;
			return;
		}
		cout << "\nThe popped element is: " << stack_array[top] << endl;
		top--;
	}

	// method to check if stack is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n**Stack Menu**\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cin >> ch;
		switch (ch) {
		case '1':
			s.push();
			break;
		case '2':
			if (s.empty()) {
				cout << "\nStack is empty." << endl;
			}
			else {
				s.pop();
			}
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nInvalid Choice" << endl;
		}
	}
}



