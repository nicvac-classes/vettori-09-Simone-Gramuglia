#include <iostream>
#include <vector>

using namespace std;

int main() {
    double hsomma, vsomma, hmax, vmax;
    int n, i;

    // N = giri
    cout << "Inserisci il numero dei giri" << endl;
    cin >> n;
    double h[n], v[n];

    cout << "Inserisci i tempi di Hamilton" << endl;
    for (i = 0; i <= n - 1; i++) {
        cin >> h[i];
    }
    cout << "Inserisci i tempi di Verstappen" << endl;
    for (i = 0; i <= n - 1; i++) {
        cin >> v[i];
    }
    hsomma = 0;
    for (i = 0; i <= n - 1; i++) {
        hsomma = hsomma + h[i];
    }
    vsomma = 0;
    for (i = 0; i <= n - 1; i++) {
        vsomma = vsomma + v[i];
    }

    // calcola il max
    hmax = h[0];
    for (i = 0; i <= n - 1; i++) {
        if (h[i] > hmax) {
        } else {
            hmax = h[i];
        }
    }
    vmax = v[0];
    for (i = 0; i <= n - 1; i++) {
        if (v[i] > vmax) {
        } else {
            vmax = v[i];
        }
    }
    if (hsomma < vsomma) {
        cout << "Ha vinto Hamilton!" << endl;
    } else {
        cout << "Ha vinto Verstappen!" << endl;
    }
    if (hmax < vmax) {
        cout << "Il giro più veloce è stato di Hamilton con " << hmax << " secondi!" << endl;
    } else {
        cout << "Il giro più veloce è stato di Verstappen con " << vmax << " secondi!" << endl;
    }
}