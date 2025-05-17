#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, double> cryptoPrices;

    // Sample crypto prices (you can update this manually)
    cryptoPrices["bitcoin"] = 65000.0;
    cryptoPrices["ethereum"] = 3200.0;
    cryptoPrices["dogecoin"] = 0.08;
    cryptoPrices["solana"] = 150.5;
    cryptoPrices["cardano"] = 0.45;

    string coin;
    cout << "Welcome to Crypto Price Viewer!" << endl;
    cout << "Enter cryptocurrency name (e.g., bitcoin, ethereum): ";
    cin >> coin;

    // Convert input to lowercase (basic method)
    for (auto& ch : coin) {
        ch = tolower(ch);
    }

    if (cryptoPrices.find(coin) != cryptoPrices.end()) {
        cout << "Current price of " << coin << " is $" << cryptoPrices[coin] << endl;
    } else {
        cout << "Sorry, we don't have data for \"" << coin << "\"." << endl;
    }

    return 0;
}

