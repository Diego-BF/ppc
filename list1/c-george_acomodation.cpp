# include <iostream>

using namespace std;

int main() {
    int num, res, ttl = 0, p, q, i;

    cin >> num;

    for(i = 0; i < num; i++) {
        cin >> p;
        cin >> q;

        res = q - p;
        if(res >= 2) { ttl++; }
    }

    cout << ttl << "\n";
    return 0;
}