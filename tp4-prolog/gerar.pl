gerar(X, X, [X]).
gerar(Y, A, [Y | L]) :- Y<A, Z is Y+1, gerar(Z, A, L).