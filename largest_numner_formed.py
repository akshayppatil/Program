'''
largest number formed from array(list)"
'''
p=['3','30','34','9']
def max_number(p):
    for i in range(0,len(p)):
        for j in range(i+1,len(p)):
            a=p[i]+p[j]
            b=p[j]+p[i]
            if(a<b):
                p[i],p[j]=p[j],p[i]
    return (p)
l=max_number(p)
print(l)
number = "".join([str(i) for i in l])
print(number)

            
        
    
