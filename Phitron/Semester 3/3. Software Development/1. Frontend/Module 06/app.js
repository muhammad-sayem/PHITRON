/*
var h1 = document.getElementsByTagName("h1");
console.log(h1);

var title = (document.getElementById("title").style.color = 'blue');
console.log(title);

document.getElementById("title").style.removeProperty("color");

var child = document.getElementsByClassName("child");
console.log(child);
*/

/*
Get attribute and set Attribute //

var img = document.getElementById("img");

// console.log(img.getAttribute("src"));
img.setAttribute("alt", "profile picture")          // "alt" holo je attribute set korte chai tar name and "profile picture" holo value //
// console.log(img.getAttribute("alt"));


img.classList.add("testClass");     // Add class // 
console.log(img);
*/

/*
var hero = document.getElementById("hero");
console.log(hero.innerText);

var input = document.getElementById("input");
console.log(input.value);

var parent = document.getElementById("parent").innerHTML;
console.log(parent);
*/

/*
// create-element-appenchild-nodelist-parentnodes 

// var testDiv = document.getElementsByClassName("test");
// console.log(testDiv[0].childNodes[1].parentNode.parentNode.childNodes[3]);

var newDiv = document.getElementById("newDiv");

var p = document.createElement("p");
p.innerText = "Notun Div Banailam";
newDiv.appendChild(p);
*/

// addEventListener //

// document.getElementById("submit-btn").addEventListener("click", function(e){
//     console.log("Congratulations!! Button is Working!!");
// });


// document.getElementById("submit-btn").addEventListener("click", function(e){
//     var inputValue = document.getElementById("input").value;
//     console.log(inputValue);
// });

document.getElementById("input").addEventListener("blur", function(e){
    console.log(e.target.value);
});

