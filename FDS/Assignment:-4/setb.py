'''import pandas as pd
import matplotlib.pyplot as plt
data={
'pl':[1,2.4,6,3.5,1,0.5],
'pw':[0.2,0.2,0.6,0.4,0.9,0.3]
}
df=pd.DataFrame(data)
plt.scatter(data=df,x='pl',y='pw')
plt.show()
'''
#Q1
'''
from pandas import*
from numpy import*
from matplotlib.pyplot import*
df=read_csv("Iris.csv")
data=df['SepalLengthCm']
data1=df['PetalWidthCm']
print(df)
scatter(data,data1)
show()
'''
'''
#Q2
from pandas import*
from numpy import*
from matplotlib.pyplot import*
df=read_csv("Iris.csv")
data=df['SepalLengthCm']
data1=df['SepalWidthCm']
print(df)
scatter(data,data1)
show()
'''

#Q3
from pandas import*
import seaborn as sns
from numpy import*
from matplotlib.pyplot import*
df=read_csv("Iris.csv")
'''
data1=df['SepalLengthCm']
data3=df['SepalWidthCm']
data4=df['PetalLengthCm']
data2=df['PetalWidthCm']
print(df)
boxplot(data1,vert='False')
boxplot(data2,vert='False')
boxplot(data3,vert='False')
boxplot(data4,vert='False')
'''
sns.boxplot(x=df["Species"],y=df["SepalLengthCm"],palette="Blues")
show()































