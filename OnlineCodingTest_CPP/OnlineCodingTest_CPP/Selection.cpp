/*����
N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�
ù° �ٿ� ���� ���� N(1 �� N �� 1, 000)�� �־�����.��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����.�� ���� ���밪�� 1, 000���� �۰ų� ���� �����̴�.���� �ߺ����� �ʴ´�.

���
ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.*/

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