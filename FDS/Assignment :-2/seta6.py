import pandas as pd
import scipy.stats as s
import numpy as np
d={"Name":["Raj","Sachin","Pandey","Aman","Raaj"],
    "percentage":[80,70,90,83,67],
    "Age":[19,15,19,23,21]}
df=pd.DataFrame(d)
print(df)
print("Average age : ",s.tmean(df['Age']) )   
print("Average age : ",s.tmean(df['percentage']).round(2))   
print(df.describe())
    

