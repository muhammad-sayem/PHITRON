/*
var person = {
    hands: 2, 
    friends: 10,
    age: 23
}

console.log(person);
console.log(Object.keys(person));       // Output: [ 'hands', 'friends', 'age' ] //
console.log(Object.values(person));       // Output: [ 2, 10, 23 ] //
console.log(Object.entries(person));       // Output: [ [ 'hands', 2 ], [ 'friends', 10 ], [ 'age', 23 ] ] //
*/

var person = {
    hands: 2, 
    friends: 10,
    age: 23,

    college: {
        collegeName: "Adamjee Cantonment College",
        location: "Dhaka Cantonment"
    }
}

console.log(person.college.collegeName);    // Output: Adamjee Cantonment College //

