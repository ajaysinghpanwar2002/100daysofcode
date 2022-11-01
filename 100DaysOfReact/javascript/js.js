// normal function
export default function dosomething(){
    
}

// arrow function 
export const dosomething = () =>{

}

// anonymous function
<button onClick={()=>{
    console.log('i was clicked')
}}>
</button>

//ternary
let ages = 10;
let names = ages > 9 ? "ayush" : "pankaj";

// objects
const person = {
    name : "ajay",
    age : 20,
    isMarried : false,
};


// const name = person.name
// const age = person.age
// const isMarried = person.isMarried

// by destructuring
const  {name,age,isMarried} = person;



// if you want to create / copy the same properties of the object you can just spread it over 
const person2 = {...person, name : "jack"}

// same you can do with array 
const nameee = ["ajay", "ayush","jass"];
const name2 = [...nameee, "ankit"]

// the function you use 
.map()
.filter()

const nameees = ["ajay", "ayush","jass","ajay"];
nameees.map((name)=>{
    console.log(name);
    return <h1>{name}</h1>
})

nameees.filter((name)=>{
    return name != "ajay"
})

// async + await + fetch

