max(A,B,M) :- A>B,
    M is A.
max(_,B,M) :- M is B.
