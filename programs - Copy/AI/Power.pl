power(0,P,0) :- P>0.
power(X,0,1) :- X>0.
power(X,P,A) :- X>0,
    P>0,
    P1 is P-1,
    power(X,P1,Ans),
    A is Ans*X.
