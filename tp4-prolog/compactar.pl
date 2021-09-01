compactar([], []).
compactar([L], [[1, L]]).
compactar([L, L], [[2, L]]).

compactar([L, X | E], [[1, L] | F]) :- L\==X -> compactar([X | E], F).
compactar([L, L | E], [[Y, L] | F]) :- compactar([L | E], [[N, L] | F]), Y is (N + 1).