// ------------- String -------------

const str1 = 'abc';
const str2 = 'browser';

console.log(str1, "is using ",+str2);
// Bad way to concat and 
console.log(`${str1} is using ${str2}`);
// ${...} => String interpolation = Inserting variable or expression directly into a string and this way of writing is template literals.

let str3 = new String('Hardikhc');
console.log(str3);
// This string is like an Object, it has key and values, key are index and value are individual characters. This can be easily seen in browser. And in the browser itself, you can see many different functions.

console.log(str3[0]);
// Print the character corresponding to the input index.

console.log(str3.toLowerCase());
// Print the copy of string in lowercase.

console.log(str3.charAt(4));
// Print the character at 4th index (5th position).

console.log(str3.indexOf('h'));
// Print the index corresponding to the input character.

const str4 = str3.substring(0,4);
console.log(str4);
// Print the substring from 0 to 3rd index.

// const str5 = str3.slice(0,5);
const str5 = str3.slice(-8,-1);
console.log(str5);
// Print the substring from 0 to 4th index. We can use negative number =, then it will give -1 to last character but exclude the last character and print the other value accordingly.

const str6 = '     abcd  efgh  ';
console.log(str6.trim());
// Remove the string and end space. .start() trims the starting and .end() trims the ending value.

const str7 = 'hardik-choudhary-js-learning';
console.log(str7.replace('-', '_'));
// Only one occurance of - is replaced, to replace all occurance of '-', "/-/g" is used.
console.log(str7.replace(/-/g,'_'));
console.log(str7.includes('js'));
// Tell if it contain the input substring.

console.log(str7.split('-',2));
// Splits a string into a new array of substrings based on a separator. (separator,limit), limit is the number of time to seperate or max no of element in array.