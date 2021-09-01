linearizar([L], L).
linearizar([X | R], L) :- linearizar(R, Y), concatenar(X, Y, L).

concatenar([], L, L).
concatenar([A | L1], L2, [A | L3]) :- concatenar(L1, L2, L3).