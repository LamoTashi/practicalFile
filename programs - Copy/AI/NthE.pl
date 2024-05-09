nElement(1,[H|_],H).
nElement(N,[_|T],X) :- N1 is N-1, nElement(N1,T,X).
