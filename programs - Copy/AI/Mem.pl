member(X,[X|_Tail]).
member(X,[_Head|Tail]) :- member(X,Tail).
