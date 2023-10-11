import pandas as pd
import numpy as np
d=pd.read_csv("data.csv")
print(d)
print("Describe : ",d.info())
print("Describe : ",d.describe())
print("shape: ",d.shape)
print("Display first 3 rows : \n",d.head(3))

print(d.isnull())
print("Missing Value :

