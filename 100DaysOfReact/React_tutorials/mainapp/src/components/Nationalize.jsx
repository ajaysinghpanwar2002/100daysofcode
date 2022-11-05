import React from 'react'
import Axios from 'axios'
import { useState } from 'react'
import { useEffect } from 'react'


function Nationalize() {
    const [name, setName] = useState("");
    const [country, setCountry] = useState("");
    const [probabaility, setProbability] = useState(0);

    const fetchData = () => {
        Axios.get(`https://api.nationalize.io/?name=${name}`).then((res) => {
            setCountry(res.data.country[0].country_id)
            setProbability(res.data.country[0].probability)
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
            <h1>Predict Nationality with name </h1>
            <h2>{name} belongs to {country} and we are {probabaility*100} sure </h2>
            <button onClick={fetchData}>Predict</button>
        </div>
    )
}

export default Nationalize