#include <iostream>
#include <vector>
using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2;
}

void display(const vector<string> *const v)
{
    for (auto str : *v)
        cout << str << " ";
    cout << endl;
}

void display(int *array, int sentinel)
{
    while (*array != sentinel)
        cout << *array++ << endl;
    cout << endl;
}

int main()
{
    int value{10};
    int *int_ptr{nullptr};

    cout << "Value: " << value << endl;
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "---------------------------" << endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout << "---------------------------" << endl;
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "---------------------------" << endl;
    int scores[]{100, 98, 97, 79, 85, -1};
    display(scores, -1);

    cout << endl;
    return 0;
}