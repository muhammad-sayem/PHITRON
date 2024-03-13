// Problem 1 //

/*
var n = 55;

if(n%2 == 0){
    console.log("Even");
}
else{
    console.log("Odd");
}
*/

// Problem 2 //
/*
var nums = [5, 8, 2, 13, 1, 12, 7, 11, 15, 29, 24, 21, 19];

console.log(
    nums.sort(function(a,b){
        return a-b;
    })
);
*/


// function swapping(x, y){
//     return [y, x];
// }

// var nums = [5, 8, 2, 13, 1, 12, 7, 11, 15, 29, 24, 21, 19];

// for(var i=0; i<nums.length-1; i++){
//     if(nums[i] > nums[i+1]){
//         var temp = nums[i];
//         nums[i] = nums[i+1];
//         nums[i+1] = temp;
//     }
// }

// for(var i=0; i<nums.length; i++){
//     console.log(nums[i]);
// }

// problem 3 //

var friends = ["sakib", "Anis", "Shahed", "Fahim"];
var res = 0;
var nm;

for(var i=0; i<friends.length; i++){
    var temp = friends[i].length;
    if(temp > res){
        res = temp;
        nm = friends[i];
    }
}

console.log("Largest name size:", res);
console.log(nm);

