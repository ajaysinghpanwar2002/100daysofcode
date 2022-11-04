import React from 'react'
import Axios from 'axios'
import { useState } from 'react'
import { useEffect } from 'react'

function Excuses() {

    const [excuses, SetExcuse] = useState("")
    const [reasons, setReasons] = useState("")
    const party = () => {
        SetExcuse(party)
    }
    const family = () => {
        SetExcuse(family)
    }
    const Office = () => {
        SetExcuse(Office)
    }

    const fetchData = () => {
        Axios.get(`https://excuser.herokuapp.com/v1/excuse/${excuses}`).then((res) => {
            setReasons(res.data[0].excuse);
        })
    }
    useEffect(() => {
        fetchData();
    }, [])
    return (
        <div>
            <h1>Generate an Excuse </h1>
            <button onClick={party}>Party</button>
            <button onClick={family}>Family</button>
            <button onClick={Office}>Office</button>
            <h2>{reasons}</h2>
        </div>
    )
}

export default Excuses

// https://excuser.herokuapp.com/v1/excuse/party/