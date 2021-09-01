adjacente(X, Y, [X, Y | _]).
adjacente(X, Y, [_ | S]) :- adjacente(X, Y, S).