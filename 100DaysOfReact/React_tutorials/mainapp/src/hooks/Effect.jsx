import React from 'react'
import { useState, useEffect } from "react"

function Effect() {

    const [text,setText] = useState("");

    // basically 1 call back function h, har bar render hota h, and you can even limit that 
    useEffect(()=>{
        console.log("component Mounted");

        // here we'll put logic of what will happen after request completed 
        return () => {
            console.log("component UnMounted");
        }
    }, [])

    return (
        <div>
            <input
            onChange={(e)=>{
                setText(e.target.value);
            }}  
            />
            <h1>{text}</h1>
        </div>
    )
}

export default Effect