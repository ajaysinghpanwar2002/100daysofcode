import React from 'react'

fetch("https://catfact.ninja/fact")
    .then((Response)=> Response.json())
    .then((data)=>{
        
    })


function Api() {
    return (
        <div>
            <button>Generate cat fact</button>
            <p> </p>
        </div>
    )
}

export default Api