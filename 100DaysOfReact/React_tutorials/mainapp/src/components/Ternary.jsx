import React from 'react'

function Ternary() {
    const age = 2;
    const loggedin = true
    let ages = age > 18 ? "overage" : "underage";
    return (
        <div style={{ color: loggedin ? "green" : "red" }}>
            <h1>
                {ages}
            </h1>
        </div>
    )
}

export default Ternary