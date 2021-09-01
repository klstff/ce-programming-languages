remover(_, [], []).
remover(X, [X | L], L1) :- remover(X, L, L1).
remover(X, [Y | L], [Y | L1]) :- X \== Y, remover(X, L, L1).