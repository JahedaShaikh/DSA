'''
            OBJ
        /    |    \


1) ALSO KNOWN AS C3 ALGORITHM
2)  SAMUELE PADRONI PROPOSED THIS
3) FOLLOW DLR(DEPTG FIRST LEFT TO RIGHT)

Formula
MRO(X)=X+Merge(MRO(P1),MRO(P2),MRO(P3).....Parent list)

c1,c2,c3,c4
c1--head consider
c2,c3,c4---remaining consider tail

how merge works
(ABC,BCD,DEF)
A+

'''




class A: pass
class B: pass
class C: pass
class D(A,B): pass
class E(B,C): pass
class F(D,E,C): pass

print(A.mro())   # A,O
print(B.mro())   # B,O
print(C.mro())   # C,O
print(D.mro())   # D,A,B,O
print(E.mro())   # E,B,,C,O
print(F.mro())   # F,D,A,E,B,C,O

'''
print(F.mro())
mro(x)=x+merge(mro(p1),mro(p2)......parentlist)
mro(F)=F+merge(mro(D),mro(E),mro(C),DEC)
mro(F)=F+merge(mro(DABO,EBCO,CO,DEC)
TAKE HEAD LIST FIRST IF HEAD IS NOT PRESENT TAIL PART OF ANY LIST THEN 
TAKE HEAD AS A RESULT AND REMOVE REMAINING TAIL
F+D+MERGE(ABO,EBCO,CO,EC)
F+D+A+MERGE(BO,EBCO,CO,EC)
F+D+A+E+MERGE(BO,BCO,CO,C)
F+D+A+E+B+MERGE(O,CO,CO,C)
F+D+A+E+B+C+MERGE(O,O,O)
F+D+A+E+B+C RESULT  

FDAEBC



'''


