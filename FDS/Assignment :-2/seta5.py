
import numpy as np
import matplotlib.pyplot as plt
num=np.array([.5,0.7,1.0,1.2,1.3,2.1])
bins=np.array([0,1,2,3])
print("NUM=",num)
print("Bins=",bins)
print("Result=",np.histogram(num,bins))
plt.hist(num,bins=bins)
plt.show()
