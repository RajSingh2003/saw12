
import pandas as pd
import numpy as np
import scipy.stats as s
df=pd.read_csv("file:///data/ty51/Downloads/Iris.csv")
print(df)
print(df.dtypes)
print("Min And Max value SpealLength : ",max(df["SepalLengthCm"]))
print("Min And Min value SpealLength : ",min(df["SepalLengthCm"]))

print("Min And Max value petallLength : ",max(df["PetalLengthCm"]))
print("Min And Max value petallLength : ",min(df["PetalLengthCm"]))

print(df.info())


print("Mean : ")
print("spealLength mean : ",s.tmean(df["SepalLengthCm"]).round(2))
print("spealWidth mean : ",s.tmean(df["SepalWidthCm"]).round(2))
print("petalLength mean : ",s.tmean(df["PetalLengthCm"]).round(2))
print("PetalWidth mean : ",s.tmean(df["PetalWidthCm"]).round(2))

print("Median : ",)
print("spealLength Median : ",np.median(df["SepalLengthCm"]).round(2))
print("spealWidth Median : ",np.median(df["SepalWidthCm"]).round(2))
print("petalLength Median: ",np.median(df["PetalLengthCm"]).round(2))
print("petalWidth Median : ",np.median(df["PetalWidthCm"]).round(2))

