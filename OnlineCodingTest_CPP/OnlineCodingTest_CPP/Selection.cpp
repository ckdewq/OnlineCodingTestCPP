/*문제
N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1, 000)이 주어진다.둘째 줄부터 N개의 줄에는 숫자가 주어진다.이 수는 절대값이 1, 000보다 작거나 같은 정수이다.수는 중복되지 않는다.

출력
첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.*/

#include <iostream>

using namespace std;

int main()
{
	int arrInput[1000] = {0,};

	int numInput = 0;

	cin >> numInput;

	for (int i = 0; i < numInput; i++) {
		cin >> arrInput[i];
	}

	for (int i = 0; i < numInput-1; i++){
		int min = arrInput[i];
		int minIndex = i;

		for (int j = i+1; j < numInput; j++){
			if (min > arrInput[j]) {
				minIndex = j;	
				min = arrInput[minIndex];
			}
		}

		if (minIndex != i)
		{
			int temp = arrInput[i];
			arrInput[i] = arrInput[minIndex];
			arrInput[minIndex] = temp;
		}

	}

	for (int i = 0; i < numInput; i++) {
		cout << arrInput[i] << endl;
	}

	return 0;
}