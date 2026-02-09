""" Data Manipulation - Changing, organizing or preparing data to make it useful and easier to understand.
Data Analysis - Extracting patterns, trends and insights from the data to solve problem. 
Panda is a powerful Python library designed for data manipulation and data analysis. It simplifies working with structured databases 
=> Pandas work seamlessly with csv, excel formats. It handles missing values easily and is built on NumPy for fast computations.
=> It handles million of row efficiently, beginner friendly, work with libraries like Matplotlib and Scikit-Lib. 

Series - One dimensional labeled array that can hold any data type (even objects).
Use to track changes or pattern over time.

Dataframe - A two dimensional labeled structure in pandas (like the database, excel sheet, sql table). Consist of rows and column where:
a. Rows have indices(label)
b. Column have names(label) """

import pandas as pd


# To read data:
# df = pd.read_csv("test.csv")
# df = pd.read_excel("test1.xlsx")
# df = pd.read_json("test.json")
# print(df)

# To work on the data stored in cloud eg- google drive or cloud, import library called gcsfs

# To write data:
data =  {
    "Name":['person1', 'person2', 'person3',None],
    "Age": [22,20,20,None],
    "Branch": ['CSE', 'CY', 'ECE',None],
    "Salary" : [10000, 20000, 10000, None]
}

df = pd.DataFrame(data)
# print(df) Prints the data (with indexing).

# Get dataset output as different formats.
# df.to_csv("output.csv", index=False)
# df.to_excel("output.xlsx", index=False)
# df.to_json("output.json", index=False)


""" Thing to consider while working on a data
1. Understand the dataset. 
2. Identify the problem 
3. Plan the next steps. """

data = pd.read_csv("test.csv")
# print(data.head(10)) # Prints the first 10 rows(default = 5)
# print(data.tail(10))# Prints the last 10 rows(default = 5)

# print(data.info()) # Tells the information about the data.
# print(data.describe()) # Describe the dataset with many parameters like average, standard deviation, min, 25%(average of first quarter)
# print(f'Shape: {data.shape}') # Tell the dimension of the dataset.
# print(f'Columns: {data.columns}') # Names of the column of the dataset.

df["Name"] # Select single column
subset = df[["Name", "Age"]] # Another way to select multiple way
# Conditional selection
print(df[(df['Age'] > 19) & (df["Age"] < 21)])

# Add column in dataset
df["New"] = df["Age"] * 2 + 3  # Or can pass any other datatype as well (list etc)
df.insert(0, "Id", [10,20,30,None])# df.insert(location, column_name, data)

# Update the values- df.loc[row_index, "Column_name"] = new_value
df.loc[2, "Age"] = 25
print(df)

# Removing columns df.drop(columns = ["column_name","name2"....,"name_last"], inplace = True) inplace true means it modify the existing dataset, false mean it create a new one. 
df.drop(columns = ["New"], inplace = True)


""" Missing data
Represented by - NaN, None (for object data type)

Method to find missing values-
isnull() => True means value missing, False means not.
"""
print(df.isnull())
# print(df.isnull().sum()) Count of total missing values per row

# Removing and filling the missing values
# df.dropna(axis = 0, inplace = True) axis = 0 to remove rows and 1 to remove column
# df.dropna(inplace=True)
# print(df)

# df.fillna(value, inplace =True)


""" Interpolation - liner, polynomial, time methods.
It help in preserving data integrity, avoid data loss, and create smooth trends
Uses:-
1. Time series data.
2. Numeric data with trends.
3. Avoid dropping row.

Cons:-
1.  Can't work with categorical data.
2. The data with interpolation might not be correct.

df.interpolate(method = "Linear", axis = 0, inplace = True) """

df['Age']=df['Age'].interpolate(method="linear")
print(df)


# Sorting data in one column
# 1. Sorting data of single column
# df.sort_values(by="Age", ascending=True, inplace=True)
# print(df)

# df.["Age"].mean() We can perform these operations in the column like this.
grouped = df.groupby("Age")["Salary"].sum()
print(grouped)
# pd.merge(dataframe1, dataframe2, on = "column_name", how = "type_of_join")
# pd.concat([df1,df2..and so on], axis = 0, ignore_index  = True)