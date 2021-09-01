rotacionarn(_, [], []).
rotacionarn(0, L, L).
rotacionarn(N, [X | Y], L) :- A is (N - 1), rotacionarn(A, Y, R), concatenar(R, [X], L).

concatenar([], L, L).
concatenar([A | L1], L2, [A | L3]) :- concatenar(L1, L2, L3).