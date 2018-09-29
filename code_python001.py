def intreverse(n):
	r=0
	while(n > 0):
	 lastDig = n %10
	 r = r *10 + lastDig
	 n = n //10
	return r 
def matched(str):
    count = 0
    for i in str:
        if i == "(":
            count += 1
        elif i == ")":
            count -= 1
        if count < 0:
            return False
    return count == 0
def sumprimes(l):
      s=0 
      m=len(l)
      for i in range(0,m):
        num=l[i]
        if(num>1):
          prime="true" 
          for j in range(2,num):
            if num%j==0:
              prime="false"
              break
          if prime=="true":
                s=s+num 
      return(s)
import ast

def tolist(inp):
  inp = "["+inp+"]"
  inp = ast.literal_eval(inp)
  return (inp[0],inp[1])

def parse(inp):
  inp = ast.literal_eval(inp)
  return (inp)

fncall = input()
lparen = fncall.find("(")
rparen = fncall.rfind(")")
fname = fncall[:lparen]
farg = fncall[lparen+1:rparen]

if fname == "intreverse":
   arg = parse(farg)
   print(intreverse(arg))
elif fname == "matched":
   arg = parse(farg)
   print(matched(arg))
elif fname == "sumprimes":
   arg = parse(farg)
   print(sumprimes(arg))
else:
   print("Function", fname, "unknown")

