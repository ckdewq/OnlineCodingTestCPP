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
	int arrInput[1000] = { 0, };

	int numInput = 0;

	cin >> numInput;

	for (int i = 0; i < numInput; i++) {
		cin >> arrInput[i];
	}

	for (int i = 0; i < numInput; i++) {
		for (int j = 0; j < numInput-1; j++) {
			if (arrInput[j] > arrInput[j+1]) {
				int temp = arrInput[j];
				arrInput[j] = arrInput[j+1];
				arrInput[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < numInput; i++) {
		cout << arrInput[i] << endl;
	}

	return 0;
}