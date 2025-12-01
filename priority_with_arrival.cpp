#include <bits/stdc++.h> 
using namespace std;

struct Process {
    int id, at, pr, bt, wt, tat;
    bool done=false;
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
    for (int i = 0; i < n; i++) {
        p[i].id = i+1;
        cin >> p[i].at >> p[i].pr >> p[i].bt;
    }

    int time = 0, completed = 0;
    vector<int> seq;

    while (completed < n) {
        int idx = -1, bestpr = 1e9;

        for (int i = 0; i < n; i++) {
            if (!p[i].done && p[i].at <= time && p[i].pr < bestpr) {
                bestpr = p[i].pr;
                idx = i;
            }
        }

        if (idx == -1) { time++; continue; }

        seq.push_back(p[idx].id);

        p[idx].wt = time - p[idx].at;
        time += p[idx].bt;
        p[idx].tat = p[idx].wt + p[idx].bt;
        p[idx].done = true;
        completed++;
    }

    printSequence(seq);

    cout << "PID\tAT\tPR\tBT\tWT\tTAT\n";
    for (auto &x : p)
        cout << x.id << "\t" << x.at << "\t" << x.pr
             << "\t" << x.bt << "\t" << x.wt << "\t" << x.tat << "\n";
}
