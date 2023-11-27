#include <bits/stdc++.h>
using namespace std;

/*
backtrack(state) {
    if solution_found(state){
        - add state to ans
        - return
    }

    for all valid candidates:
        - add candidate to state
        - backtrack(state)
        - remove candidate from state
}

[ , , ] -> id = 0
[1, , ] -> id = 1
[1, 2, 3] -> = 2

input
3

output
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
*/

int n;

vector<vector<int>> ans;

bool solution_found(int id, vector<int> state)
{
    if (id == n)
    {
        return true;
    }
    else
        return false;
}

vector<int> get_candidates(vector<int> state)
{
    map<int, int> taken;

    for (int x : state)
    {
        taken[x] = 1;
    }

    vector<int> candidates;
    for (int i = 1; i <= n; i++)
    {
        if (taken.count(i) == 0)
        {
            candidates.push_back(i);
        }
    }
    return candidates;
}

void backtrack(int id, vector<int> state)
{
    // base case handle
    if (solution_found(id, state))
    {
        ans.push_back(state);
        return;
    }

    // loop over the candidates
    vector<int> candidates = get_candidates(state);

    for (int candidate : candidates)
    {
        state[id] = candidate;
        backtrack(id + 1, state);
        state[id] = 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    vector<int> initialState(n);

    backtrack(0, initialState);

    for (vector<int> permutation : ans)
    {
        for (int x : permutation)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}