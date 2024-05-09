writeEven :- write("List is Even Lengthed").
writeOdd :- write("List is Odd Lengthed").

len([],0).
len([_|T],R) :- len(T,R1),R is R1+1.
evenLength(L) :- len(L,R), Rmod2 is mod(R,2), Rmod2=:=0, writeEven.
oddLength(L) :- len(L,R), Rmod2 is mod(R,2), Rmod2=\=0, writeOdd.
