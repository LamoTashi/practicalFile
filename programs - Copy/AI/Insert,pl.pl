conc([],L2,L2).
conc([H|T],L2,[H|L3]) :- conc(T,L2,L3).

insert(I,1,L,M):- conc([I],L,M).
insert(I,N,[X|Y],[X|M]):-N>1,N1 is N-1,
    insert(I,N1,Y,M).
