#include <iostream>
using namespace std;

int total(int number[5]){
		int sum = number[0] + number[1] + number[2] + number[3] + number[4];

		return sum;
	}
	
	int average(int number[5]){
		int sum = number[0] + number[1] + number[2] + number[3] + number[4];
		int avg = sum / 5;

		return avg;
	}

int main() {
	int number[5];
	cout << "5���� ���ڸ� �Է��ϼ���. : ";
	cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
	cout << "�Էµ� ���� : " << number[0] << " , " << number[1] << " , " << number[2] << " , " << number[3] << " , " << number[4] << endl;

	int sum = total(number);
	int avg = average(number);

	cout << "�հ� : " << sum << endl;
	cout << "��� : " << avg << endl;


return 0;

}

