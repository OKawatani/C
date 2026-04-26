#include<iostream>
#include<list>
using namespace std;

int main(){

    int n, m, x, y;

    cin >> n >> m;

    list<int> adj[n];

    for(int i = 0; i < m; i++){

        cin >> x >> y;
        
        x--;
        y--;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    for(int i = 0; i < m; i++){

        adj[i].sort();

        cout << adj[i].size();

        for(list<int>::iterator it =  adj[i].begin(); it != adj[i].end(); it++){

            cout << " " << *it + 1; 

        }
        cout << endl;
    }



}