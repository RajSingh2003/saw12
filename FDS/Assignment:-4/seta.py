
#Q1
'''
import numpy as np
import matplotlib.pyplot as plt
x=np.random.rand(50)
y=np.random.rand(50)
#plt.plot(x,y,color='pink')
#plt.scatter(x,y,color='k' marker="^")
#plt.hist(x,edgecolor='k')
plt.boxplot(x,vert=False)
plt.show()

'''
'''
#Q2
import numpy as np
import matplotlib.pyplot as plt
x=np.random.rand(50)
a=np.append(x,[2,3])
plt.boxplot(a,vert=False)
plt.show()
'''
#Q3
'''
import matplotlib.pyplot as plt
sub=['FDS','WT','TCS','CN']
mark=[77,89,80,92]
#plt.pie(mark,labels=sub,autopct="%1.1f%%",explode=[0.1,0.0,0.0,0.0])
plt.bar(sub,mark,color='g',width=0.5,edgecolor='k')
plt.xlabel("x-aixs")
plt.ylabel("y-aixs")
plt.title('BAR GRAPH')
plt.show()
'''

#Q4
'''
from pandas import*
from numpy import*
from matplotlib.pyplot import*
df=read_csv("Iris.csv")
data=df['Species']
data1=df['Id']
#print(df)
bar(data,data1,edgecolor='k')
show()
'''

#Q5

from pandas import*
from numpy import*
from matplotlib.pyplot import*
df=read_csv("Iris.csv")
data=df['Species']
data1=df['Id']
print(df)
pie(data1,labels=data)
show()


#Q6
'''
x-special/nautilus-clipboard
copy
file:///data/ty51/TYBCS-51/FDS/Assignment:-4/Iris.csv
'''
'''
from pandas import*
from numpy import*
from matplotlib.pyplot import*
df=read_csv("Iris.csv")
data=df['Species']
#print(df)
hist(data,edgecolor='k',linewidth=2,bins=3,alpha=0.5)
show()
'''






















