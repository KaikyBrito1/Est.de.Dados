#include <iostream>
#include <vector>

using namespace std;

int main() {
    int qtdDias;
    cin >> qtdDias;

    // Se não houver dias válidos, encerra
    if (qtdDias <= 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> prices(qtdDias);

    // Leitura dos preços
    for (int i = 0; i < qtdDias; i++) {
        cin >> prices[i];
    }

    // Assumimos que a compra inicial foi no primeiro dia
    int precoMinimo = prices[0];
    int maiorLucro = 0;

    // Percorremos a partir do segundo dia para testar as vendas
    for (int i = 1; i < qtdDias; i++) {
        int lucroHoje = prices[i] - precoMinimo;

        // Se vender hoje der mais lucro do que tínhamos antes, atualizamos
        if (lucroHoje > maiorLucro) {
            maiorLucro = lucroHoje;
        }

        // Se o preço de hoje for menor do que a nossa menor compra, atualizamos a compra
        if (prices[i] < precoMinimo) {
            precoMinimo = prices[i];
        }
    }

    cout << maiorLucro << endl;

    return 0;
}