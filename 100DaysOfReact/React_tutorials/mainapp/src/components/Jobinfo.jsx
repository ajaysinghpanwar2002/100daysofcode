import React from 'react'

function Jobinfo(props) {
    return (
        <div>
            salary is {props.salary} <br />
            position is {props.position}<br />
            company is {props.company}<br />
        </div>
    )
}

export default Jobinfo