#include <bits/stdc++.h> 
using namespace std;

struct Process {
    int id, pr, bt, wt, tat;
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
        cin >> p[i].pr >> p[i].bt;
    }

    sort(p.begin(), p.end(), [](auto &a, auto &b){
        return a.pr < b.pr;
    });

    vector<int> seq;
    for (auto &x : p) seq.push_back(x.id);

    printSequence(seq);

    p[0].wt = 0;
    for (int i = 1; i < n; i++)
        p[i].wt = p[i-1].wt + p[i-1].bt;

    for (int i = 0; i < n; i++)
        p[i].tat = p[i].wt + p[i].bt;

    cout << "PID\tPR\tBT\tWT\tTAT\n";
    for (auto &x : p)
        cout << x.id << "\t" << x.pr << "\t" << x.bt
             << "\t" << x.wt << "\t" << x.tat << "\n";
}
