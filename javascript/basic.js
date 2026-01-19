// ---------- Basics of javascript ---------
// Scope
var a = 5;
let b = 6;
const c = 7; // Constant, can't be changed.

// var is not used mostly cos it causes hoisting (initialized as undefined at starting of the code)issues and global pollution. It can be redeclared. Var and const solve this issue as they are block scoped.

// console.log(typeof a); Print the datatype of the variable.
// console.log(typeof(a)); 


// console.table([a,b,c]); 
// Shows the output in tabular form


"use strict" // Treat the code as per newer versions
// alert(3+3) shows pop-up in browser.



/* ---- Datatypes ----
Primitive - These are immutable, meaning their values cannot be changed directly.
number = 2^53.
bigint
boolean = t/f
string = ""
null = standalone value. it is object
undefined
symbol = unique

Non-Primitive / Reference Types - These are mutable and stored by reference.
object, array, function, date, map/set, weakmap/weakset, regular expression.

*/

// ---- Conversions ----

let score = "33";
let num = Number(score);
// console.log(typeof num); Number
// console.log(typeof score); String


let string = "abc";
let stringNum = Number(string);
// console.log(stringNum); => Prints NaN


let number = 34;
let string2 = String(number);
// console.log(string2);
// console.log(typeof string2);


let id1 = Symbol("abc");
let id2 = Symbol("abc");
// console.log(id1 === id2); => False.


// ---- Operations ----
// console.log(2**3); 2^3 , exponential operator.


// console.log(str1 + str2); // Concat 2 strings.


// console.log(1+2+"4"); => 34
// console.log("3" + 1); => 31


// console.log("2">1); True
// console.log("02">1); True


// console.log(null == 0);
// console.log(null > 0);
// console.log(null >= 0);
// Comparison operator convert null into number so last is true and first is false, while assignment operator won't so it is false.

// console.log("3" === 3);
// Strictly equal operator -  Both value and type must be equal.



// Memory type - Stack (Primitive), Heap (Non-Primitive)

let str1 = "abc";

let str2 = str1; // str2 get a copy of str1, original value of str1 remain intact. Value is given  copy
console.log(str2);

str2 = "pqr";
console.log(str2);

let obj1 = {
    name : "abc"
};
let obj2 = obj1;
obj2["name"] = "def"; // Here actual value of obj1.name is changed. Value is given as reference.
console.log(obj1.name);
