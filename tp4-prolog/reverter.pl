reverter([A], [A]).
reverter([A | X], L) :- reverter(X, Y), concatenar(Y, [A], L).

concatenar([], L, L).
concatenar([A | L1], L2, [A | L3]) :- concatenar(L1, L2, L3).