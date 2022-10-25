import React from 'react'

function message() {
    function clicked(){
        console.log('i was clicked')
    }
    return (
        <div>
            <h1>
                welcome visitor
            </h1>
            <button onClick={clicked}> Like </button>
        </div>
    )
}

export default message