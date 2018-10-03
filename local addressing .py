# codes
''' write a python programe to determine in a local network which network/computers are active. get a list of ip addresses from the user 
(each ip address entered as a strig).every time we would have to wait for a few sec. for the return values.A solution without threads is 
highly inefficient, because the script have to wait for every sec.'''




import threading,os,time
class tt(threading.Thread):
    def __init__(self,hos):
        super(tt,self).__init__()
        self.h=hos
    def run(self):
        resp=os.system("ping-n.1"+self.h)
        print(resp)
        if resp==0:
            print(self.h+"is up")
        else:
            print(self.h+"is down")
          
inp=input("hey there hope it works")
pp=tt(inp)
pp.start()
