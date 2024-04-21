#include <iostream>

using namespace std;

bool isPerfect(int num) {

    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {

        if (num % i == 0) {

            sum += i;
        }
    }

    return sum == num;
}

void generatePerfectNumbers(int N, int perfectNumbers[], int& size) {

    size = 0;

    for (int i = 1; i < N; i++) { 

        if (isPerfect(i)) {

            perfectNumbers[size++] = i;
        }
    }
}

int linearSearch(const int arr[], int size, int target) {

    for (int i = 0; i < size; ++i) {

        if (arr[i] == target) {

            return i; 
        }
    }

    return -1; 
}

int main() {

    setlocale(LC_CTYPE, "ukr");

    int N;

    cout << "����i�� ����� N: ";
    cin >> N;

    const int MAX_SIZE = 100; 
    int perfectNumbers[MAX_SIZE];
    int size;

    generatePerfectNumbers(N, perfectNumbers, size);
   
    cout << "��������i ����� ����i �� " << N << ":\n";

    for (int i = 0; i < size; ++i) {

        cout << perfectNumbers[i] << " " << '\n';

    }

    int target;
    cout << "����i�� �����, ��� ����i��� ������: ";
    cin >> target;

    int index = linearSearch(perfectNumbers, size, target);

    if (index != -1) {

        cout << "����� " << target << " �������� �� �����i� " << index << ".\n";

    }

    else {

        cout << "����� " << target << " �� �������� � �����i.\n";

    }

    return 0;
}
