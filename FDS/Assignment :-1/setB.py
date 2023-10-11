#x-special/nautilus-clipboard
#copy
import pandas as pd
import matplotlib.pyplot  as plt
df=pd.read_csv("file:///data/ty51/Downloads/SOCR-HeightWeight.csv");
#print(df);
df.head(10);
df.tail(10);
df.sample(20);
print(df);

print("Shape of Dataframe : ",df.shape);
print("size of DataFrame : ",df.size);
print("Data type : ",df.dtypes);

print("Number of Observatn ",df.info());
print("Statics Details : \n",df.describe());
print("Missing Value : ",df.isnull());
#df.fillna("NaN",inplace=True));
#print(df);

df["BMI"]=(df['Weight(Pounds)']/(df['Height(Inches)']**2));
print(df);

print("Maximum BMI : ",df.BMI.max());
print("Minmum BMI : ",df.BMI.min());

df.plot.scatter(x='Height(Inches)',y='Weight(Pounds)');
plt.title("scatter Diagram");
print(plt.show());
