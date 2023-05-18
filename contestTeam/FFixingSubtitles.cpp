#include <bits/stdc++.h>

using namespace std;

float tiempo = 0;
int termino = 0;
int t = 0;

void solve()
{
    int i[4], j[4];

    cin.ignore();

    string tiempo1, linea1, linea2;

    cin >> tiempo1 >> linea1 >> linea2;

    // "Hours:Minutes:Seconds,Miliseconds".
    i[0] = stoi(tiempo1.substr(0, 2));
    i[1] = stoi(tiempo1.substr(3, 2));
    i[2] = stoi(tiempo1.substr(6, 2));
    i[3] = stoi(tiempo1.substr(9, 3));

    j[0] = stoi(tiempo1.substr(17, 2));
    j[1] = stoi(tiempo1.substr(20, 2));
    j[2] = stoi(tiempo1.substr(23, 2));
    j[3] = stoi(tiempo1.substr(26, 3));

    int inicio = (i[0] * 3600) + (i[1] * 60) + i[2] + (i[3] / 1000);

    int fin = (j[0] * 3600) + (j[1] * 60) + j[2] + (j[3] / 1000);

    if (t != 1)
    {
        inicio += termino;
        fin += termino;
    }

    // sumar al i y j el tiempo
    inicio += tiempo;
    fin += tiempo;

    // convertir a horas, minutos, segundos y milisegundos
    int horas = inicio / 3600;
    inicio %= 3600;
    int minutos = inicio / 60;
    inicio %= 60;
    int segundos = inicio;
    int milisegundos = (i[3] % 1000);

    // convertir a horas, minutos y segundos
    int horas2 = fin / 3600;
    fin %= 3600;
    int minutos2 = fin / 60;
    fin %= 60;
    int segundos2 = fin;
    int milisegundos2 = (j[3] % 1000);

    // imprimir
    printf("%02d:%02d:%02d,%03d --> %02d:%02d:%02d,%03d\n", horas, minutos, segundos, milisegundos, horas2, minutos2, segundos2, milisegundos2);

    cout << linea1 << endl;
    if (linea2 != "")
        cout << linea2 << endl;
    cout << endl;
    termino = fin;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tc = 1;
    scanf("%d %f", &tc, &tiempo);

    for (t = 1; t <= tc; t++)
    {
        solve();
    }

    return 0;
}
