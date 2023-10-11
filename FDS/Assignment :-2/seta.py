#01
'''
import numpy as np
print("Expected Output:\n");
print("Original flattened array:\n");
demo=np.array([[0,1],[2,3]]);
print(demo);
print("Maximum value of the above flannated array : \n",np.max(demo));
print("Minimum value of the above flannated array : \n",np.min(demo));
'''

#03

import numpy as np
import pandas as pd
data={'Name':pd.Series(['raj','sachin','suraj','dilkush']);
       'Age':pd.Series([17,20,27,19);
       'Rating':pd.Series([4 6 2 8]);
     }
df=pd.DataFrame(data);
print(df.describe());
     
