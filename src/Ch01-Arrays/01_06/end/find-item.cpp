#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    // TODO: implement
    int found = 0;
    int index = 0;
    while (index < size && found == 0) {
        if (arr[index] == target) {
            found = 1;
        }
        index++;
    }
    return found;
}

int main()
{
    int arr[] = {21, 27, 33, 55, 67};
    int targets[] = {33, 331, 55, 66};
    size_t size = sizeof(arr)/sizeof(int);
    for (int i=0; i < sizeof(targets)/sizeof(int); i++) {
        if (1 == findItem<int> (arr, size, targets[i])) {
            cout << "Item %d " << targets[i] << " found in array" << endl;
        } else {
            cout << "Item %d " << targets[i] << " NOT found in array" << endl;
        }
    }
    return 0;
}
