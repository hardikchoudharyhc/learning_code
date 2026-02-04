""" One of the popular python library. Some of the places where it is used:-
a. Data science
b. Machine learning
c. Stock market analysis
d. Medical research
e. Image processing.

Python vs Numpy
1. Speed is faster in numpy (50-100x)
2. Memory usage is lower in numpy
3. Need loops for calculation in python
4. While dealing with larger dataset, numpy is preferred. """

import numpy as np

numpy_array = np.array([1,2,3,4,5]) # Conversion of a list into array
Array2d = np.array([[3,4,5],
                   [2,3,4]])
# print(Array2d)

""" To create an array with pre initialized values.
np.zeros(shape , dtype = float , order = 'C' ) => To create a n array with 0.
np.ones(shape , dtype = float , order = 'C' ) => To create an array with 1
np.full(shape , fill_value, dtype = float , order = 'C' ) => To create an array with fill_value. 
where,
shape = [size of array] eg (3,4)}
dtype = [data type]
order = [memory layout rowmajor or colmajor] """

arr = np.arange(1,10,2)
# arr = np.arange(start, stop, step, dtype = None)
# print(arr)

# Function to create an identity matrix
# np.eye(N, M = None, k = 0, dtype = float)
# M = no of cols ( defaults to N), k = diagonal index

Array2d.shape # Print out the no or rows and cols.
Array2d.size # Tells the size of array.
Array2d.ndim # Tells the dimension of array. 
Array2d.dtype # To find the data type of ds.

age = np.array(["21", "22", "23"])
intAge = age.astype(int) # Change the data type into numpy array.

numpy_array + 5 # Add 5 to all elements. Can do all operation in same way.

np.sum(numpy_array) # Add all elements of array.
np.mean(numpy_array) # Mean of the array.
min(numpy_array) # Min value of array.
max(numpy_array) # Max value of array.
np.std(numpy_array) # Standard deviation
np.var(numpy_array) # Variance

"""
Indexing - To access a single element using its position.
Slicing - To access multiple elements using ranges. (subset accessing) arr[start, stop(excluded), step]
Fancy indexing - Fancy indexing uses arrays or lists of indices to select specific positions. 
Boolean masking - This is condition-based selection, not index-based.
"""

numpy_array[::-1] # Reverse the array.  
print(numpy_array[numpy_array > 1]) # Boolean masking,

# Reshaping - To change dimension of 1-D array without changing elements. Changes the original array
# np.reshape(numpy_array)

# To change multi-dimensional array into 1-D array;
Array2d.ravel() # Changes the original array into 1-d array.
Array2d.flatten() # Create a copy of the original array into 1-d array.
# np.insert(array name, index, value, axis = 0(row wise) / 1(col wise)/ None (in straight line)) 
# np.append(array name, value) 
# np.concatenate(array name, array name, axis = 0(vetical stacking)/ 1(horizontal stacking))
# np.delete(array name, index, axis = None) Return a new array with deleted value 

# Stack array horizontally(hstack) or vertically(vstack).
# np.vstack((a, b, c))
# np.hstack((a, b, c))

# Splitting array into subset:
# np.split(array name, parts)

# top,bottom = np.hsplit(Array2d,3) # Split array column wise.
# top1,bottom2 = np.vsplit(Array2d, 2) # Split array row wise.

""" Broadcasting - Broadcasting is a NumPy rule that lets arrays of different shapes interact in arithmetic without copying data.
eg - array + scalar, array + smaller_array

"""
numpy_array2 = numpy_array - 10 # NumPy array operating with scaler(single values). Scaler is expanded to operate with all element of the array.
numpy_array3 = numpy_array - numpy_array2 # NumPy array operating with other NumPy array. Here dimension should be same og both the arrays. eg - a 2x3 matrix can operate with 1x3 (1x3 will be expanded like scalers)
print(numpy_array2,numpy_array3)

# Vectorization in Python - Coding approach to write code that operates on entire arrays at once instead of using explicit Python loops.

# Broadcasting is a rule system focus on matching dimension, shape compatibility, While Vectorization is acoding approach focus on speed and simplicity, avoiding loops(it exist without NumPy).

np.nan # Invalid or missing numerical result.
np.isnan # Way to check for NaN values in NumPy.

# np.nan_to_num(array, nan=0.0, posinf=None, neginf=None) # Convert nan to num

np.inf # Very large number which is outside the range of datatype.
# np.isinf(array) To find out which value is np.inf