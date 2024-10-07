#include <iostream>
using namespace std;

const int s = 5;

class Array {
private:
    int arr[s];

public:
    void insert(int pos, int num) {
        for (int i = s - 1; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = num;
    }

    void move_zeros() {
        int temp[s];  
        int tempIndex = 0;

        for (int i = 0; i < s; i++) {
            if (arr[i] != 0) {
                temp[tempIndex++] = arr[i];
            }
        }
        
        for (int i = 0; i < tempIndex; i++) {
            arr[i] = temp[i];
        }
        
        for (int i = tempIndex; i < s; i++) {
            arr[i] = 0;
        }
    }

    void display() {
        cout << endl;
        for (int i = 0; i < s; i++) {
            cout << " " << arr[i];
        }
    }
};

int main() {
    Array a;

    a.insert(1, 1);
    a.insert(2, 0);
    a.insert(3, 3);
    a.insert(4, 0);
    a.insert(5, 5);

    cout << "Original Array:";
    a.display();

    a.move_zeros();

    cout << "\nArray After Moving Zeros:";
    a.display();

    return 0;
}

