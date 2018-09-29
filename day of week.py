# codes

# Python3 program to find day 
# of a given date 
  
def dayofweek(d, m, y): 
    t = [ 0, 3, 2, 5, 0, 3, 
          5, 1, 4, 6, 2, 4 ] 
    y -= m < 3
    return (( y + int(y / 4) - int(y / 100) 
             + int(y / 400) + t[m - 1] + d) % 7) 
  
print("Enter the date in the following format:dd mm yyyy")
dd=int(input("enter date\n"))
mm=int(input("enter month\n"))
yyyy=int(input("enter year\n"))
day = dayofweek(dd, mm, yyyy) 
week={0:"sunday",1:"monday",2:"tuesday",3:"wednesday",4:"thursday",5:"friday",6:"saturday"}
print(week[day])
