ultimo([X | []], X).
ultimo([_ | Y], U) :- ultimo(Y, U). 