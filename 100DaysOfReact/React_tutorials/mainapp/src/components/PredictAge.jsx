import React, { useEffect } from 'react'
import Axios from 'axios';
import { useState } from "react"

function PredictAge() {
    const [name, setName] = useState("")
    const [predictedAge, setPredictedAge] = useState(0);
    const [count, setCount] = useState(0);
    const fetchData = () => {
        Axios.get(`https://api.agify.io/?name=${name}`).then((res) => {
            setPredictedAge(res.data.age)
            setName(res.data.name)
            setCount(res.data.count)
        })
    }

    useEffect(() => {
        fetchData();
    }, [])
    return (
        <div>
            <input placeholder='Ex. Ajay...' onChange={(event) => {
                setName(event.target.value);
            }} />
            <button onClick={fetchData}>Predict Age</button>
            <h1> Predicted Age of {name} is {predictedAge}, we have {count} users with same name</h1>
        </div>
    )
}

export default PredictAge