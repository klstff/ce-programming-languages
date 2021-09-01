maior([M], M).
maior([X | S], M1) :- maior(S, B), (X > B -> M1 = X; M1 = B).