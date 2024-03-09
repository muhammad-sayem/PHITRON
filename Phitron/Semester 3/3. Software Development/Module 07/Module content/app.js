/*
function check(){
    if(true){
        var x = "Hello";
    }
    console.log(x);
}

console.log(check());
*/

/*

const text = `jhohdssdoifofdsopf
sjdbfjcbxkhx
djbkjfbschdjhdschdskjs
vbdjbsjv
sdhshsdshdkvsdhfsdhnbvsjbd`

console.log(text);
*/

/*
// Template String //
const test = `World`
const text = `Hello ${test}`

console.log(text);
*/

// Spread Operator and copy array // 
/*
let num = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11];
// console.log(...num);
let newArray = ["Akib", "Rashed", ...num];
console.log(...newArray);
*/

// Max element of an array //
/*
let num = [7, 8, 1, 4, 5, 9, 10, 3];
console.log(Math.max(...num));
*/

// Arrow Function //

// Single Line  

// const test = () => 2*2*4;
// console.log(test());

/*
const test = () => {
    console.log("Testing Arrow Function");
    return "Returning from Arrow function";
}

console.log(test());
*/

// Array Destructuring //

/*
const numbers = [1, 2, 3, 4, 5, 6, 7];
const [first, second] = numbers;
console.log(first, second);
*/

// Object Destructing //
/*
const obj = {
    name: "Sayem",
    versity: "BUBT",
    id: 187,
    status: "single",
    github: "yes"
}

const {name, id} = obj;
console.log(name, id);

// const name = obj.name;
// const versity = obj.versity;
// console.log(name, versity);
*/

// Nested Object //
/*
const test = [
    {name: "Sayem",
    versity: "BUBT",
    id: 187,
    friends: ["sakib", "tamim", "masud"]
    },

    {name: "Sumon",
    versity: "BUP",
    id: 111,
    friends: ["sayem", "alif", "sourav"]
    },

    {name: "Abir",
    versity: "BUET",
    id: 222,
    friends: ["rafid", "shahed", "rifat"]
    }
]

console.log(test[0].friends[1]);
*/

// Map //

// Normal //

// const nums = [2, 3, 4, 5];
// let temp = [];

// for(let i=0; i<nums.length; i++){
//     temp.push(nums[i]*nums[i]);
// }

// console.log(temp);

// With Map //
/*
const nums = [2, 3, 4, 5, 6];
const square = nums.map(x => x*x)

console.log(square);
*/

// Filter and Find //

/*
const products = [
    {id: 1, brand: "xiaomi", price: 100, color: "Black"},
    {id: 2, brand: "realme", price: 250, color: "Red"},
    {id: 3, brand: "samsung", price: 200, color: "Blue"},
    {id: 4, brand: "realme", price: 350, color: "Black"},
    {id: 5, brand: "xiaomi", price: 150, color: "Blue"},
    {id: 6, brand: "iphone", price: 450, color: "Golden"},
    {id: 7, brand: "iphone", price: 500, color: "Black"},
];

const result = products.filter(pd => pd.color == "Black")
const result2 = products.filter(pd => pd.price > 200);

// console.log(result);
// console.log(result2);

const res = products.find(pd => pd.id == 2);
console.log(res);
*/

// const products = [
//     {id: 1, name: "xiaomi", price: 100, color: "Black"},
//     {id: 2, name: "realme", price: 250, color: "Red"},
//     {id: 3, name: "samsung", price: 200, color: "Blue"},
//     {id: 4, name: "realme", price: 350, color: "Black"},
//     {id: 5, name: "xiaomi", price: 150, color: "Blue"},
//     {id: 6, name: "iphone", price: 450, color: "Golden"},
//     {id: 7, name: "iphone", price: 500, color: "Black"},
// ];

// const productContainer = document.getElementById("product-container");

// const pr = products.forEach((product) => {
//     // console.log(product)

//     const h1 = document.createElement("h1");
//     h1.innerText = product.name;
//     productContainer.appendChild(h1);
// })

// API //
/*
fetch("https://fakestoreapi.com/products/1")
    .then(response => response.json())
    .then(data => {
        console.log(data);
    })
    .catch(err => {
        console.log(err);
    })
*/

// Promise, async and await //

// const getData = new Promise(function(resolve, reject){
//     return resolve(20)
// });

// getData.then(data=>console.log(data));

// fetch("https://fakestoreapi.com/products/1")
//     .then(res => res.json())
//     .then(data => console.log(data))
//     .catch(err => console.log(err))

// Main Part //

const loadData = async () => {
    try{
        const response = await fetch("https://fakestoreapi.com/products/1");
        const data = await response.json();
        console.log(data);
    }
    catch{
        (err) => {
            console.log(err);
        };
    }
};

loadData();

