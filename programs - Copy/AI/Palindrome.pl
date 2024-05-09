palindrome(L) :- reverse(L,L).
conc([],L2,L2).
conc([H|T],L2,[H|L3]):- conc(T,L2,L3).

reverse([],[]).
reverse([H|T],R) :- reverse(T,R1), conc(R1,[H],R).
