#include <iostream>
#include <string>

using namespace std;

int main() {
    unsigned int n, d, t, t_prev, i, count = 1;

    cin >> n;
    cin >> d;
    cin >> t;

    for(i=1; i < n; i++) {
        swap(t, t_prev);
        cin >> t;

        if(t - t_prev <= d) { count++; }
        else { count = 1; }
    }

    cout << count << "\n";

    return 0;
}