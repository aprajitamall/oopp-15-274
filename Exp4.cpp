#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "Elements of Vector:";

    for (auto num : numbers)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}