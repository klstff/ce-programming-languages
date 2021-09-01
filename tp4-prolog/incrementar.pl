incrementar([], []).
incrementar([X | L], [Y | L1]):- incrementar(L, L1), Y is X + 1.