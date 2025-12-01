#include <bits/stdc++.h> 
using namespace std;

struct Process {
    int id, at, bt, wt, tat;
};

void printSequence(const vector<int>& seq) {
    cout << "Job Sequence: ";
    for (int i = 0; i < seq.size(); i++) {
        cout << "P" << seq[i];
        if (i != seq.size()-1) cout << " -> ";
    }
    cout << "\n\n";
}

int main() {
    int n;
    cin >> n;

    vector<Process> p(n);
    vector<int> seq;

    for (int i = 0; i < n; i++) {
        p[i].id = i+1;
        cin >> p[i].at >> p[i].bt;
    }

    sort(p.begin(), p.end(), [](auto &a, auto &b){
        return a.at < b.at;
    });

    for (auto &x : p)
        seq.push_back(x.id);

    printSequence(seq);

    int time = 0;

    for (int i = 0; i < n; i++) {
        if (time < p[i].at)
            time = p[i].at;

        p[i].wt = time - p[i].at;
        time += p[i].bt;
        p[i].tat = p[i].wt + p[i].bt;
    }

    cout << "PID\tAT\tBT\tWT\tTAT\n";
    for (auto &x : p)
        cout << x.id << "\t" << x.at << "\t" << x.bt 
             << "\t" << x.wt << "\t" << x.tat << "\n";
}
