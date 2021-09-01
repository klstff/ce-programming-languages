inserirFim(X, [], [X]).
inserirFim(X, [Y | L], [Y | L1]) :- inserirFim(X, L, L1).