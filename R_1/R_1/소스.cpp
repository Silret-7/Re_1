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
	cout << "5개의 숫자를 입력하세요. : ";
	cin >> number[0] >> number[1] >> number[2] >> number[3] >> number[4];
	cout << "입력된 숫자 : " << number[0] << " , " << number[1] << " , " << number[2] << " , " << number[3] << " , " << number[4] << endl;

	int sum = total(number);
	int avg = average(number);

	cout << "합계 : " << sum << endl;
	cout << "평균 : " << avg << endl;


return 0;

}

