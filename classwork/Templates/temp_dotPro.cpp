#include <iostream>
using namespace std;

template <class T>
class vector {

public:
    T *arr;
    int size; // Change the type of 'size' to 'int'

    vector(int m) { // Change the parameter type to 'int'
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector<T> &v) { // Add '<T>' to 'vector'
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;
    vector<float> v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 0.2;
    v2.arr[2] = 1.6;
    float a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}
