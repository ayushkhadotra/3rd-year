#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "kha tak chahiye : ";
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i = i+1){
        sum += i;
    }
    cout << "Sum is : " << sum << endl;
    return 0;
}