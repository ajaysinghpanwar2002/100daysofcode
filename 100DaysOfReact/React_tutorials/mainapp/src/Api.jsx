import React, { useEffect } from 'react'
import Axios from 'axios';
import { useState } from "react"
function Api() {
    // fetch api 

    // fetch("https://catfact.ninja/fact")
    //     .then((Response) => Response.json())
    //     .then((data) => {
    //         console.log(data);
    //     })

    const [catfact, setCatFact] = useState("");

    const fetchcatfact = () => {
        Axios.get("https://catfact.ninja/fact").then((res) => {
            setCatFact(res.data.fact) ;
        });
    }
    // useEffect ke andar isliye daala h ke baar na call kre
    useEffect(() => {
        fetchcatfact();
    }, [])


    return (
        <div>
            <button onClick={fetchcatfact}>Generate cat fact</button>
            <p>{catfact} </p>
        </div>
    )
}

export default Api
