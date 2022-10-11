// 1) creating components 

/*
import { func } from "prop-types";

function MyButton() {
    return (
        <button>Button</button>
    );
}

export default function QuickStart() {
    return (
        <div>
            <h1>this is Quick start</h1>
            <MyButton />
        </div>
    )
}
*/
// 2) Displaying data

/*
const user = {
    name: "ajay",
    imageUrl: "https://avatars.githubusercontent.com/u/92615235?v=4",
    imageSize: 90
};

export default function QuickStart() {
    return (
        <>
            <h1>{user.name}</h1>
            <img
                src={user.imageUrl}
                alt={'photo of ' + user.name}
            />
        </>
    )
}
*/

// 3) conditional rendering 

// noobs
/*
let content;
if (isLoggedIn) {
    content = <AdminPanel />;
}
else {
    content = <LoginForm />
}
return (
    <div>
        {content}
    </div>
);

// begineer

<div>
    {isLoggedIn ? (
        <AdminPanel />
    ) : (
        <LoginForm />
    )}
</div>

// expert

<div>
    {isLoggedIn && <AdminPanel/>}
</div>

*/

// 4) Rendering Lists

/*
const products = [
    { title: 'Cabbage', id: 1 },
    { title: 'Garlic', id: 2 },
    { title: 'Apple', id: 3 },
];

const ListItems = products.map(product =>{
    <li key={product.id}>
        {product.title}
    </li>
});

return(
    <ul>{ListItems}</ul>
)
*/

// 5) Responding to events

/*
function MyButton(){
    function handleClick(){
        alert('you clicked me ') ;   
    }
    return(
        <button onClick={handleClick}>
        Click me
        </button>
    );
}
*/

// 6) Updating the screen , if you want your component to store some information 

// first, import useState from react 
import { useState } from "react";

// now declare a state variable inside your components 
// function MyButton() {
//     const [count, setCount] = useState(0);
// }
// you will get two things from useSate : the current state(count), and the function that lets you update it (setCount).

/*
function NoOfCars() {
    const [cars, setCars] = useState(0);
    function Clicked() {
        setCars(cars + 1);
    }

    return (
        <button onClick={Clicked}>
            there are {cars} cars
        </button>
    )
}
*/

// 7) Using Hooks 

/*
Functions starting with use are called Hooks. useState is a built-in Hook provided by React. You can find other built-in Hooks in the React API reference. You can also write your own Hooks by combining the existing ones.

Hooks are more restrictive than regular functions. You can only call Hooks at the top level of your components (or other Hooks). If you want to use useState in a condition or a loop, extract a new component and put it there.
*/

// 8) sharing data between components

/*
export default function QuickStart() {
    const [count, setCount] = useState(0);

    function handleClick() {
        setCount(count + 1);
    }
    function MyButton({ count, onClick }) {
        return (
            <button onClick={onClick}>
                Clicked {count} times
            </button>
        );
    }
    return (
        <div>
            <MyButton count={count} onClick={handleClick} />
        </div>
    )
}
*/