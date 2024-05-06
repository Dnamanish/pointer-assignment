#include <iostream>
using namespace std;
void prod(int *a, int *b)
{
    int result = (*a) * (*b);
    cout << result;
}
int main()
{
    int a, b;
    cout << "Enter no1:";
    cin >> a;
    cout << "Enter no1:";
    cin >> b;
    prod(&a, &b);
}