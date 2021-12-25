# Migration of dict iteration code to Python 3

# There are now 3 different kinds of dict iteration that may need to be migrated to Python 3 when an application makes the transition:

# - Lists as mutable snapshots: d.items() -> list(d.items())
# - Iterator objects: d.iteritems() -> iter(d.items())
# - Set based dynamic views: d.viewitems() -> d.items()

# Import dictionary of Python 2 into Python 3
from __future__ import (absolute_import, division,
                        print_function, unicode_literals)
from builtins import (bytes, dict, int, list, object, range, str,
                      ascii, chr, hex, input, next, oct, open,
                      pow, round, super, filter, map, zip)

# Implement own defaultdict in a pretty straightforward manner
def defaultdict(default_type):
    class DefaultDict(dict):
        def __getitem__(self, key):
            if key not in self:
                dict.__setitem__(self, key, default_type())
            return dict.__getitem__(self, key)
    return DefaultDict()

# Transportation Simplex Method

# Demands - A,B,C,D,E
# W,X,Y,Z - Supply
# Cost matrix is given below
costs = {'W': {'A': 13, 'B': 25, 'C': 8, 'D': 13, 'E': 20},
         'X': {'A': 10, 'B': 19, 'C': 18, 'D': 5, 'E': 12},
         'Y': {'A': 25, 'B': 10, 'C': 15, 'D': 14, 'E': 18},
         'Z': {'A': 17, 'B': 24, 'C': 18, 'D': 13, 'E': 19}}

demand = {'A': 210, 'B': 240, 'C': 110, 'D': 80, 'E': 170}
cols = sorted(iter(demand.keys()))

supply = {'W': 430, 'X': 150, 'Y': 100, 'Z': 130}
res = dict((k, defaultdict(int)) for k in costs)
g = {}

# g contains all the columns and rows names like - a,b,c,... and so on

for x in supply:
    g[x] = sorted(iter(costs[x].keys()), key=lambda g: costs[x][g])
for x in demand:
    g[x] = sorted(iter(costs.keys()), key=lambda g: costs[g][x])
while g:
    d = {}
    for x in demand:
        d[x] = (costs[g[x][1]][x] - costs[g[x][0]][x]) if len(g[x]) > 1 else costs[g[x][0]][x]
    s = {}
    for x in supply:
        s[x] = (costs[x][g[x][1]] - costs[x][g[x][0]]) if len(g[x]) > 1 else costs[x][g[x][0]]
    f = max(d, key=lambda n: d[n])
    t = max(s, key=lambda n: s[n])
    t, f = (f, g[f][0]) if d[f] > s[t] else (g[t][0], t)
    v = min(supply[f], demand[t])
    res[f][t] += v
    demand[t] -= v
    if demand[t] == 0:
        for k, n in iter(supply.items()):
            if n != 0:
                g[k].remove(t)
        del g[t]
        del demand[t]
    supply[f] -= v
    if supply[f] == 0:
        for k, n in iter(demand.items()):
            if n != 0:
                g[k].remove(f)
        del g[f]
        del supply[f]

# Display results
for n in cols:
    print("\t", n, end=" ")
cost = 0
for g in sorted(costs):
    print("\n", g, end=' ')
    for n in cols:
        y = res[g][n]
        print("\t", y, end=' ')
        cost += y * costs[g][n]
print("\n\nTotal Cost = ", cost)
