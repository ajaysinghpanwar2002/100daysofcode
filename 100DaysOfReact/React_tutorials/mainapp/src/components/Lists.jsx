import React from 'react'

function Lists() {
    const users =[
        {name:"ajay ", age:220},
        {name:"ayush ", age:210},
        {name:"pankaj ", age:201},
        {name:"lukas ", age:220},
        {name:"raj ", age:222},
        {name:"khusbu ", age:211},
    ]
    // const names = ["ajay", "ayush", "Raj", "pankaj", "lukas"];

    return (
        <div>
            {/* {names.map((name, key) => {
                return <h1 key={key}>{name}</h1>;
            })
            } */}
            {
                users.map((user,key)=>{
                    return(
                        <h1 key={key}>{user.name} and {user.age}</h1>
                    )
                })
            }
        </div>
    )
}

export default Lists