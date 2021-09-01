ordenar(L, O) :-troca(L, L1), ordenar(L1, O).
ordenar(L, L).

troca([X | L], [X | L1]) :- troca(L, L1).
troca([X, Y | S], [Y, X | S]) :- X >= Y.