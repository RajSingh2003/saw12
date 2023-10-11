import pandas as pd

import matplotlib.pyplot as plt

df=pd.DataFrame(columns=['Name','Age','Percentage'])
df.loc[0]=['Riya',20,99.01]
df.loc[1]=['Raj',20,99.91]
df.loc[2]=['Doli',16,87]
df.loc[3]=['Nibha',21,90.4]
df.loc[4]=['Puja',25,66.6]
df.loc[5]=['Arti',15,88]
df.loc[6]=['Pallavi',18,79.9]
df.loc[7]=['Pandey',20,69.9]
df.loc[8]=['Aman',23,82]
df.loc[9]=['Sawan',19,76.03]
print(df);

print("Shape of The Data : ",df.shape);
print("Number of Rows And Column : ",df.size);
print("Data Type : ",df.dtypes);
print("Feature : ",df.info());
print(df.describe());

df.loc[10]=['Purandu',20,None]
df.loc[11]=['Parnit',None,99.91]
df.loc[12]=['Deepak',None,85]
df.loc[13]=['Neha',21,90.4]
df.loc[14]=['Amit',25,None]
df["remark"]=None
print(df);
print("Number of Observation : ",df.info());
print("Missing Vlaue : \n",df.isnull());
print("Duplicate Data : \n",df.duplicated());

df.drop(columns='remark',axis=1,inplace=True)
print(df)

#df.plot(x='Name',y='Percentage')
#plt.title('Line Plot')
#print(plt.show());

df.plot.scatter(x='Name',y='Percentage');
#plt.title('Line Plot')
print(plt.show());


