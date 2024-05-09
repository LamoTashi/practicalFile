mergelist([],[],[]).
mergelist(X,[],X).
mergelist([],Y,Y).
mergelist([H|T],[H1|T1],[H|R]) :- H=<H1,
    mergelist(T,[H1|T1],R).
mergelist([H|T],[H1|T1],[H1|R]) :- H1=<H,
    mergelist([H|T],T1,R).
