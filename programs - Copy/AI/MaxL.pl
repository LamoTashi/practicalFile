maxList([X],X).
maxList([H,Y|T],M) :- maxList([Y|T],M1),
    max(H,M1,M).

max(X,Y,X):- X>=Y,!.
max(_,Y,Y).
