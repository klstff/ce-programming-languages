rotacionar([], []).        
rotacionar([X | Y], L) :- concatenar(Y, [X], L).

concatenar([], L, L).
concatenar([A | L1], L2, [A | L3]) :- concatenar(L1, L2, L3).