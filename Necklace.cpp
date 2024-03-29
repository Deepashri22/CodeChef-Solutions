#include <iostream>
#include <queue>
using namespace std;

void rotateNecklace(queue<int>& necklace, int k) {
    for (int i = 0; i < k; ++i) {
        int pearl = necklace.front();
        necklace.pop();
        necklace.push(pearl);
    }
}

int main() {
    int T, n, k;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        queue<int> necklace;
        
        // Read the integers on the pearls
        for (int i = 0; i < n; i++) {
            int pearlValue;
            cin >> pearlValue;
            necklace.push(pearlValue);
        }
        
        // Correct k to be within the bounds and rotate the queue
        k %= n;
        rotateNecklace(necklace, k);

        // Print the new order of pearls
        while (!necklace.empty()) {
            cout << necklace.front() << " ";
            necklace.pop();
        }
        cout << "\n";
    }
    return 0;
}
