unordered_set<string> h(S.begin(), S.end());
  for (string& s: S) if (h.count('!' + s)) {
    cout << s << endl;
    return 0;
  }

  cout << "satisfiable" << endl;