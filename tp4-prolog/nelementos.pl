nelementos([], 0).
nelementos([_ | R], S) :- nelementos(R, S1), S is S1 + 1.