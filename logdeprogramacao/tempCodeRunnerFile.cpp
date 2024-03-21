int n;
    cout << "Digite um nuúmero" << endl;
    cin >> n;

    if (n % 70) {
        cout << "Esse numero é divisivel" << endl;

    } else if(!n % 70) {
        cout << "Esse numero nao é divisivel" << endl;
    }
    return 0;